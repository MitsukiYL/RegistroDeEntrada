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
		void agregarNewUser(String^ userType, String^ name, String^ password, bool active, int userID, int registrationDate, int personDNI);
		void eliminarUser(int userID);
		void actualizarUser(String^ userType, String^ name, String^ password, bool active, int userID, int registrationDate, int personDNI);
	};
}