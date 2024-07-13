#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class VehicleCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		VehicleCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<vehicle^>^ buscarVehicleAll();
		List<vehicle^>^ buscarVehiclexUser(int userIDsearch);
		vehicle^ buscarVehiclexPlate(String^ plateB);
		vehicle^ buscarVehiclexID(int IDsearch);
		
		void agregarNewVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest);
		void eliminarVehicle(int IDsearch);
		void actualizarVehicle(int ID, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser, bool active, request^ objRequest);
	};
}