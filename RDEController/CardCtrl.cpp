#include "CardCtrl.h"

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
		int expirationDate = Convert::ToInt32(datos[5]);
		String^ permissionType = "Total";
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		int emissionDate = Convert::ToInt32(datos[3]);
		int registrationDate = Convert::ToInt32(datos[4]);
		bool active = Convert::ToBoolean(datos[6]);

		card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active);
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
		int expirationDate = Convert::ToInt32(datos[5]);
		String^ permissionType = "Total";
		int ID = Convert::ToInt32(datos[1]);
		bool permission = Convert::ToBoolean(datos[2]);
		int emissionDate = Convert::ToInt32(datos[3]);
		int registrationDate = Convert::ToInt32(datos[4]);
		bool active = Convert::ToBoolean(datos[6]);

		if (code == codigoB) {
			objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active);
			break;
		}
	}
	return objCard;
}

void CardCtrl::escribirArchivo(List<card^>^ listaCard) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCard->Count);
	for (int i = 0; i < listaCard->Count; i++) {
		card^ objCard = listaCard[i];
		lineasArchivo[i] = Convert::ToString(objCard->getcode()) + ";" + Convert::ToString(objCard->getID()) + ";" + Convert::ToString(objCard->getpermission())
			+ ";" + Convert::ToString(objCard->getemissionDate()) + ";" + Convert::ToString(objCard->getregistrationDate())
			+ ";" + Convert::ToString(objCard->getexpirationDate()) + ";" + Convert::ToString(objCard->getactive());
	}
	File::WriteAllLines("Card.txt", lineasArchivo);
}

void CardCtrl::agregarNewCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active) {
	List<card^>^ listaCard = buscarCardAll();
	card^ objCard = gcnew card(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active);
	listaCard->Add(objCard);
	escribirArchivo(listaCard);
}

void CardCtrl::eliminarCard(int codigo) {
	List<card^>^ listaCard = buscarCardAll();
	for (int i = 0; i < listaCard->Count; i++) {
		if (listaCard[i]->getcode() == codigo) {
			listaCard->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCard);
}

void CardCtrl::actualizarCard(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active) {
	List<card^>^ listaCard = buscarCardAll();
	for (int i = 0; i < listaCard->Count; i++) {
		if (listaCard[i]->getcode() == code) {
			listaCard[i]->setexpirationDate(expirationDate);
			listaCard[i]->setpermissionType(permissionType);
			listaCard[i]->setID(ID);
			listaCard[i]->setpermission(permission);
			listaCard[i]->setemissionDate(emissionDate);
			listaCard[i]->setregistrationDate(registrationDate);
			listaCard[i]->setactive(active);
			break;
		}
	}
	escribirArchivo(listaCard);
}