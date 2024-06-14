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

void CardCtrl::escribirArchivo(List<card^>^ listaCard) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCard->Count);
	for (int i = 0; i < listaCard->Count; i++) {
		card^ objCard = listaCard[i];
		lineasArchivo[i] = objCard->getCode() + ";" + Convert::ToString(objCard->getID()) + ";" + Convert::ToString(objCard->getPermission()) + ";" + objCard->getPermissionType()
			+ ";" + objCard->getEmissionDate() + ";" + objCard->getRegistrationDate()+ ";" + objCard->getExpirationDate() + ";" + Convert::ToString(objCard->getActive()) 
			+ ";" + Convert::ToString(objCard->getObjUser()->getUserID());
	}
	File::WriteAllLines("Card.txt", lineasArchivo);
}

void CardCtrl::agregarNewCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {
	List<card^>^ listaCard = buscarCardAll();
	card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
	listaCard->Add(objCard);
	escribirArchivo(listaCard);
}

void CardCtrl::eliminarCard(String^ codeDelete) {
	List<card^>^ listaCard = buscarCardAll();
	for (int i = 0; i < listaCard->Count; i++) {
		if (listaCard[i]->getCode() == codeDelete) {
			listaCard->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCard);
}

void CardCtrl::actualizarCard(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {
	List<card^>^ listaCard = buscarCardAll();
	for (int i = 0; i < listaCard->Count; i++) {
		if (listaCard[i]->getCode() == code) {
			listaCard[i]->setExpirationDate(expirationDate);
			listaCard[i]->setPermissionType(permissionType);
			listaCard[i]->setID(ID);
			listaCard[i]->setPermission(permission);
			listaCard[i]->setEmissionDate(emissionDate);
			listaCard[i]->setRegistrationDate(registrationDate);
			listaCard[i]->setActive(active);
			break;
		}
	}
	escribirArchivo(listaCard);
}

