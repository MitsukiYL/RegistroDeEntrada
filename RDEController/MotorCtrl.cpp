#include "MotorCtrl.h"

using namespace RDEController;
using namespace System::IO;

MotorCtrl::MotorCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void MotorCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void MotorCtrl::cerrarConexion() {
	this->objConexion->Close();
}
List<motor^>^ MotorCtrl::buscarMotorAll() {
	List<motor^>^ lista = gcnew List<motor^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Motor";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		int pin = safe_cast<int>(objData[1]);
		int RPM = safe_cast<int>(objData[2]);
		String^ producer = safe_cast<String^>(objData[3]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[4]));
		String^ registrationDate = safe_cast<String^>(objData[3]);
		double power = safe_cast<double>(objData[4]);

		motor^ objMotor = gcnew motor(ID, pin, RPM, producer, active, registrationDate, power);
		lista->Add(objMotor);
	}
	cerrarConexion();
	return lista;
}

motor^ MotorCtrl::buscarMotorxID(int IDb) {
	motor^ objMotor;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Motor where ID=" + IDb;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int ID = safe_cast<int>(objData[0]);
		int pin = safe_cast<int>(objData[1]);
		int RPM = safe_cast<int>(objData[2]);
		String^ producer = safe_cast<String^>(objData[3]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[4]));
		String^ registrationDate = safe_cast<String^>(objData[3]);
		double power = safe_cast<double>(objData[4]);

		objMotor = gcnew motor(ID, pin, RPM, producer, active, registrationDate, power);
	}

	cerrarConexion();
	return objMotor;
}

void MotorCtrl::agregarNewMotor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "insert into Motor(pin, RPM, producer, active, registrationDate, power) values (" +
		pin + "," + RPM + ",'" + producer + "'," + Convert::ToInt32(active) + ",'" + registrationDate + "'," + power + ")";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void MotorCtrl::actualizarMotorActive(int ID, bool active) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "UPDATE Motor SET active =" + Convert::ToInt32(active) + " WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void MotorCtrl::eliminarMotor(int IDb) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Motor where ID =" + IDb;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
