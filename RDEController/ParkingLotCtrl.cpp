#include "ParkingLotCtrl.h"
#include "ZoneCtrl.h"
#include "ParkingSiteCtrl.h"

using namespace RDEController;
using namespace System::IO;

ParkingLotCtrl::ParkingLotCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void ParkingLotCtrl::abrirConexion() {
	/*Paso 1, establecer la cadena de conexion*/
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	/*Paso 2, abrir la conexion*/
	this->objConexion->Open();
}

void ParkingLotCtrl::cerrarConexion() {
	this->objConexion->Close();
}

 parkingLot^ ParkingLotCtrl::BuscarplayaxID(String^ IDbuscar) {

	 parkingLot^ objplaya;
	 abrirConexion();
	 /*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	 SqlCommand^ objSentencia = gcnew SqlCommand();
	 /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	 objSentencia->Connection = this->objConexion;
	 /*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	 objSentencia->CommandText = "select * from ParkingLot where ID='" + IDbuscar + "'";
	 SqlDataReader^ objData = objSentencia->ExecuteReader();

	 while (objData->Read()) {

		 String^ name = safe_cast<String^>(objData[0]);
		 String^ vehicleType = safe_cast<String^>(objData[1]);
		 String^ ID = safe_cast<String^>(objData[2]);
		 int capacity = safe_cast<int>(objData[3]);
		 int N_reserved = safe_cast<int>(objData[4]);
		 int N_inactive = safe_cast<int>(objData[5]);
		 int codeZone = safe_cast<int>(objData[6]);

		 ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		 zone^ objZone = objZoneCtrl->buscarZonaxID(codeZone);


		 objplaya = gcnew parkingLot(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone);
	 }
	 cerrarConexion();
	 return objplaya;

}

 List <parkingLot^>^ ParkingLotCtrl::PlayasxZona(int IDzone) {


	 List<parkingLot^>^ listaplaya = gcnew List<parkingLot^>();
	 abrirConexion();
	 /*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	 SqlCommand^ objSentencia = gcnew SqlCommand();
	 /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	 objSentencia->Connection = this->objConexion;
	 /*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	 objSentencia->CommandText = "select * from ParkingLot where IDzone=" + IDzone;
	 SqlDataReader^ objData = objSentencia->ExecuteReader();

	 while (objData->Read()) {

		 String^ name = safe_cast<String^>(objData[0]);
		 String^ vehicleType = safe_cast<String^>(objData[1]);
		 String^ ID = safe_cast<String^>(objData[2]);
		 int capacity = safe_cast<int>(objData[3]);
		 int N_reserved = safe_cast<int>(objData[4]);
		 int N_inactive = safe_cast<int>(objData[5]);
		 int codeZone = safe_cast<int>(objData[6]);


		 ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		 zone^ objZone = objZoneCtrl->buscarZonaxID(codeZone);

		 parkingLot^ objplaya;
		 objplaya = gcnew parkingLot(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone);
		 listaplaya->Add(objplaya);

	 }
	 cerrarConexion();
	 return listaplaya;

 }


 List <parkingLot^>^ ParkingLotCtrl::AllPlayas() {

	 List<parkingLot^>^ listaplaya = gcnew List<parkingLot^>();
	 abrirConexion();
	 /*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	 SqlCommand^ objSentencia = gcnew SqlCommand();
	 /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	 objSentencia->Connection = this->objConexion;
	 /*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	 objSentencia->CommandText = "select * from ParkingLot";
	 SqlDataReader^ objData = objSentencia->ExecuteReader();

	 while (objData->Read()) {

		 String^ name = safe_cast<String^>(objData[0]);
		 String^ vehicleType = safe_cast<String^>(objData[1]);
		 String^ ID = safe_cast<String^>(objData[2]);
		 int capacity = safe_cast<int>(objData[3]);
		 int N_reserved = safe_cast<int>(objData[4]);
		 int N_inactive = safe_cast<int>(objData[5]);
		 int codeZone = safe_cast<int>(objData[6]);


		 ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		 zone^ objZone = objZoneCtrl->buscarZonaxID(codeZone);

		 parkingLot^ objplaya;
		 objplaya = gcnew parkingLot(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone);
		 listaplaya->Add(objplaya);

	 }
	 cerrarConexion();
	 return listaplaya;

 }


void ParkingLotCtrl::agregarPlaya(String ^ name, String^ vehicleType, String ^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone) {

	String^ newID = Convert::ToString(objZone->getID()) + Convert::ToString(Convert::ToChar('A' + PlayasxZona(objZone->getID())->Count));
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	ParkingLotCtrl^ ctrlLot = gcnew ParkingLotCtrl();
	int IDzone = objZone->getID();
	objSentencia->CommandText = "insert into ParkingLot(name,vehicleType,ID,capacity,N_reserved,N_inactive,IDzone) values ('" + name + "','" + vehicleType + "','" + ID + "',"  + capacity + "," + N_reserved + "," + N_inactive+ "," + IDzone + ")";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void ParkingLotCtrl::actualizarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone) {

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	int IDzone = objZone->getID();

	objSentencia->CommandText = "UPDATE ParkingLot SET name ='" + name + "', vehicleType ='"+ vehicleType +"', capacity =" + capacity + ", N_reserved =" + N_reserved + ", N_inactive =" + N_inactive + ",IDzone =" + IDzone + " WHERE ID = '" + ID + "'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();

}

void ParkingLotCtrl::eliminarPlaya(String^ ID) {

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	objSentencia->CommandText = "delete from ParkingLot where ID ='" + ID + "'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();

}