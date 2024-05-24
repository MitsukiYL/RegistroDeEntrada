#include "VehicleCtrl.h"

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

		String^ fuelType = datos[4];
		String^ vehicleType = datos[1];
		String^ plate = datos[0];
		String^ brand = datos[2];
		String^ model = datos[3];
		bool insurance = Convert::ToBoolean(datos[5]);
		int registrationDate = 0001;
		

		vehicle^ objVehicle = gcnew vehicle(fuelType, vehicleType, registrationDate, plate, brand, model, insurance);
		listaVehicle->Add(objVehicle);
	}
	return listaVehicle;
}

vehicle^ VehicleCtrl::buscarVehiclexPlate(String^ plateB) {
	vehicle^ objVehicle;
	array<String^>^ lineas = File::ReadAllLines("Vehicle.txt");
	String^ separadores = ";";
	for each (String ^ lineaVehicle in lineas) {

		array<String^>^ datos = lineaVehicle->Split(separadores->ToCharArray());

		String^ fuelType = datos[4];
		String^ vehicleType = datos[1];
		String^ plate = datos[0];
		String^ brand = datos[2];
		String^ model = datos[3];
		bool insurance = Convert::ToBoolean(datos[5]);
		int registrationDate = 0001;

		if (plate == plateB) {
			objVehicle = gcnew vehicle(fuelType, vehicleType, registrationDate, plate, brand, model, insurance);
			break;
		}
	}
	return objVehicle;
}

void VehicleCtrl::escribirArchivo(List<vehicle^>^ listaVehicle) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaVehicle->Count);
	for (int i = 0; i < listaVehicle->Count; i++) {
		vehicle^ objVehicle = listaVehicle[i];
		lineasArchivo[i] = objVehicle->getPlate() + ";" + objVehicle->getVehicleType() + ";" + objVehicle->getBrand()
			+ ";" + objVehicle->getModel() + ";" + objVehicle->getFuelType() + ";" + Convert::ToString(objVehicle->getInsurance());
	}
	File::WriteAllLines("Vehicle.txt", lineasArchivo);
}

void VehicleCtrl::agregarNewVehicle(String^ fuelType, String^ vehicleType, int registrationDate,
	String^ plate, String^ brand, String^ model, bool insurance) {
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	vehicle^ objVehicle = gcnew vehicle(fuelType, vehicleType, registrationDate, plate, brand, model, insurance);
	listaVehicle->Add(objVehicle);
	escribirArchivo(listaVehicle);
}

void VehicleCtrl::eliminarVehicle(String^ plate) {
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	for (int i = 0; i < listaVehicle->Count; i++) {
		if (listaVehicle[i]->getPlate() == plate) {
			listaVehicle->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaVehicle);
}

void VehicleCtrl::actualizarVehicle(String^ fuelType, String^ vehicleType, int registrationDate, String^ plate, String^ brand, String^ model, bool insurance){
	List<vehicle^>^ listaVehicle = buscarVehicleAll();
	for (int i = 0; i < listaVehicle->Count; i++) {
		if (listaVehicle[i]->getPlate() == plate) {
			listaVehicle[i]->setFuelType(fuelType);
			listaVehicle[i]->setVehicleType(vehicleType);
			listaVehicle[i]->setRegistrationDate(registrationDate);
			listaVehicle[i]->setBrand(brand);
			listaVehicle[i]->setModel(model);
			listaVehicle[i]->setInsurance(insurance);
			break;
		}
	}
	escribirArchivo(listaVehicle);
}
