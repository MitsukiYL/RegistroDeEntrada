#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

PersonCtrl::PersonCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void PersonCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void PersonCtrl::cerrarConexion() {
	this->objConexion->Close();
}

List<person^>^ PersonCtrl::buscarPersonAll() {
	List<person^>^ listaPerson = gcnew List<person^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Person";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int DNI = safe_cast<int>(objData[0]);
		String^ name = safe_cast<String^>(objData[1]);
		int code = safe_cast<int>(objData[2]);
		String^ mail = safe_cast<String^>(objData[3]);
		String^ phone = safe_cast<String^>(objData[4]);
		String^ password = safe_cast<String^>(objData[5]);
		int age = safe_cast<int>(objData[6]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[7]));
		String^ occupation = safe_cast<String^>(objData[8]);
		String^ gender = safe_cast<String^>(objData[9]);

		person^ objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age);
		listaPerson->Add(objPerson);
	}
	cerrarConexion();
	return listaPerson;
}

person^ PersonCtrl::buscarPersonxDNI(int DNIb) {
	person^ objPerson;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Person where DNI=" + DNIb;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int DNI = safe_cast<int>(objData[0]);
		String^ name = safe_cast<String^>(objData[1]);
		String^ password = safe_cast<String^>(objData[2]);
		int code = safe_cast<int>(objData[3]);
		String^ mail = safe_cast<String^>(objData[4]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int age = safe_cast<int>(objData[6]);
		String^ occupation = safe_cast<String^>(objData[7]);
		String^ gender = safe_cast<String^>(objData[8]);
		String^ phone = safe_cast<String^>(objData[9]);

		objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age);
	}

	cerrarConexion();
	return objPerson;
}

person^ PersonCtrl::buscarPersonxPassword(String^ passwordSearch) {
	person^ objPerson;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Person where password='" + passwordSearch + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int DNI = safe_cast<int>(objData[0]);
		String^ name = safe_cast<String^>(objData[1]);
		String^ password = safe_cast<String^>(objData[2]);
		int code = safe_cast<int>(objData[3]);
		String^ mail = safe_cast<String^>(objData[4]);
		bool permission = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int age = safe_cast<int>(objData[6]);
		String^ occupation = safe_cast<String^>(objData[7]);
		String^ gender = safe_cast<String^>(objData[8]);
		String^ phone = safe_cast<String^>(objData[9]);

		objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age);
	}

	cerrarConexion();
	return objPerson;
}

void PersonCtrl::agregarNewPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "insert into Person(DNI, name, password, code, mail, permission, age, occupation, gender, phone) values (" + 
		DNI + ",'" + name + "','" + password + "'," + code + ",'" + mail + "'," + permission + "," + age + ",'" + 
		occupation + "','" + gender + "','" + phone + "')";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void PersonCtrl::eliminarPerson(int DNI) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Person where ID =" + DNI;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void PersonCtrl::actualizarPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "UPDATE Person SET name ='" + name + "', password ='" + password + "', code =" + code + ", mail ='" + mail + 
		"', permission =" + Convert::ToInt32(permission) + ", age =" + age + ", occupation ='" +  occupation + "', gender ='" + gender +
		"', phone ='" + phone + "' WHERE DNI =" + DNI;
	
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
