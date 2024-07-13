
#include "SensorCtrl.h"
#include "DoorCtrl.h"
#include "MotorCtrl.h"
#include "InterfaceCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorCtrl::DoorCtrl() {

}

List<door^>^ DoorCtrl::buscarDoorAll() {
	List<door^>^ listaDoor = gcnew List<door^>();
	array<String^>^ lineas = File::ReadAllLines("Door.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoor in lineas) {

		array<String^>^ datos = lineaDoor->Split(separadores->ToCharArray());

		String^ doorName = datos[0];
		bool active = Convert::ToBoolean(datos[1]);
		String^ location = datos[2];
		String^ doorType = datos[3];
		String^ openingTime = datos[4];
		String^ closingTime = datos[5];
		int sensorID = Convert::ToInt32(datos[6]);
		int interfaceID = Convert::ToInt32(datos[7]);
		int motorID = Convert::ToInt32(datos[8]);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		InterfaceCtrl^ objInterfaceCtrl = gcnew InterfaceCtrl();
		interface^ objInterface = objInterfaceCtrl->buscarInterfacexID(interfaceID);

		MotorCtrl^ objMotorCtrl = gcnew MotorCtrl();
		motor^ objMotor = objMotorCtrl->buscarMotorxID(motorID);

		door^ objDoor = gcnew door(doorName, active, location, doorType, openingTime, closingTime, objSensor, objInterface, objMotor);
		listaDoor->Add(objDoor);
	}
	return listaDoor;
}

door^ DoorCtrl::buscarDoorxN(String^ Nb) {

	door^ objDoor;
	List<door^>^ listaDoor = gcnew List<door^>();
	array<String^>^ lineas = File::ReadAllLines("Door.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoor in lineas) {

		array<String^>^ datos = lineaDoor->Split(separadores->ToCharArray());

		String^ doorName = datos[0];
		bool active = Convert::ToBoolean(datos[1]);
		String^ location = datos[2];
		String^ doorType = datos[3];
		String^ openingTime = datos[4];
		String^ closingTime = datos[5];
		int sensorID = Convert::ToInt32(datos[6]);
		int interfaceID = Convert::ToInt32(datos[7]);
		int motorID = Convert::ToInt32(datos[8]);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		InterfaceCtrl^ objInterfaceCtrl = gcnew InterfaceCtrl();
		interface^ objInterface = objInterfaceCtrl->buscarInterfacexID(interfaceID);

		MotorCtrl^ objMotorCtrl = gcnew MotorCtrl();
		motor^ objMotor = objMotorCtrl->buscarMotorxID(motorID);

		if (doorName== Nb) {

			objDoor = gcnew door(doorName, active, location, doorType, openingTime, closingTime, objSensor, objInterface, objMotor);
			break;
		}
	}
	return objDoor;
}

