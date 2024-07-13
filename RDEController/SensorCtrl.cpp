#include "SensorCtrl.h"
#include "CardCtrl.h"

using namespace RDEController;
using namespace System::IO;

SensorCtrl::SensorCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void SensorCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void SensorCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<sensor^>^ SensorCtrl::buscarSensorAll() {
	List<sensor^>^ lista = gcnew List<sensor^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Sensor";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int pin = safe_cast<int>(objData[0]);
		String^ protocol = safe_cast<String^>(objData[1]);
		String^ producer = safe_cast<String^>(objData[2]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ registrationDate = safe_cast<String^>(objData[4]);
		int ID = safe_cast<int>(objData[5]);
		String^ model = safe_cast<String^>(objData[6]);

		sensor^ objSensor = gcnew sensor(pin, protocol, producer, active, registrationDate, ID, model);
		lista->Add(objSensor);
	}

	cerrarConexion();
	return lista;
}

sensor^ SensorCtrl::buscarSensorxID(int IDb) {
	sensor^ objSensor;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Sensor where ID = " + IDb;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int pin = safe_cast<int>(objData[0]);
		String^ protocol = safe_cast<String^>(objData[1]);
		String^ producer = safe_cast<String^>(objData[2]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ registrationDate = safe_cast<String^>(objData[4]);
		int ID = safe_cast<int>(objData[5]);
		String^ model = safe_cast<String^>(objData[6]);

		objSensor = gcnew sensor(pin, protocol, producer, active, registrationDate, ID, model);
	}

	cerrarConexion();
	return objSensor;
}


void SensorCtrl::agregarNewSensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "insert into Sensor(pin, protocol, producer, active, registrationDate, model) values (" + pin + ",'" + protocol + "','" +
		producer + "'," + Convert::ToInt32(active) + ",'" + registrationDate + "','" + model + "')";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void SensorCtrl::eliminarSensor(int IDb) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Sensor where ID =" + IDb;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void SensorCtrl::actualizarSensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "UPDATE Sensor SET pin =" + pin + ", protocol ='" + protocol + "', producer ='" + producer +
		"', active =" + Convert::ToInt32(active) + ", registrationDate ='" + registrationDate + "', model ='" + model +
		"' WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
