#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class ZoneCtrl {
	public:
		ZoneCtrl();
		List<zone^>^ buscarZoneAll();
		zone^ buscarZonaxID(int searchID);
		void escribirArchivo(List<zone^>^ listaZone);
		void agregarNewZone(int ID,  String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin);
		void eliminarZone(int ID);
		void actualizarZone(int ID,  String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin);
	};
}