#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class CardCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		CardCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<card^>^ buscarCardAll();
		card^ buscarCardxCode(String^ codeSearch);
		List<card^>^ buscarCardxUserID(int userIDsearch);

		void agregarNewCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
		void eliminarCard(String^ codeDelete);
		void actualizarCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);
	};
}