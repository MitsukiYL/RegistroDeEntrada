#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class RequestCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		RequestCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<request^>^ buscarRequestAll();
		List<request^>^ buscarRequestxActive();
		request^ buscarRequestxID(int IDsearch);
		
		void agregarNewRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser);
		void eliminarRequest(int ID);
		void actualizarRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser);
	};
}