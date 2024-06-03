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
		bool active = Convert::ToBoolean(datos[2]);
		int registrationDate = Convert::ToInt32(datos[3]);
		String^ parkingSiteID = datos[4];
		int personDNI = Convert::ToInt32(datos[5]);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkingSiteID);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		user^ objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, objPerson);
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
		bool active = Convert::ToBoolean(datos[2]);
		int registrationDate = Convert::ToInt32(datos[3]);
		String^ parkingSiteID = datos[4];
		int personDNI = Convert::ToInt32(datos[5]);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkingSiteID);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		if (userID == userIDb) {
			objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, objPerson);
			break;
		}
	}
	return objUser;
}

user^ UserCtrl::buscarUserxPersonDNI(int DNIbuscar) {
	user^ objUser;
	array<String^>^ lineas = File::ReadAllLines("User.txt");
	String^ separadores = ";";
	for each (String ^ lineaUser in lineas) {

		array<String^>^ datos = lineaUser->Split(separadores->ToCharArray());

		int userID = Convert::ToInt32(datos[0]);
		String^ userType = datos[1];
		bool active = Convert::ToBoolean(datos[2]);
		int registrationDate = Convert::ToInt32(datos[3]);
		String^ parkingSiteID = datos[4];
		int personDNI = Convert::ToInt32(datos[5]);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkingSiteID);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		if (personDNI == DNIbuscar) {
			objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, objPerson);
			break;
		}
	}
	return objUser;
}

void UserCtrl::escribirArchivo(List<user^>^ listaUser) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUser->Count);
	for (int i = 0; i < listaUser->Count; i++) {
		user^ objUser = listaUser[i];
		lineasArchivo[i] = Convert::ToString(objUser->getUserID()) + ";" + objUser->getUserType() + ";" + Convert::ToString(objUser->getActive())
			+ ";" + Convert::ToString(objUser->getRegistrationDate()) + ";" + Convert::ToString(objUser->getParkingSite()->getID())
			+ ";" + Convert::ToString(objUser->getPerson()->getDNI());
	}
	File::WriteAllLines("User.txt", lineasArchivo);
}

void UserCtrl::agregarNewUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, person^ objPerson){

	List<user^>^ listaUser = buscarUserAll();
	user^ objUser = gcnew user(userID, userType, active, registrationDate, objParkingSite, objPerson);
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

void UserCtrl::actualizarUser(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, person^ objPerson){
	List<user^>^ listaUser = buscarUserAll();
	for (int i = 0; i < listaUser->Count; i++) {
		if (listaUser[i]->getUserID() == userID) {
			listaUser[i]->setActive(active);
			listaUser[i]->setUserType(userType);
			listaUser[i]->setRegistrationDate(registrationDate);
			listaUser[i]->setParkingSite(objParkingSite);
			listaUser[i]->setPerson(objPerson);
			break;
		}
	}
	escribirArchivo(listaUser);
}