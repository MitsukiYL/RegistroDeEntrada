#include "CardCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

CardCtrl::CardCtrl() {

}

List<card^>^ CardCtrl::buscarCardAll() {
	List<card^>^ listaCard = gcnew List<card^>();
	array<String^>^ lineas = File::ReadAllLines("Card.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());
		String^ code = datos[0];
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		String^ permissionType = datos[3];
		String^ emissionDate = datos[4];
		String^ registrationDate = datos[5];
		String^ expirationDate = datos[6];
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
		listaCard->Add(objCard);
	}
	return listaCard;
}

card^ CardCtrl::buscarCardxCode(String^ codeSearch) {
	card^ objCard;
	array<String^>^ lineas = File::ReadAllLines("Card.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());
		String^ code = datos[0];
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		String^ permissionType = datos[3];
		String^ emissionDate = datos[4];
		String^ registrationDate = datos[5];
		String^ expirationDate = datos[6];
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (code == codeSearch) {
			objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
			break;
		}
	}
	return objCard;
}

List<card^>^ CardCtrl::buscarCardxUserID(int userIDsearch) {
	List<card^>^ listaCard = gcnew List<card^>();
	array<String^>^ lineas = File::ReadAllLines("Card.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());
		String^ code = datos[0];
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		String^ permissionType = datos[3];
		String^ emissionDate = datos[4];
		String^ registrationDate = datos[5];
		String^ expirationDate = datos[6];
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (userID == userIDsearch) {
			card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
			listaCard->Add(objCard);
		}
	}
	return listaCard;
}

void CardCtrl::agregarNewCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {

}

void CardCtrl::eliminarCard(String^ codeDelete) {

}

void CardCtrl::actualizarCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {

}

