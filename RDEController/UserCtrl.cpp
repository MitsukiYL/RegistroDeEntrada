#include "UserCtrl.h"
#include "VehicleCtrl.h"
#include "ParkingSiteCtrl.h"
#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

UserCtrl::UserCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void UserCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void UserCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<user^>^ UserCtrl::buscarUserAll() {
	List<user^>^ lista = gcnew List<user^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int userID = safe_cast<int>(objData[0]);
		String^ userType = safe_cast<String^>(objData[1]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[2]));
		bool inside = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ registrationDate = safe_cast<String^>(objData[4]);

		String^ parkingSiteID = safe_cast<String^>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();

		parkingSite^ objParkingSite = objParkSiteCtrl->BuscarSiteXID(parkingSiteID);
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);
		

		user^ objuser = gcnew user(userID, userType, active, inside, registrationDate, objParkingSite, objPerson);
		lista->Add(objuser);
	}

	cerrarConexion();
	return lista;
}

user^ UserCtrl::buscarUserxUserID(int userIDb) {
	user^ objUser;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario where userID=" + userIDb;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int userID = safe_cast<int>(objData[0]);
		String^ userType = safe_cast<String^>(objData[1]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[2]));
		bool inside = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ registrationDate = safe_cast<String^>(objData[4]);

		String^ parkingSiteID = safe_cast<String^>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();

		parkingSite^ objParkingSite = objParkSiteCtrl->BuscarSiteXID(parkingSiteID);
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		objUser = gcnew user(userID, userType, active, inside, registrationDate, objParkingSite, objPerson);
	
	}

	cerrarConexion();
	return objUser;
}

user^ UserCtrl::buscarUserxPersonDNI(int DNIbuscar) {
	user^ objUser;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario where personDNI=" + DNIbuscar;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int userID = safe_cast<int>(objData[0]);
		String^ userType = safe_cast<String^>(objData[1]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[2]));
		bool inside = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ registrationDate = safe_cast<String^>(objData[4]);

		String^ parkingSiteID = safe_cast<String^>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();

		parkingSite^ objParkingSite = objParkSiteCtrl->BuscarSiteXID(parkingSiteID);
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		objUser = gcnew user(userID, userType, active, inside, registrationDate, objParkingSite, objPerson);

	}

	cerrarConexion();
	return objUser;
}

void UserCtrl::agregarNewUser(int userID, String^ userType, bool active, bool inside, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson){

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	String^ parkingSiteID = objParkingSite->getID();
	int personDNI = objPerson->getDNI();

	objSentencia->CommandText = "insert into Usuario(userType, active, inside, registrationDate, parkingSiteID, personDNI) values ('" + userType + "'," + 
		Convert::ToInt32(active) + "," + Convert::ToInt32(inside) + ",'" + registrationDate + "','" + parkingSiteID + "'," + personDNI + ")";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void UserCtrl::eliminarUser(int userID) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Usuario where userID =" + userID;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void UserCtrl::actualizarUser(int userID, String^ userType, bool active, bool inside, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	String^ parkingSiteID = objParkingSite->getID();
	int personDNI = objPerson->getDNI();

	objSentencia->CommandText = "UPDATE Usuario SET userType ='" + userType + "', active =" + Convert::ToInt32(active) + ", inside =" + Convert::ToInt32(inside) +
		", registrationDate ='" + registrationDate + "', parkingSiteID ='" + parkingSiteID + "', personDNI =" + personDNI + " WHERE ID = " + userID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void UserCtrl::actualizarUserInside(int userID, bool inside) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "UPDATE Usuario SET inside ='" + Convert::ToBoolean(inside) + " WHERE ID = " + userID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}