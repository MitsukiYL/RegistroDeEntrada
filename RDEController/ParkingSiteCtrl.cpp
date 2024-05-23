#include "ParkingSiteCtrl.h"

using namespace RDEController;
using namespace System::IO;

ParkingSiteCtrl::ParkingSiteCtrl() {

}

List <parkingSite^>^ ParkingSiteCtrl::BuscarEstacionamientoxID(String^ IDbuscar) {
	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaPeluche in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());
		String^ ID =  datos[0];
		bool reserved = Convert::ToBoolean(datos[1]);
		bool active = Convert::ToBoolean(datos[2]);
		
		
		if (ID->CompareTo(IDbuscar) == 0) {
			parkingSite^ objestac = gcnew parkingSite( ID,reserved,active);
			listaesta->Add(objestac);
		}
	}
	return listaesta;
}

List <parkingSite^>^ ParkingSiteCtrl::AllEstacionamientos() {
	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaPeluche in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());
		String^ ID = datos[0];
		bool reserved = Convert::ToBoolean(datos[1]);
		bool active = Convert::ToBoolean(datos[2]);
		parkingSite^ objestac = gcnew parkingSite(ID, reserved, active);
		listaesta->Add(objestac);
	}
	return listaesta;
}

void ParkingSiteCtrl::agregarEstacionamiento(String^ ID, bool reserved, bool active) {
	List<parkingSite^>^ listaesta = AllEstacionamientos();
	parkingSite^ estacNuevo = gcnew parkingSite(ID, reserved, active);
	listaesta->Add(estacNuevo);
	escribirArchivo(listaesta);
}


void ParkingSiteCtrl::escribirArchivo(List <parkingSite^>^ listaEstac) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaEstac->Count);
	for (int i = 0; i < listaEstac->Count; i++) {
		parkingSite^ objEstac = listaEstac[i];
		lineasArchivo[i] = objEstac->getID() + ";" + Convert::ToString(objEstac->getReserved()) + ";" + Convert::ToString(objEstac->getActive());
	}
	File::WriteAllLines("Estacionamientos.txt", lineasArchivo);
}

void ParkingSiteCtrl::actualizarEstac(String^ ID, bool reserved, bool active) {
	List<parkingSite^>^ listaesta = AllEstacionamientos();
	for (int i = 0; i < listaesta->Count; i++) {
		if (listaesta[i]->getID() == ID) {
			listaesta[i]->setReserved(reserved);
			listaesta[i]->setActive(active);
			break;
		}
	}
	escribirArchivo(listaesta);

}

void ParkingSiteCtrl::eliminarEstac(String^ ID) {
	List<parkingSite^>^ listaestc = AllEstacionamientos();
	for (int i = 0; i < listaestc->Count; i++) {
		if (ID ->CompareTo(listaestc[i]->getID())== 0) {
			listaestc->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaestc);
}


