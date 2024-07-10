#include "ZoneCtrl.h"
#include "AdminCtrl.h"

using namespace RDEController;
using namespace System::IO;

ZoneCtrl::ZoneCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void ZoneCtrl::abrirConexion() {
	/*Paso 1, establecer la cadena de conexion*/
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	/*Paso 2, abrir la conexion*/
	this->objConexion->Open();
}

void ZoneCtrl::cerrarConexion() {
	this->objConexion->Close();
}
List<zone^>^ ZoneCtrl::buscarZoneAll() {
	
	List<zone^>^ listaZone = gcnew List<zone^>();
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from Zone ";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		String^ name = safe_cast<String^>(objData[1]);
		String^ location = safe_cast<String^>(objData[2]);
		String^ openingTime = safe_cast<String^>(objData[3]);
		String^ closingTime = safe_cast<String^>(objData[4]);
		int active = safe_cast<int>(objData[5]);
		int IDAdmin = safe_cast<int>(objData[6]);
		
		AdminCtrl^ adminCtrl = gcnew AdminCtrl();
		admin^ objadmin = adminCtrl->BuscarAdminxID(IDAdmin);
		zone^ objZone = gcnew zone(ID, name, location, openingTime, closingTime, active, objadmin);
		listaZone->Add(objZone);

	}
	cerrarConexion();
	
	return listaZone;
}

zone^ ZoneCtrl::buscarZonaxID(int searchID) {

	zone^ objzona;
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from Zone where ID= "+Convert::ToString(searchID);
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		String^ name = safe_cast<String^>(objData[1]);
		String^ location = safe_cast<String^>(objData[2]);
		String^ openingTime = safe_cast<String^>(objData[3]);
		String^ closingTime = safe_cast<String^>(objData[4]);
		int active = safe_cast<int>(objData[5]);
		int IDAdmin = safe_cast<int>(objData[6]);

		AdminCtrl^ adminCtrl = gcnew AdminCtrl();
		admin^ objadmin = adminCtrl->BuscarAdminxID(IDAdmin);
		objzona = gcnew zone(ID, name, location, openingTime, closingTime, active, objadmin);
	}
	cerrarConexion();

	return objzona;
}

void ZoneCtrl::escribirArchivo(List<zone^>^ listaZone){
	array<String^>^ lineasArchivo = gcnew array<String^>(listaZone->Count);
	for (int i = 0; i < listaZone->Count; i++) {
		zone^ objZone = listaZone[i];
		lineasArchivo[i] = Convert::ToString(objZone->getID()) + ";" + objZone->getName() + ";" + objZone->getLocation() + ";" + objZone->getOpeningTime() + ";" + objZone->getClosingTime() + ";" + Convert::ToString(objZone->getActive()) + ";" + Convert::ToString(objZone->getAdmin()->getAdminID());
	}
	File::WriteAllLines("Zone.txt", lineasArchivo);
}

void ZoneCtrl::agregarNewZone(int ID, String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin) {
	
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	int activeint = active ? 1 : 0;
	int IDAdmin = objAdmin->getAdminID();
	objSentencia->CommandText = "insert into Zone(ID,name,location,openingTime,closingTime,active,IDAdmin) values ('" + ID + "','" + name + "','" + location + "','" + openingTime + "','" + closingTime + "'," + Convert::ToString(activeint) + "," + Convert::ToString(IDAdmin) + ")";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void ZoneCtrl::eliminarZone(int ID) {

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	objSentencia->CommandText = "delete from Zone where ID ='" + ID + "'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();

}

void ZoneCtrl::actualizarZone(int ID, String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin) {

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	int activeint = active ? 1 : 0;
	int IDAdmin = objAdmin->getAdminID();
	objSentencia->CommandText = "UPDATE Zone SET name = '"+ name + "', location ='"+ location + "',openingTime ='" + openingTime + "',closingTime ='" + closingTime +"',active ="+ Convert::ToString(activeint) + ",IDAdmin =" + Convert::ToString(IDAdmin) + "where ID =" + ID;
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();

}

