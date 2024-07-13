#include "DoorRegisterCtrl.h"
#include "CardCtrl.h"
#include "SensorCtrl.h"
#include "DoorCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorRegisterCtrl::DoorRegisterCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void DoorRegisterCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void DoorRegisterCtrl::cerrarConexion() {
	this->objConexion->Close();
}
List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterAll() {
	List<doorRegister^>^ lista = gcnew List<doorRegister^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from DoorRegister";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ entryTime = safe_cast<String^>(objData[0]);
		String^ exitTime = safe_cast<String^>(objData[1]);
		bool userIn = Convert::ToBoolean(safe_cast<int>(objData[2]));
		int code = safe_cast<int>(objData[3]);

		String^ cardCode = safe_cast<String^>(objData[4]);
		int sensorID = safe_cast<int>(objData[5]);
		String^ Npuerta = safe_cast<String^>(objData[6]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
		door^ objDoor = objDoorCtrl->buscarDoorxN(Npuerta);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor, objDoor);
		lista->Add(objDoorRegister);
	}

	cerrarConexion();
	return lista;
}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxCard(String^ codeCard) {

	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from DoorRegister where codeCard= '" + codeCard + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ entryTime = safe_cast<String^>(objData[0]);
		String^ exitTime = safe_cast<String^>(objData[1]);
		bool userIn = Convert::ToBoolean(safe_cast<int>(objData[2]));
		int code = safe_cast<int>(objData[3]);

		String^ cardCode = safe_cast<String^>(objData[4]);
		int sensorID = safe_cast<int>(objData[5]);
		String^ Npuerta = safe_cast<String^>(objData[6]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
		door^ objDoor = objDoorCtrl->buscarDoorxN(Npuerta);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor, objDoor);
		listaDoorRegister->Add(objDoorRegister);
	}

	cerrarConexion();
	return listaDoorRegister;
}



List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxN(String^ name) {

	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from DoorRegister where nameDoor= '" + name + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ entryTime = safe_cast<String^>(objData[0]);
		String^ exitTime = safe_cast<String^>(objData[1]);
		bool userIn = Convert::ToBoolean(safe_cast<int>(objData[2]));
		int code = safe_cast<int>(objData[3]);

		String^ cardCode = safe_cast<String^>(objData[4]);
		int sensorID = safe_cast<int>(objData[5]);
		String^ Npuerta = safe_cast<String^>(objData[6]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
		door^ objDoor = objDoorCtrl->buscarDoorxN(Npuerta);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor, objDoor);
		listaDoorRegister->Add(objDoorRegister);
	}

	cerrarConexion();
	return listaDoorRegister;
}




List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxDay(String^ daysearch) {
	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	String^ daystring = "";
	String^ separadores = "";

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from DoorRegister";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ entryTime = safe_cast<String^>(objData[0]);
		String^ exitTime = safe_cast<String^>(objData[1]);
		bool userIn = Convert::ToBoolean(safe_cast<int>(objData[2]));
		int code = safe_cast<int>(objData[3]);

		String^ cardCode = safe_cast<String^>(objData[4]);
		int sensorID = safe_cast<int>(objData[5]);
		String^ Npuerta = safe_cast<String^>(objData[6]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
		door^ objDoor = objDoorCtrl->buscarDoorxN(Npuerta);

		String^ separador_dates = "-";
		array<String^>^ dates = entryTime->Split(separador_dates->ToCharArray());

		String^ ddmmyy = dates[1];

		String^ separador_ddmmyy = "/";
		array<String^>^ array_ddmmyy = ddmmyy->Split(separador_ddmmyy->ToCharArray());

		int day = Convert::ToInt32(array_ddmmyy[0]);
		int month = Convert::ToInt32(array_ddmmyy[1]);
		int year = Convert::ToInt32(array_ddmmyy[2]);

		if (month == 1 || month == 2) {
			month += 12;
			year -= 1;
		}

		int j = year / 100;
		int k = year % 100;
		int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

		switch (h) {
		case 0:
			daystring = "Sábado";
			break;
		case 1:
			daystring = "Domingo";
			break;
		case 2:
			daystring = "Lunes";
			break;
		case 3:
			daystring = "Martes";
			break;
		case 4:
			daystring = "Miércoles";
			break;
		case 5:
			daystring = "Jueves";
			break;
		case 6:
			daystring = "Viernes";
			break;
		default:
			daystring = "";
			break;
		}

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor, objDoor);

		if (daystring == daysearch) {
			listaDoorRegister->Add(objDoorRegister);
		}
	}
	cerrarConexion();
	return listaDoorRegister;
}

void DoorRegisterCtrl::agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	String^ codeCard = objCard->getCode();
	int IDSensor = objSensor->getID();
	String^ nameDoor = objDoor->getDoorName();

	objSentencia->CommandText = "insert into DoorRegister(entryTime, exitTime, userIn, codeCard, IDSensor, nameDoor); values ('" + entryTime +
		"','" + exitTime + "'," + Convert::ToInt32(userIn) + ",'" + codeCard + "'," + IDSensor + ",'" + nameDoor + "')";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void  DoorRegisterCtrl::actualizarDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	String^ codeCard = objCard->getCode();
	int IDSensor = objSensor->getID();
	String^ nameDoor = objDoor->getDoorName();

	objSentencia->CommandText = "UPDATE DoorRegister SET entryTime ='" + entryTime + "', exitTime ='" + exitTime + "', userIn =" + Convert::ToInt32(userIn) +
		", codeCard ='" + codeCard + "', IDSensor =" + IDSensor + ", nameDoor ='" + nameDoor + "' WHERE code = " + code;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
