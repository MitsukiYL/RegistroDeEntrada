#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class ParkingSiteCtrl {
	public:
		ParkingSiteCtrl();
		List <parkingSite^>^ BuscarSitexLot(String^ lotIDsearch);
		List <parkingSite^>^ AllEstacionamientos();
		parkingSite^ BuscarSiteXID(String^ IDsearch);
		void agregarEstacionamiento(String^ ID, bool reserved, bool active, String^ lotID);
		void escribirArchivo(List <parkingSite^>^ listaEstac);
		void actualizarEstac(String^ ID, bool reserved, bool active, String^ lotID);
		void eliminarEstac(String^ ID);
	};
}

