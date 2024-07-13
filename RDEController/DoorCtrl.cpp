
#include "SensorCtrl.h"
#include "DoorCtrl.h"
#include "MotorCtrl.h"
#include "InterfaceCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorCtrl::DoorCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void DoorCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void DoorCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<door^>^ DoorCtrl::buscarDoorAll() {
	List<door^>^ lista = gcnew List<door^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from door";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ doorName = safe_cast<String^>(objData[0]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[1]));
		String^ location = safe_cast<String^>(objData[2]);
		String^ doorType = safe_cast<String^>(objData[3]);
		String^ openingTime = safe_cast<String^>(objData[4]);
		String^ closingTime = safe_cast<String^>(objData[5]);

		int motorID = safe_cast<int>(objData[6]);
		int interfaceID = safe_cast<int>(objData[7]);
		int sensorID = safe_cast<int>(objData[8]);

		MotorCtrl^ objMotorCtrl = gcnew MotorCtrl();
		InterfaceCtrl^ objInterfaceCtrl = gcnew InterfaceCtrl();
		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();

		motor^ objMotor = objMotorCtrl->buscarMotorxID(motorID);
		interface^ objInterface = objInterfaceCtrl->buscarInterfacexID(interfaceID);
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		door^ objDoor = gcnew door(doorName, active, location, doorType, openingTime, closingTime, objSensor, objInterface, objMotor);
		lista->Add(objDoor);
	}

	cerrarConexion();
	return lista;
}

door^ DoorCtrl::buscarDoorxN(String^ Nb) {

	door^ objDoor;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from door where NB = '" + Nb + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ doorName = safe_cast<String^>(objData[0]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[1]));
		String^ location = safe_cast<String^>(objData[2]);
		String^ doorType = safe_cast<String^>(objData[3]);
		String^ openingTime = safe_cast<String^>(objData[4]);
		String^ closingTime = safe_cast<String^>(objData[5]);

		int motorID = safe_cast<int>(objData[6]);
		int interfaceID = safe_cast<int>(objData[7]);
		int sensorID = safe_cast<int>(objData[8]);

		MotorCtrl^ objMotorCtrl = gcnew MotorCtrl();
		InterfaceCtrl^ objInterfaceCtrl = gcnew InterfaceCtrl();
		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();

		motor^ objMotor = objMotorCtrl->buscarMotorxID(motorID);
		interface^ objInterface = objInterfaceCtrl->buscarInterfacexID(interfaceID);
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		objDoor = gcnew door(doorName, active, location, doorType, openingTime, closingTime, objSensor, objInterface, objMotor);
	}

	cerrarConexion();
	return objDoor;
}

