#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class VehicleCtrl {
	public:
		VehicleCtrl();
		List<vehicle^>^ buscarVehicleAll();
		vehicle^ buscarVehiclexPlate(String^ plateB);
		void escribirArchivo(List<vehicle^>^ listaVehicle);
		void agregarNewVehicle(String^ fuelType, String^ vehicleType, int registrationDate,
			String^ plate, String^ brand, String^ model, bool insurance);
		void eliminarVehicle(String^ plate);
		void actualizarVehicle(String^ fuelType, String^ vehicleType, int registrationDate,
			String^ plate, String^ brand, String^ model, bool insurance);
	};
}