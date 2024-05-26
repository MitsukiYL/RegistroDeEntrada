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
		void agregarNewUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
		void eliminarUser(int userID);
		void actualizarUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
	};
}