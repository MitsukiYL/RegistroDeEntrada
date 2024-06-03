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
		card^ buscarCardxUserID(int userIDsearch);
		void escribirArchivo(List<card^>^ listaCard);
		void agregarNewCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser);
		void eliminarCard(int codigo);
		void actualizarCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser);
	};
}