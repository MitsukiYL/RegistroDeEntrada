#include "VehicleCtrl.h"
#include "RequestCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

VehicleCtrl::VehicleCtrl() {

}

List<vehicle^>^ VehicleCtrl::buscarVehicleAll() {
	List<vehicle^>^ listaVehicle = gcnew List<vehicle^>();
	array<String^>^ lineas = File::ReadAllLines("Vehicle.txt");
	String^ separadores = ";";
	for each (String ^ lineaVehicle in lineas) {

		array<String^>^ datos = lineaVehicle->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ plate = datos[1];
		String^ vehicleType = datos[2];
		String^ brand = datos[3];
		String^ model = datos[4];
		String^ registrationDate = datos[5];
		bool insurance = Convert::ToBoolean(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);
		int requestID = Convert::ToInt32(datos[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

		vehicle^ objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
		listaVehicle->Add(objVehicle);
	}
	return listaVehicle;
}
List<vehicle^>^ VehicleCtrl::buscarVehiclexUser(int userIDsearch) {
	List<vehicle^>^ listaVehiculos = gcnew List<vehicle^>();
	array<String^>^ lineas = File::ReadAllLines("Vehicle.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaVehicle in lineas) {

		array<String^>^ datos = lineaVehicle->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ plate = datos[1];
		String^ vehicleType = datos[2];
		String^ brand = datos[3];
		String^ model = datos[4];
		String^ registrationDate = datos[5];
		bool insurance = Convert::ToBoolean(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);
		int requestID = Convert::ToInt32(datos[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

		if (userID == userIDsearch) {
			vehicle^ objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
			listaVehiculos->Add(objVehicle);
		}
	}
	return listaVehiculos;
}

vehicle^ VehicleCtrl::buscarVehiclexPlate(String^ plateB) {
	vehicle^ objVehicle;
	array<String^>^ lineas = File::ReadAllLines("Vehicle.txt");
	String^ separadores = ";";
	for each (String ^ lineaVehicle in lineas) {

		array<String^>^ datos = lineaVehicle->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ plate = datos[1];
		String^ vehicleType = datos[2];
		String^ brand = datos[3];
		String^ model = datos[4];
		String^ registrationDate = datos[5];
		bool insurance = Convert::ToBoolean(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);
		int requestID = Convert::ToInt32(datos[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

		if (plate == plateB) {
			objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
			break;
		}
	}
	return objVehicle;
}
vehicle^ VehicleCtrl::buscarVehiclexID(int IDsearch) {
	vehicle^ objVehicle;
	array<String^>^ lineas = File::ReadAllLines("Vehicle.txt");
	String^ separadores = ";";
	for each (String ^ lineaVehicle in lineas) {

		array<String^>^ datos = lineaVehicle->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ plate = datos[1];
		String^ vehicleType = datos[2];
		String^ brand = datos[3];
		String^ model = datos[4];
		String^ registrationDate = datos[5];
		bool insurance = Convert::ToBoolean(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);
		int requestID = Convert::ToInt32(datos[9]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

		if (ID == IDsearch) {
			objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
			break;
		}
	}
	return objVehicle;
}

void VehicleCtrl::escribirArchivo(List<vehicle^>^ listaVehicle) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaVehicle->Count);
	for (int i = 0; i < listaVehicle->Count; i++) {
		vehicle^ objVehicle = listaVehicle[i];
		lineasArchivo[i] = Convert::ToString(objVehicle->getID()) + ";" + objVehicle->getPlate() + ";" + objVehicle->getVehicleType() + ";" + objVehicle->getBrand()
			+ ";" + objVehicle->getModel() + ";" + objVehicle->getRegistrationDate() + ";" + Convert::ToString(objVehicle->getInsurance())
			+ ";" + Convert::ToString(objVehicle->getUser()->getUserID());
	}
	File::WriteAllLines("Vehicle.txt", lineasArchivo);
}

void VehicleCtrl::agregarNewVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest) {
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	vehicle^ objVehicle = gcnew vehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
	listaVehicle->Add(objVehicle);
	escribirArchivo(listaVehicle);
}

void VehicleCtrl::eliminarVehicle(int IDsearch) {
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	for (int i = 0; i < listaVehicle->Count; i++) {
		if (listaVehicle[i]->getID() == IDsearch) {
			listaVehicle->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaVehicle);
}

void VehicleCtrl::actualizarVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest){
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	for (int i = 0; i < listaVehicle->Count; i++) {
		if (listaVehicle[i]->getID() == ID) {
			listaVehicle[i]->setPlate(plate);
			listaVehicle[i]->setVehicleType(vehicleType);
			listaVehicle[i]->setRegistrationDate(registrationDate);
			listaVehicle[i]->setBrand(brand);
			listaVehicle[i]->setModel(model);
			listaVehicle[i]->setInsurance(insurance);
			listaVehicle[i]->setUser(objUser);
			listaVehicle[i]->setActive(active);
			listaVehicle[i]->setRequest(objRequest);
			break;
		}
	}
	escribirArchivo(listaVehicle);
}
