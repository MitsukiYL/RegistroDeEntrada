#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ZoneCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		ZoneCtrl();
		void abrirConexion();
		void cerrarConexion();
		List<zone^>^ buscarZoneAll();
		zone^ buscarZonaxID(int searchID);
		void escribirArchivo(List<zone^>^ listaZone);
		void agregarNewZone(int ID,  String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin);
		void eliminarZone(int ID);
		void actualizarZone(int ID,  String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin);
	};
}