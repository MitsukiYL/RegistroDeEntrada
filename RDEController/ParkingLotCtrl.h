#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class ParkingLotCtrl {
	public:
		ParkingLotCtrl();
		parkingLot^ BuscarplayaxID(String^ IDbuscar);
		List <parkingLot^>^ AllPlayas();
		void agregarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite);
		void escribirArchivo(List <parkingLot^>^ listaEstac);
		void actualizarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite);
		void eliminarPlaya(String^ ID);
	};
}
