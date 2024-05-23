#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class ParkingSiteCtrl {
	public:
		ParkingSiteCtrl();
		List <parkingSite^>^ BuscarEstacionamientoxID(String^ IDbuscar);
		List <parkingSite^>^ AllEstacionamientos();
		void agregarEstacionamiento(String^ ID, bool reserved, bool active);
		void escribirArchivo(List <parkingSite^>^ listaEstac);
		void actualizarEstac(String^ ID, bool reserved, bool active);
		void eliminarEstac(String^ ID);
	};
}

