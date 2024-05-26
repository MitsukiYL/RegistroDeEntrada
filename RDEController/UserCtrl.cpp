#include "UserCtrl.h"
#include "ParkingSiteCtrl.h"
#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

UserCtrl::UserCtrl() {

}

List<user^>^ UserCtrl::buscarUserAll() {
	List<user^>^ listaUser = gcnew List<user^>();
	array<String^>^ lineas = File::ReadAllLines("User.txt");
	String^ separadores = ";";
	for each (String ^ lineaUser in lineas) {

		array<String^>^ datos = lineaUser->Split(separadores->ToCharArray());

		int userID = Convert::ToInt32(datos[0]);
		String^ userType = datos[1];
		bool active = Convert::ToBoolean(Convert::ToInt32(datos[2]));
		int registrationDate = Convert::ToInt32(datos[3]);
		String^ parkingSiteID = datos[4];

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkingSiteID);

		int personDNI = Convert::ToInt32(datos[5]);
		String^ name = datos[6];
		int code = Convert::ToInt32(datos[7]);
		String^ mail = datos[8];
		String^ phone = datos[9];
		String^ password = datos[11];
		bool permission = Convert::ToBoolean(Convert::ToInt32(datos[11]));
		String^ occupation = datos[12];
		String^ gender = datos[13];
		int age = Convert::ToInt32(datos[14]);
		bool isInside = Convert::ToBoolean(Convert::ToInt32(datos[15]));

		//int, string, bool, int, parkingsite, int, string, int, string, string, string, bool, string, string, int, bool
		user^ objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, 
			personDNI,  name,  code,  mail,  phone,  password,  permission,  occupation,  gender,  age,  isInside);
		listaUser->Add(objUser);
	}
	return listaUser;
}

user^ UserCtrl::buscarUserxUserID(int userIDb) {
	user^ objUser;
	array<String^>^ lineas = File::ReadAllLines("User.txt");
	String^ separadores = ";";
	for each (String ^ lineaUser in lineas) {

		array<String^>^ datos = lineaUser->Split(separadores->ToCharArray());

		int userID = Convert::ToInt32(datos[0]);
		String^ userType = datos[1];
		bool active = Convert::ToBoolean(Convert::ToInt32(datos[2]));
		int registrationDate = Convert::ToInt32(datos[3]);
		String^ parkingSiteID = datos[4];


		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkingSiteID);

		int personDNI = Convert::ToInt32(datos[5]);
		String^ name = datos[6];
		int code = Convert::ToInt32(datos[7]);
		String^ mail = datos[8];
		String^ phone = datos[9];
		String^ password = datos[11];
		bool permission = Convert::ToBoolean(Convert::ToInt32(datos[11]));
		String^ occupation = datos[12];
		String^ gender = datos[13];
		int age = Convert::ToInt32(datos[14]);
		bool isInside = Convert::ToBoolean(Convert::ToInt32(datos[15]));

		if (userID == userIDb) {
			objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			break;
		}
	}
	return objUser;
}

void UserCtrl::escribirArchivo(List<user^>^ listaUser) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUser->Count);
	for (int i = 0; i < listaUser->Count; i++) {
		user^ objUser = listaUser[i];
		lineasArchivo[i] = Convert::ToString(objUser->getUserID()) + ";" + objUser->getUserType() +";"+objUser->getName() + ";" + Convert::ToString(objUser->getActive())
			+ ";" + Convert::ToString(objUser->getRegistrationDate()) + ";" + ";" + objUser->getPassword();
	}
	File::WriteAllLines("User.txt", lineasArchivo);
}

void UserCtrl::agregarNewUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) {

	List<user^>^ listaUser = buscarUserAll();
	user^ objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	listaUser->Add(objUser);
	escribirArchivo(listaUser);
}

void UserCtrl::eliminarUser(int userID) {
	List<user^>^ listaUser = buscarUserAll();
	for (int i = 0; i < listaUser->Count; i++) {
		if (listaUser[i]->getUserID() == userID) {
			listaUser->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaUser);
}

void UserCtrl::actualizarUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside){
	List<user^>^ listaUser = buscarUserAll();
	for (int i = 0; i < listaUser->Count; i++) {
		if (listaUser[i]->getUserID() == userID) {
			listaUser[i]->setActive(active);
			listaUser[i]->setUserType(userType);
			listaUser[i]->setRegistrationDate(registrationDate);

			break;
		}
	}
	escribirArchivo(listaUser);
}