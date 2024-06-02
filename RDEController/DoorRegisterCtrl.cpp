#include "DoorRegisterCtrl.h"
#include "CardCtrl.h"
#include "SensorCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorRegisterCtrl::DoorRegisterCtrl() {

}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterAll() {
	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	array<String^>^ lineas = File::ReadAllLines("DoorRegister.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoorRegister in lineas) {

		array<String^>^ datos = lineaDoorRegister->Split(separadores->ToCharArray());

		int code = Convert::ToInt32(datos[0]);
		String^ entryTime = datos[1];
		String^ exitTime = datos[2];
		bool userIn = Convert::ToBoolean(datos[3]);
		int cardCode = Convert::ToInt32(datos[4]);
		int sensorID = Convert::ToInt32(datos[5]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);
		listaDoorRegister->Add(objDoorRegister);
	}
	return listaDoorRegister;
}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxCard(int codeCard) {

	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	array<String^>^ lineas = File::ReadAllLines("DoorRegister.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoorRegister in lineas) {

		array<String^>^ datos = lineaDoorRegister->Split(separadores->ToCharArray());

		int code = Convert::ToInt32(datos[0]);
		String^ entryTime = datos[1];
		String^ exitTime = datos[2];
		bool userIn = Convert::ToBoolean(datos[3]);
		int cardCode = Convert::ToInt32(datos[4]);
		int sensorID = Convert::ToInt32(datos[5]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);

		if (code == codeCard) {

			listaDoorRegister->Add(objDoorRegister);
			break;
		}
	}
	return listaDoorRegister;
}

void DoorRegisterCtrl::escribirArchivo(List<doorRegister^>^ listaDoorRegister) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDoorRegister->Count);
	for (int i = 0; i < listaDoorRegister->Count; i++) {
		doorRegister^ objDoorRegister = listaDoorRegister[i];
		lineasArchivo[i] = Convert::ToString(objDoorRegister->getCode()) + ";" + objDoorRegister->getEntryTime() + ";" + objDoorRegister->getExitTime() + ";" + Convert::ToString(objDoorRegister->getUserIn())
			+ ";" + Convert::ToString(objDoorRegister->getObjCard()->getCode()) + ";" + Convert::ToString(objDoorRegister->getObjSensor()->getID());
	}
	File::WriteAllLines("DoorRegister.txt", lineasArchivo);
}

void DoorRegisterCtrl::agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor) {
	List<doorRegister^>^ listaDoorRegister = buscarDoorRegisterAll();
	doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);
	listaDoorRegister->Add(objDoorRegister);
	escribirArchivo(listaDoorRegister);
}
