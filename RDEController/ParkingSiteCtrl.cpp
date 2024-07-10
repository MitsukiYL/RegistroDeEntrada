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

int boolToInt(bool valorBooleano) {
	// Devuelve 1 si valorBooleano es true, 0 si es false
	return valorBooleano ? 1 : 0;
}

bool intToBool(int valorEntero) {
	return valorEntero != 0; // Devuelve true si valorEntero es diferente de cero, false si es cero
}

List <parkingSite^>^ ParkingSiteCtrl::BuscarSitexLot(String^ lotIDsearch) {

	//List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	//array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	//String^ separadores = ";"; 

	//for each (String ^ lineaPeluche in lineas) {
	//	
	//	array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());

	//	
	//	//	FORMATO DEL ARCHIVO TXT
	//	//	STRING ; BOOL ; BOOL ;BOOL ;STRING
	//	

	//	String^ ID =  datos[0];
	//	bool reserved = Convert::ToBoolean(datos[1]);
	//	bool active = Convert::ToBoolean(datos[2]);
	//	bool busy = Convert::ToBoolean(datos[3]);
	//	String^ lotID = Convert::ToString(datos[4]);
	//	
	//	if (lotID->CompareTo(lotIDsearch) == 0) {
	//		parkingSite^ objestac = gcnew parkingSite(ID,reserved,active,busy, lotID);
	//		listaesta->Add(objestac);
	//	}
	//}
	//return listaesta;

	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from ParkingSite where lotID='" + lotIDsearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ ID = safe_cast<String^>(objData[0]);
		bool reserved = safe_cast<int>(objData[1]) != 0;
		bool active = safe_cast<int>(objData[2]) != 0;
		bool busy = safe_cast<int>(objData[3]) != 0;
		String^ lotID = safe_cast<String^>(objData[4]);

		parkingSite^ estacinamiento = gcnew parkingSite(ID, reserved, active, busy, lotID);
		listaesta->Add(estacinamiento);
	}
	cerrarConexion();
	return listaesta;
}

List <parkingSite^>^ ParkingSiteCtrl::AllEstacionamientos() {
	//List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	//array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	//String^ separadores = ";"; 
	//for each (String ^ lineaPeluche in lineas) {
	//	
	//	array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());


	//	//	FORMATO DEL ARCHIVO TXT
	//	//	STRING ; BOOL ; BOOL ;BOOL; STRING


	//	String^ ID = datos[0];
	//	bool reserved = Convert::ToBoolean(datos[1]);
	//	bool active = Convert::ToBoolean(datos[2]);
	//	bool busy = Convert::ToBoolean(datos[3]);
	//	String^ lotID = Convert::ToString(datos[4]);

	//	parkingSite^ objestac = gcnew parkingSite(ID, reserved, active,busy, lotID);
	//	listaesta->Add(objestac);
	//}
	//return listaesta;

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

		parkingSite^ estacinamiento = gcnew parkingSite(ID, reserved, active, busy, lotID);
		listaesta->Add(estacinamiento);
	}
	cerrarConexion();
	return listaesta;

}

parkingSite^ ParkingSiteCtrl::BuscarSiteXID(String^ IDsearch) {
	//parkingSite^ objParkingSite;
	//array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	//String^ separadores = ";";

	//for each (String ^ lineaPeluche in lineas) {

	//	array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());


	//	//	FORMATO DEL ARCHIVO TXT
	//	//	STRING ; BOOL ; BOOL ;BOOL ;STRING

	//	String^ ID = datos[0];
	//	bool reserved = Convert::ToBoolean(datos[1]);
	//	bool active = Convert::ToBoolean(datos[2]);
	//	bool busy = Convert::ToBoolean(datos[3]);
	//	String^ lotID = Convert::ToString(datos[4]);

	//	if (ID->CompareTo(IDsearch) == 0) {
	//		objParkingSite = gcnew parkingSite(ID, reserved, active,busy, lotID);
	//		break;
	//	}
	//}
	//return objParkingSite;

	parkingSite^ estacinamiento;
	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	objSentencia->CommandText = "select * from ParkingSite where ID='" + IDsearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ ID = safe_cast<String^>(objData[0]);
		bool reserved = safe_cast<int>(objData[1]) != 0;
		bool active = safe_cast<int>(objData[2]) != 0;
		bool busy = safe_cast<int>(objData[3]) != 0;
		String^ lotID = safe_cast<String^>(objData[4]);

		estacinamiento = gcnew parkingSite(ID, reserved, active, busy, lotID);
	}
	cerrarConexion();
	return estacinamiento;
}

void ParkingSiteCtrl::agregarEstacionamiento(String^ ID, bool reserved, bool active, String^ lotID) {
	//List<parkingSite^>^ listaesta = AllEstacionamientos();
	//parkingSite^ estacNuevo = gcnew parkingSite(ID, reserved, active,false, lotID);
	//listaesta->Add(estacNuevo);
	//escribirArchivo(listaesta);

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/

	int reservedint = boolToInt(reserved);
	int activeint = boolToInt(active);

	ParkingLotCtrl^ ctrlLot = gcnew ParkingLotCtrl();
	int codeUser = ctrlLot->BuscarplayaxID(lotID)->getZone()->getID();
	objSentencia->CommandText = "insert into ParkingSite(ID,reserved,active,busy,lotID,codeUser) values ('" + ID + "'," + Convert::ToString( reservedint)+ "," + Convert::ToString(activeint) + "," + Convert::ToString(0) + ",'" + lotID + "'," + Convert::ToString(codeUser) + ")";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}


void ParkingSiteCtrl::escribirArchivo(List <parkingSite^>^ listaEstac) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaEstac->Count);
	for (int i = 0; i < listaEstac->Count; i++) {
		parkingSite^ objEstac = listaEstac[i];
		lineasArchivo[i] = objEstac->getID() + ";" + Convert::ToString(objEstac->getReserved()) + ";" + Convert::ToString(objEstac->getActive()) + ";" + Convert::ToString(objEstac->getbusy()) + ";" + objEstac->getLotID();
	}
	File::WriteAllLines("Estacionamientos.txt", lineasArchivo);
}

void ParkingSiteCtrl::actualizarEstac(String^ ID, bool reserved, bool active, String^ lotID) {
	/*List<parkingSite^>^ listaesta = AllEstacionamientos();
	for (int i = 0; i < listaesta->Count; i++) {
		if (listaesta[i]->getID() == ID) {
			listaesta[i]->setReserved(reserved);
			listaesta[i]->setActive(active);
			listaesta[i]->setLotID(lotID);
			break;
		}
	}
	escribirArchivo(listaesta);*/

	abrirConexion();
	/*SqlCommand nos permite crear un objeto a traves del cual vamos a realizar la sentencia en base de datos*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar cual es la sentencia que deseo ejecutar*/
	int reservedint= reserved ? 1 : 0;
	int activeint = active ? 1 : 0;
	int busyint = 1;

	objSentencia->CommandText = "UPDATE ParkingSite SET reserved = " + Convert::ToString(reservedint) +",active = " + Convert::ToString(activeint) + ",busy = " + Convert::ToString(busyint)+ ",lotID ='" + lotID+"' WHERE ID = '" + ID + "'";
	/*Cuando la sentencia es un insert, se debe ejecutar con ExecuteNonQuery*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void ParkingSiteCtrl::eliminarEstac(String^ ID) {
	/*List<parkingSite^>^ listaestc = AllEstacionamientos();
	for (int i = 0; i < listaestc->Count; i++) {
		if (ID ->CompareTo(listaestc[i]->getID())== 0) {
			listaestc->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaestc);*/

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


