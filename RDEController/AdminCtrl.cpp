#include "AdminCtrl.h"
#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

AdminCtrl::AdminCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void AdminCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void AdminCtrl::cerrarConexion() {
	this->objConexion->Close();
}

admin^ AdminCtrl::BuscarAdminxID(int adminIDbuscar){

	admin^ objAdmin;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Admin where adminID=" + adminIDbuscar;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int adminID = safe_cast<int>(objData[0]);
		String^ area = safe_cast<String^>(objData[1]);
		String^ adminType = safe_cast<String^>(objData[2]);
		String^ registrationDate = safe_cast<String^>(objData[3]);
		String^ expirationDate = safe_cast<String^>(objData[4]);
		int contractID = safe_cast<int>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, objPerson);
	}

	cerrarConexion();
	return objAdmin;
}

admin^ AdminCtrl::BuscarAdminxPersonDNI(int DNIbuscar) {
	admin^ objAdmin;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Admin where personDNI=" + DNIbuscar;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int adminID = safe_cast<int>(objData[0]);
		String^ area = safe_cast<String^>(objData[1]);
		String^ adminType = safe_cast<String^>(objData[2]);
		String^ registrationDate = safe_cast<String^>(objData[3]);
		String^ expirationDate = safe_cast<String^>(objData[4]);
		int contractID = safe_cast<int>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, objPerson);
	}

	cerrarConexion();
	return objAdmin;
}

List <admin^>^ AdminCtrl::AllAdministradores() {
	List<admin^>^ listaadmin = gcnew List<admin^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Admin";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int adminID = safe_cast<int>(objData[0]);
		String^ area = safe_cast<String^>(objData[1]);
		String^ adminType = safe_cast<String^>(objData[2]);
		String^ registrationDate = safe_cast<String^>(objData[3]);
		String^ expirationDate = safe_cast<String^>(objData[4]);
		int contractID = safe_cast<int>(objData[5]);
		int personDNI = safe_cast<int>(objData[6]);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		admin^ objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, objPerson);
		listaadmin->Add(objAdmin);
	}
	cerrarConexion();
	return listaadmin;
}
	

void AdminCtrl::agregarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	int personDNI = objPerson->getDNI();

	objSentencia->CommandText = "insert into Admin(adminID, area, adminType, registrationDate, expirationDate, contractID, personDNI) values (" + 
		adminID + ",'" + area + "','" + adminType + "','" + registrationDate + "','" + expirationDate + "'," + contractID + "," 
		+ personDNI + ")";
	
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void AdminCtrl::actualizarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	int personDNI = objPerson->getDNI();

	objSentencia->CommandText = "UPDATE Admin SET area ='" + area + "', adminType ='" + adminType + "', registrationDate ='" + registrationDate + 
		"', expirationDate ='" + expirationDate + "', contractID =" + contractID + ", personDNI =" + personDNI + 
		" WHERE ID = " + adminID;
	
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void AdminCtrl::eliminarAdmin(int adminID) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Admin where ID =" + adminID;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}


