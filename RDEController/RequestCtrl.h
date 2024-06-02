#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class RequestCtrl {
	public:
		RequestCtrl();
		List<request^>^ buscarRequestAll();
		request^ buscarRequestxID(int IDsearch);
		void escribirArchivo(List<request^>^ listaRequest);
		void agregarNewRequest(int ID, int emissionDate, int responseDate, String^ type, String^ newOccupation, String^ comment, bool active, user^ objUser);
		void eliminarRequest(int ID);
		void actualizarRequest(int ID, int emissionDate, int responseDate, String^ type, String^ newOccupation, String^ comment, bool active, user^ objUser);
	};
}