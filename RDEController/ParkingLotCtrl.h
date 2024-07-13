#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ParkingLotCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		ParkingLotCtrl();
		void abrirConexion();
		void cerrarConexion();

		parkingLot^ BuscarplayaxID(String^ IDbuscar);
		List <parkingLot^>^ AllPlayas();
		List <parkingLot^>^ PlayasxZona(int IDzone);

		void agregarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone);
		void actualizarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone);
		void eliminarPlaya(String^ ID);
	};
}
