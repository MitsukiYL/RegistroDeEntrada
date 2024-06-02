#include "SensorCtrl.h"
#include "CardCtrl.h"

using namespace RDEController;
using namespace System::IO;

SensorCtrl::SensorCtrl() {

}

List<sensor^>^ SensorCtrl::buscarSensorAll() {
	List<sensor^>^ listaSensor = gcnew List<sensor^>();
	array<String^>^ lineas = File::ReadAllLines("Sensor.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		String^ protocole = datos[1];
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		int registrationDate = Convert::ToInt32(datos[4]);
		int ID = Convert::ToInt32(datos[5]);
		String^ model = datos[6];

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		List<card^>^ listCard = objCardCtrl->buscarCardAll();

		sensor^ objSensor = gcnew sensor(pin, protocole, producer, active, registrationDate, ID, model, listCard);
		listaSensor->Add(objSensor);
	}
	return listaSensor;
}

sensor^ SensorCtrl::buscarSensorxID(int IDb) {
	sensor^ objSensor;
	array<String^>^ lineas = File::ReadAllLines("Sensor.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		String^ protocole = datos[1];
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		int registrationDate = Convert::ToInt32(datos[4]);
		int ID = Convert::ToInt32(datos[5]);
		String^ model = datos[6];

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		List<card^>^ listCard = objCardCtrl->buscarCardAll();

		if (ID == IDb) {

			sensor^ objSensor = gcnew sensor(pin, protocole, producer, active, registrationDate, ID, model, listCard);
		}

	}
	return objSensor;
}

void SensorCtrl::escribirArchivo(List<sensor^>^ listaSensor) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaSensor->Count);
	for (int i = 0; i < listaSensor->Count; i++) {
		sensor^ objSensor = listaSensor[i];
		lineasArchivo[i] = Convert::ToString(objSensor->getPin()) + ";" + objSensor->getProtocole() + ";" + objSensor->getProducer() + ";" + Convert::ToString(objSensor->getActive())
			+ ";" + Convert::ToString(objSensor->getRegistrationDate()) + ";" + Convert::ToString(objSensor->getID())
			+ ";" + Convert::ToString(objSensor->getModel());
	}
	File::WriteAllLines("Sensor.txt", lineasArchivo);
}

void SensorCtrl::agregarNewSensor(int pin, String^ protocole, String^ producer, bool active, int registrationDate, int ID, String^ model, List<card^>^ listCard) {
	List<sensor^>^ listaSensor = buscarSensorAll();
	sensor^ objSensor = gcnew sensor(pin, protocole, producer, active, registrationDate, ID, model, listCard);
	listaSensor->Add(objSensor);
	escribirArchivo(listaSensor);
}

void SensorCtrl::eliminarSensor(int IDb) {
	List<sensor^>^ listaSensor = buscarSensorAll();
	for (int i = 0; i < listaSensor->Count; i++) {
		if (listaSensor[i]->getID() == IDb) {
			listaSensor->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaSensor);
}
