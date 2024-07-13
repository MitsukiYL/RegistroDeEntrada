#include "InterfaceCtrl.h"

using namespace RDEController;
using namespace System::IO;

InterfaceCtrl::InterfaceCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void InterfaceCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void InterfaceCtrl::cerrarConexion() {
	this->objConexion->Close();
}

void InterfaceCtrl::agregarNewInterface(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "insert into Interface(pin, protocol, producer, active, registrationDate) values (" +
		pin + ",'" + protocol + "','" + producer + "'," + Convert::ToInt32(active) + ",'" + registrationDate + "')";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void InterfaceCtrl::actualizarMotorActive(int ID, bool active) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "UPDATE Interface SET active =" + Convert::ToInt32(active) + " WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void InterfaceCtrl::eliminarInterface(int IDb) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Interface where ID =" + IDb;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
