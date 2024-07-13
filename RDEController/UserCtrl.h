#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class UserCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		UserCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<user^>^ buscarUserAll();
		user^ buscarUserxUserID(int userIDb);
		user^ buscarUserxPersonDNI(int DNIbuscar);
		
		void agregarNewUser(int userID, String^ userType, bool active, bool inside, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson);
		void eliminarUser(int userID);
		void actualizarUser(int userID, String^ userType, bool active, bool inside, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson);
		void actualizarUserInside(int userID, bool inside);
	};
}