#include "RequestCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

RequestCtrl::RequestCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void RequestCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void RequestCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<request^>^ RequestCtrl::buscarRequestAll() {
	List<request^>^ lista = gcnew List<request^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Request";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		String^ emissionDate = safe_cast<String^>(objData[1]);
		String^ responseDate = safe_cast<String^>(objData[2]);
		String^ type = safe_cast<String^>(objData[3]);
		String^ newOccupation = safe_cast<String^>(objData[4]);
		String^ comment = safe_cast<String^>(objData[5]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[6]));
		bool accepted = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int codeUser = safe_cast<int>(objData[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(codeUser);

		request^ objrequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
		lista->Add(objrequest);
	}

	cerrarConexion();
	return lista;
}

List<request^>^ RequestCtrl::buscarRequestxActive() {
	List<request^>^ lista = gcnew List<request^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Request where active =" + 1;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		String^ emissionDate = safe_cast<String^>(objData[1]);
		String^ responseDate = safe_cast<String^>(objData[2]);
		String^ type = safe_cast<String^>(objData[3]);
		String^ newOccupation = safe_cast<String^>(objData[4]);
		String^ comment = safe_cast<String^>(objData[5]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[6]));
		bool accepted = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int codeUser = safe_cast<int>(objData[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(codeUser);

		request^ objrequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
		lista->Add(objrequest);
	}

	cerrarConexion();
	return lista;
}

request^ RequestCtrl::buscarRequestxID(int IDsearch) {
	request^ objRequest;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Request where ID =" + IDsearch;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int ID = safe_cast<int>(objData[0]);
		String^ emissionDate = safe_cast<String^>(objData[1]);
		String^ responseDate = safe_cast<String^>(objData[2]);
		String^ type = safe_cast<String^>(objData[3]);
		String^ newOccupation = safe_cast<String^>(objData[4]);
		String^ comment = safe_cast<String^>(objData[5]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[6]));
		bool accepted = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int codeUser = safe_cast<int>(objData[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(codeUser);

		objRequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
	}

	cerrarConexion();
	return objRequest;
}

void RequestCtrl::agregarNewRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int codeUser = objUser->getUserID();

	objSentencia->CommandText = "insert into Request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, codeUser) values ('" + emissionDate + 
		"','" + responseDate + "','" + type + "','" + newOccupation + "','" + comment + "'," + Convert::ToInt32(active) + "," + Convert::ToInt32(active) + "," + codeUser + ")";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void RequestCtrl::eliminarRequest(int ID) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Request where ID =" + ID;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
void RequestCtrl::actualizarRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int codeUser = objUser->getUserID();

	objSentencia->CommandText = "UPDATE Request SET emissionDate ='" + emissionDate + "', responseDate ='" + responseDate + "', type ='" + type +
		"', newOccupation ='" + newOccupation + "', comment ='" + comment + "', active =" + Convert::ToInt32(active) + ", accepted =" + Convert::ToInt32(accepted) + 
		", codeUser =" + codeUser + " WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}