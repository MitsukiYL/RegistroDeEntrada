#include "MotorCtrl.h"

using namespace RDEController;
using namespace System::IO;

MotorCtrl::MotorCtrl() {

}

List<motor^>^ MotorCtrl::buscarMotorAll() {
	List<motor^>^ listaMotor = gcnew List<motor^>();
	array<String^>^ lineas = File::ReadAllLines("Motor.txt");
	String^ separadores = ";";
	for each (String ^ lineaMotor in lineas) {

		array<String^>^ datos = lineaMotor->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		int RPM = Convert::ToInt32(datos[1]);
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		String^ registrationDate = datos[4];
		int power = Convert::ToInt32(datos[5]);
		int ID = Convert::ToInt32(datos[6]);


		motor^ objMotor = gcnew motor(ID, pin, RPM, producer, active, registrationDate, power);
		listaMotor->Add(objMotor);
	}
	return listaMotor;
}

motor^ MotorCtrl::buscarMotorxID(int IDb) {
	motor^ objMotor;
	List<motor^>^ listaMotor = gcnew List<motor^>();
	array<String^>^ lineas = File::ReadAllLines("Motor.txt");
	String^ separadores = ";";
	for each (String ^ lineaMotor in lineas) {

		array<String^>^ datos = lineaMotor->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		int RPM = Convert::ToInt32(datos[1]);
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		String^ registrationDate = datos[4];
		int power = Convert::ToInt32(datos[5]);
		int ID = Convert::ToInt32(datos[6]);

		if (ID == IDb) {

			motor^ objMotor = gcnew motor(ID, pin, RPM, producer, active, registrationDate, power);
			break;
		}

	}
	return objMotor;
}

void MotorCtrl::escribirArchivo(List<motor^>^ listaMotor) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaMotor->Count);
	for (int i = 0; i < listaMotor->Count; i++) {
		motor^ objMotor = listaMotor[i];
		lineasArchivo[i] = Convert::ToString(objMotor->getPin()) + ";" + Convert::ToString(objMotor->getRPM()) + ";" + objMotor->getProducer() + ";" + Convert::ToString(objMotor->getActive())
			+ ";" + objMotor->getRegistrationDate() + ";" + Convert::ToString(objMotor->getPower()) + ";" + Convert::ToString(objMotor->getID());
	}
	File::WriteAllLines("Motor.txt", lineasArchivo);
}

void MotorCtrl::agregarNewMotor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID){
	List<motor^>^ listaMotor = buscarMotorAll();
	motor^ objMotor = gcnew motor(ID, pin, RPM, producer, active, registrationDate, power);
	listaMotor->Add(objMotor);
	escribirArchivo(listaMotor);
}

void MotorCtrl::eliminarMotor(int IDb) {
	List<motor^>^ listaMotor = buscarMotorAll();
	for (int i = 0; i < listaMotor->Count; i++) {
		if (listaMotor[i]->getID() == IDb) {
			listaMotor->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaMotor);
}
