#include "CardCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

CardCtrl::CardCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void CardCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void CardCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<card^>^ CardCtrl::buscarCardAll() {
	List<card^>^ lista = gcnew List<card^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Card";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ code = safe_cast<String^>(objData[0]);
		String^ expirationDate = safe_cast<String^>(objData[1]);
		String^ permissionType = safe_cast<String^>(objData[2]);
		int ID = safe_cast<int>(objData[3]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ emissionDate = safe_cast<String^>(objData[4]);
		String^ registrationDate = safe_cast<String^>(objData[4]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[3]));
		int userID = safe_cast<int>(objData[3]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		card^ objcard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
		lista->Add(objcard);
	}

	cerrarConexion();
	return lista;
}

card^ CardCtrl::buscarCardxCode(String^ codeSearch) {
	card^ objCard;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Card where code= '" + codeSearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ code = safe_cast<String^>(objData[0]);
		String^ expirationDate = safe_cast<String^>(objData[1]);
		String^ permissionType = safe_cast<String^>(objData[2]);
		int ID = safe_cast<int>(objData[3]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ emissionDate = safe_cast<String^>(objData[4]);
		String^ registrationDate = safe_cast<String^>(objData[4]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[3]));
		int userID = safe_cast<int>(objData[3]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
	}

	cerrarConexion();
	return objCard;
}

List<card^>^ CardCtrl::buscarCardxUserID(int userIDsearch) {
	List<card^>^ lista = gcnew List<card^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Card where userID = " + userIDsearch;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ code = safe_cast<String^>(objData[0]);
		String^ expirationDate = safe_cast<String^>(objData[1]);
		String^ permissionType = safe_cast<String^>(objData[2]);
		int ID = safe_cast<int>(objData[3]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[3]));
		String^ emissionDate = safe_cast<String^>(objData[4]);
		String^ registrationDate = safe_cast<String^>(objData[4]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[3]));
		int userID = safe_cast<int>(objData[3]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		card^ objcard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
		lista->Add(objcard);
	}

	cerrarConexion();
	return lista;
}

void CardCtrl::agregarNewCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int userID = objUser->getUserID();

	objSentencia->CommandText = "insert into Card(code, expirationDate, permissionType, permission, emissionDate, registrationDate, active, userID) values ('" + 
		code + "','" + expirationDate + "','" + permissionType + "'," + Convert::ToInt32(permission) + ",'" + emissionDate + "','" + 
		registrationDate + "'," + Convert::ToInt32(active) + "," + userID + ")";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void CardCtrl::eliminarCard(String^ codeDelete) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Card where code ='" + codeDelete + "'";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void CardCtrl::actualizarCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int userID = objUser->getUserID();

	objSentencia->CommandText = "UPDATE Card SET code ='" + code + "', expirationDate ='" + expirationDate + "', permissionType ='" + permissionType +
		"', permission =" + Convert::ToInt32(permission) + ", emissionDate ='" + emissionDate + "', registrationDate ='" + registrationDate + "', active =" +
		Convert::ToInt32(active) + ", userID ="+ userID + " WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

