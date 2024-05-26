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
		int code = Convert::ToInt32(datos[0]);
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		String^ permissionType = datos[3];
		int emissionDate = Convert::ToInt32(datos[4]);
		int registrationDate = Convert::ToInt32(datos[5]);
		int expirationDate = Convert::ToInt32(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
		listaCard->Add(objCard);
	}
	return listaCard;
}

card^ CardCtrl::buscarCardxCode(int codigoB) {
	card^ objCard;
	array<String^>^ lineas = File::ReadAllLines("Card.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());
		int code = Convert::ToInt32(datos[0]);
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		String^ permissionType = datos[3];
		int emissionDate = Convert::ToInt32(datos[4]);
		int registrationDate = Convert::ToInt32(datos[5]);
		int expirationDate = Convert::ToInt32(datos[6]);
		bool active = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (code == codigoB) {
			objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
			break;
		}
	}
	return objCard;
}

void CardCtrl::escribirArchivo(List<card^>^ listaCard) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCard->Count);
	for (int i = 0; i < listaCard->Count; i++) {
		card^ objCard = listaCard[i];
		lineasArchivo[i] = Convert::ToString(objCard->getCode()) + ";" + Convert::ToString(objCard->getID()) + ";" + Convert::ToString(objCard->getPermission()) + ";" + objCard->getPermissionType()
			+ ";" + Convert::ToString(objCard->getEmissionDate()) + ";" + Convert::ToString(objCard->getRegistrationDate())
			+ ";" + Convert::ToString(objCard->getExpirationDate()) + ";" + Convert::ToString(objCard->getActive()) + ";" + Convert::ToString(objCard->getObjUser()->getUserID());
	}
	File::WriteAllLines("Card.txt", lineasArchivo);
}

void CardCtrl::agregarNewCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser) {
	List<card^>^ listaCard = buscarCardAll();
	card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
	listaCard->Add(objCard);
	escribirArchivo(listaCard);
}

void CardCtrl::eliminarCard(int codigo) {
	List<card^>^ listaCard = buscarCardAll();
	for (int i = 0; i < listaCard->Count; i++) {
		if (listaCard[i]->getCode() == codigo) {
			listaCard->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCard);
}

void CardCtrl::actualizarCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser) {
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

