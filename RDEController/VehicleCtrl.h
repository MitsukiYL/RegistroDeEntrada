#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class VehicleCtrl {
	public:
		VehicleCtrl();
		List<vehicle^>^ buscarVehicleAll();
		List<vehicle^>^ buscarVehiclexUser(int userIDsearch);
		vehicle^ buscarVehiclexPlate(String^ plateB);
		vehicle^ buscarVehiclexID(int IDsearch);
		void escribirArchivo(List<vehicle^>^ listaVehicle);
		void agregarNewVehicle(int ID, String^ fuelType, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser);
		void eliminarVehicle(int IDsearch);
		void actualizarVehicle(int ID, String^ fuelType, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser);
	};
}