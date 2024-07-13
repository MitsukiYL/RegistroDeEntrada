#include "ParkingSiteCtrl.h"
#include "ZoneCtrl.h"
#include "ParkingLotCtrl.h"

using namespace RDEController;
using namespace System::IO;

ParkingSiteCtrl::ParkingSiteCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void ParkingSiteCtrl::abrirConexion() {
	/*Paso 1, establecer la cadena de conexion*/
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	/*Paso 2, abrir la conexion*/
	this->objConexion->Open();
}

void ParkingSiteCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List <parkingSite^>^ ParkingSiteCtrl::BuscarSitexLot(String^ lotIDsearch) {

	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from ParkingSite where IDParkingLot='" + lotIDsearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ ID = safe_cast<String^>(objData[0]);
		bool reserved = safe_cast<int>(objData[1]) != 0;
		bool active = safe_cast<int>(objData[2]) != 0;
		bool busy = safe_cast<int>(objData[3]) != 0;
		String^ lotID = safe_cast<String^>(objData[4]);

		ParkingLotCtrl^ objParkingLotCtrl = gcnew ParkingLotCtrl();
		parkingLot^ objParkingLot = objParkingLotCtrl->BuscarplayaxID(lotID);

		parkingSite^ estacinamiento = gcnew parkingSite(ID, reserved, active, busy, objParkingLot);
		listaesta->Add(estacinamiento);
	}
	cerrarConexion();
	return listaesta;
}

List <parkingSite^>^ ParkingSiteCtrl::AllEstacionamientos() {


	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from ParkingSite ";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ ID = safe_cast<String^>(objData[0]);
		bool reserved = safe_cast<int>(objData[1]) != 0;
		bool active = safe_cast<int>(objData[2]) != 0;
		bool busy = safe_cast<int>(objData[3]) != 0;
		String^ lotID = safe_cast<String^>(objData[4]);

		ParkingLotCtrl^ objParkingLotCtrl = gcnew ParkingLotCtrl();
		parkingLot^ objParkingLot = objParkingLotCtrl->BuscarplayaxID(lotID);

		parkingSite^ estacinamiento = gcnew parkingSite(ID, reserved, active, busy, objParkingLot);
		listaesta->Add(estacinamiento);
	}
	cerrarConexion();
	return listaesta;

}

parkingSite^ ParkingSiteCtrl::BuscarSiteXID(String^ IDsearch) {

	parkingSite^ estacinamiento;
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from ParkingSite where IDParkingLot='" + IDsearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ ID = safe_cast<String^>(objData[0]);
		bool reserved = safe_cast<int>(objData[1]) != 0;
		bool active = safe_cast<int>(objData[2]) != 0;
		bool busy = safe_cast<int>(objData[3]) != 0;
		String^ lotID = safe_cast<String^>(objData[4]);

		ParkingLotCtrl^ objParkingLotCtrl = gcnew ParkingLotCtrl();
		parkingLot^ objParkingLot = objParkingLotCtrl->BuscarplayaxID(lotID);

		estacinamiento = gcnew parkingSite(ID, reserved, active, busy, objParkingLot);
	}
	cerrarConexion();
	return estacinamiento;
}

void ParkingSiteCtrl::agregarEstacionamiento(String^ ID, bool reserved, bool active, bool busy, String^ lotID) {


	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	//FDFF

	int reservedint = Convert::ToInt32(reserved);
	int activeint = Convert::ToInt32(active);
	int busyint = Convert::ToInt32(busy);
	

	ParkingLotCtrl^ ctrlLot = gcnew ParkingLotCtrl();
	int zoneID = ctrlLot->BuscarplayaxID(lotID)->getZone()->getID();

	objSentencia->CommandText = "insert into ParkingSite(ID,reserved,active,busy,IDParkingLot) values ('" + ID + "'," + reservedint + "," + activeint + "," + busyint + ",'" + zoneID + "')";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void ParkingSiteCtrl::actualizarEstac(String^ ID, bool reserved, bool active, bool busy, String^ lotID) {


	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;

	int reservedint = Convert::ToInt32(reserved);
	int activeint = Convert::ToInt32(active);
	int busyint = Convert::ToInt32(busy);


	objSentencia->CommandText = "UPDATE ParkingSite SET reserved = " + reservedint + ",active = " + activeint + ",busy = " + busyint + ",IDParkingLot ='" + lotID + "' WHERE ID = '" + ID + "'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void ParkingSiteCtrl::eliminarEstac(String^ ID) {


	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	objSentencia->CommandText = "delete from ParkingSite where ID ='"+ ID +"'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}


