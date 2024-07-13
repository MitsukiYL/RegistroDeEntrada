#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ParkingSiteCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		ParkingSiteCtrl();
		void abrirConexion();
		void cerrarConexion();
		List <parkingSite^>^ BuscarSitexLot(String^ lotIDsearch);
		List <parkingSite^>^ AllEstacionamientos();
		parkingSite^ BuscarSiteXID(String^ IDsearch);

		void agregarEstacionamiento(String^ ID, bool reserved, bool active, String^ lotID);
		void actualizarEstac(String^ ID, bool reserved, bool active, String^ lotID);
		void eliminarEstac(String^ ID);
	};
}

