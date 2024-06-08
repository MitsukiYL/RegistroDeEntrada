#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class CardCtrl {
	public:
		CardCtrl();
		List<card^>^ buscarCardAll();
		card^ buscarCardxCode(int codigoB);
		List<card^>^ buscarCardxUserID(int userIDsearch);
		void escribirArchivo(List<card^>^ listaCard);
		void agregarNewCard(int code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
		void eliminarCard(int codigo);
		void actualizarCard(int code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
	};
}