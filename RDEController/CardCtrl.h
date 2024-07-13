#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class CardCtrl {
	public:
		CardCtrl();

		List<card^>^ buscarCardAll();
		card^ buscarCardxCode(String^ codeSearch);
		List<card^>^ buscarCardxUserID(int userIDsearch);

		void agregarNewCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
		void eliminarCard(String^ codeDelete);
		void actualizarCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
	};
}