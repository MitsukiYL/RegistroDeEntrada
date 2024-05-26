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
		void escribirArchivo(List<user^>^ listaUser);
		void agregarNewUser(String^ userType, bool active, int userID, int registrationDate, parkingSite^ objParkingSite, int personDNI);
		void eliminarUser(int userID);
		void actualizarUser(String^ userType, bool active, int userID, int registrationDate, parkingSite^ objParkingSite, int personDNI);
	};
}