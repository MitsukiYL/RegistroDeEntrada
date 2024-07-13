#include "VehicleCtrl.h"
#include "RequestCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

VehicleCtrl::VehicleCtrl() {
	this->objConexion = gcnew SqlConnection();
}

void VehicleCtrl::abrirConexion() {
	this->objConexion->ConnectionString = "Server=a20216803.casa5ormk2bu.us-east-1.rds.amazonaws.com;DataBase=RDE;User id=admin;Password=lpoo6803";
	this->objConexion->Open();
}

void VehicleCtrl::cerrarConexion() {
	this->objConexion->Close();
}
List<vehicle^>^ VehicleCtrl::buscarVehicleAll() {
	List<vehicle^>^ lista = gcnew List<vehicle^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Vehicle";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		String^ vehicleType = safe_cast<String^>(objData[0]);
		String^ registrationDate = safe_cast<String^>(objData[1]);
		String^ plate = safe_cast<String^>(objData[2]);
		String^ brand = safe_cast<String^>(objData[3]);
		String^ model = safe_cast<String^>(objData[4]);
		bool insurance = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int userID = safe_cast<int>(objData[6]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int ID = safe_cast<int>(objData[8]);
		int IDRequest = safe_cast<int>(objData[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

		user^ objUser = objUserCtrl->buscarUserxUserID(userID);
		request^ objRequest = objRequestCtrl->buscarRequestxID(IDRequest);

		vehicle^ objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
		lista->Add(objVehicle);
	}

	cerrarConexion();
	return lista;
}
List<vehicle^>^ VehicleCtrl::buscarVehiclexUser(int userIDsearch) {
	List<vehicle^>^ lista = gcnew List<vehicle^>();

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Vehicle where userID =" + userIDsearch;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		String^ vehicleType = safe_cast<String^>(objData[0]);
		String^ registrationDate = safe_cast<String^>(objData[1]);
		String^ plate = safe_cast<String^>(objData[2]);
		String^ brand = safe_cast<String^>(objData[3]);
		String^ model = safe_cast<String^>(objData[4]);
		bool insurance = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int userID = safe_cast<int>(objData[6]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int ID = safe_cast<int>(objData[8]);
		int IDRequest = safe_cast<int>(objData[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

		user^ objUser = objUserCtrl->buscarUserxUserID(userID);
		request^ objRequest = objRequestCtrl->buscarRequestxID(IDRequest);

		vehicle^ objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
		lista->Add(objVehicle);
	}

	cerrarConexion();
	return lista;
}

vehicle^ VehicleCtrl::buscarVehiclexPlate(String^ plateB) {
	vehicle^ objVehicle;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Vehicle where plate ='" + plateB + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		String^ vehicleType = safe_cast<String^>(objData[0]);
		String^ registrationDate = safe_cast<String^>(objData[1]);
		String^ plate = safe_cast<String^>(objData[2]);
		String^ brand = safe_cast<String^>(objData[3]);
		String^ model = safe_cast<String^>(objData[4]);
		bool insurance = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int userID = safe_cast<int>(objData[6]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int ID = safe_cast<int>(objData[8]);
		int IDRequest = safe_cast<int>(objData[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

		user^ objUser = objUserCtrl->buscarUserxUserID(userID);
		request^ objRequest = objRequestCtrl->buscarRequestxID(IDRequest);

		objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
	}

	cerrarConexion();
	return objVehicle;
}

vehicle^ VehicleCtrl::buscarVehiclexID(int IDsearch) {
	vehicle^ objVehicle;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Vehicle where ID =" + IDsearch;
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		String^ vehicleType = safe_cast<String^>(objData[0]);
		String^ registrationDate = safe_cast<String^>(objData[1]);
		String^ plate = safe_cast<String^>(objData[2]);
		String^ brand = safe_cast<String^>(objData[3]);
		String^ model = safe_cast<String^>(objData[4]);
		bool insurance = Convert::ToBoolean(safe_cast<int>(objData[5]));
		int userID = safe_cast<int>(objData[6]);
		bool active = Convert::ToBoolean(safe_cast<int>(objData[7]));
		int ID = safe_cast<int>(objData[8]);
		int IDRequest = safe_cast<int>(objData[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

		user^ objUser = objUserCtrl->buscarUserxUserID(userID);
		request^ objRequest = objRequestCtrl->buscarRequestxID(IDRequest);

		objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
	}

	cerrarConexion();
	return objVehicle;
}

void VehicleCtrl::agregarNewVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int userID = objUser->getUserID();
	int IDRequest = objRequest->getID();

	objSentencia->CommandText = "insert into Vehicle(vehicleType, registrationDate, plate, brand, model, insurance, userID, active, IDRequest) values ('" + 
		vehicleType + "','" + registrationDate + "','" + plate + "','" + brand + "','" + model + "'," + Convert::ToInt32(insurance) + "," + userID + "," + 
		Convert::ToInt32(active) + "," + IDRequest + ")";

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void VehicleCtrl::eliminarVehicle(int IDsearch) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	objSentencia->CommandText = "delete from Vehicle where ID =" + IDsearch;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void VehicleCtrl::actualizarVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest){
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;

	int userID = objUser->getUserID();
	int IDRequest = objRequest->getID();

	objSentencia->CommandText = "UPDATE Motor SET vehicleType ='" + vehicleType + "', registrationDate ='" + registrationDate + "', plate ='" +
		plate + "', brand ='" + brand + "', model ='" + model + "', insurance = " + Convert::ToBoolean(insurance) + ", userID =" + userID +
		", active= " + Convert::ToInt32(active) + ", IDRequest =" + IDRequest + "WHERE ID = " + ID;

	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
