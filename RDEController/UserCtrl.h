#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class UserCtrl {
	public:
		UserCtrl();
		List<user^>^ buscarUserAll();
		user^ buscarUserxUserID(int userIDb);
		user^ buscarUserxPersonDNI(int DNIbuscar);
		void escribirArchivo(List<user^>^ listaUser);
		void agregarNewUser(int userID, String^ userType, bool active, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson);
		void eliminarUser(int userID);
		void actualizarUser(int userID, String^ userType, bool active, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson);
	};
}