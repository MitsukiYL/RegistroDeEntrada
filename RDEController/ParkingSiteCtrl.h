#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class ParkingSiteCtrl {
	public:
		ParkingSiteCtrl();
		List <parkingSite^>^ BuscarSitexLot(int lotIDsearch);
		List <parkingSite^>^ AllEstacionamientos();
		void agregarEstacionamiento(String^ ID, bool reserved, bool active, int lotID);
		void escribirArchivo(List <parkingSite^>^ listaEstac);
		void actualizarEstac(String^ ID, bool reserved, bool active, int lotID);
		void eliminarEstac(String^ ID);
	};
}

