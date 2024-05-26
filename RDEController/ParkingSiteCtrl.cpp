#include "ParkingSiteCtrl.h"

using namespace RDEController;
using namespace System::IO;

ParkingSiteCtrl::ParkingSiteCtrl() {

}

List <parkingSite^>^ ParkingSiteCtrl::BuscarSitexLot(int lotIDsearch) {

	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	String^ separadores = ";"; 

	for each (String ^ lineaPeluche in lineas) {
		
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());

		
		//	FORMATO DEL ARCHIVO TXT
		//	STRING ; BOOL ; BOOL ; INT
		

		String^ ID =  datos[0];
		bool reserved = Convert::ToBoolean(datos[1]);
		bool active = Convert::ToBoolean(datos[2]);
		int lotID = Convert::ToInt32(datos[3]);
		
		if (lotID == lotIDsearch) {
			parkingSite^ objestac = gcnew parkingSite(ID,reserved,active, lotID);
			listaesta->Add(objestac);
		}
	}
	return listaesta;
}

List <parkingSite^>^ ParkingSiteCtrl::AllEstacionamientos() {
	List<parkingSite^>^ listaesta = gcnew List<parkingSite^>();
	array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	String^ separadores = ";"; 
	for each (String ^ lineaPeluche in lineas) {
		
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());


		//	FORMATO DEL ARCHIVO TXT
		//	STRING ; BOOL ; BOOL ; INT


		String^ ID = datos[0];
		bool reserved = Convert::ToBoolean(datos[1]);
		bool active = Convert::ToBoolean(datos[2]);
		int lotID = Convert::ToInt32(datos[3]);

		parkingSite^ objestac = gcnew parkingSite(ID, reserved, active, lotID);
		listaesta->Add(objestac);
	}
	return listaesta;
}

parkingSite^ ParkingSiteCtrl::BuscarSiteXID(String^ IDsearch) {
	parkingSite^ objParkingSite;
	array<String^>^ lineas = File::ReadAllLines("Estacionamientos.txt");
	String^ separadores = ";";

	for each (String ^ lineaPeluche in lineas) {

		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());


		//	FORMATO DEL ARCHIVO TXT
		//	STRING ; BOOL ; BOOL ; INT


		String^ ID = datos[0];
		bool reserved = Convert::ToBoolean(datos[1]);
		bool active = Convert::ToBoolean(datos[2]);
		int lotID = Convert::ToInt32(datos[3]);

		if (ID == IDsearch) {
			objParkingSite = gcnew parkingSite(ID, reserved, active, lotID);
		}
	}
	return objParkingSite;
}

void ParkingSiteCtrl::agregarEstacionamiento(String^ ID, bool reserved, bool active, int lotID) {
	List<parkingSite^>^ listaesta = AllEstacionamientos();
	parkingSite^ estacNuevo = gcnew parkingSite(ID, reserved, active, lotID);
	listaesta->Add(estacNuevo);
	escribirArchivo(listaesta);
}


void ParkingSiteCtrl::escribirArchivo(List <parkingSite^>^ listaEstac) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaEstac->Count);
	for (int i = 0; i < listaEstac->Count; i++) {
		parkingSite^ objEstac = listaEstac[i];
		lineasArchivo[i] = objEstac->getID() + ";" + Convert::ToString(objEstac->getReserved()) + ";" + Convert::ToString(objEstac->getActive()) + ";" + Convert::ToString(objEstac->getLotID());
	}
	File::WriteAllLines("Estacionamientos.txt", lineasArchivo);
}

void ParkingSiteCtrl::actualizarEstac(String^ ID, bool reserved, bool active, int lotID) {
	List<parkingSite^>^ listaesta = AllEstacionamientos();
	for (int i = 0; i < listaesta->Count; i++) {
		if (listaesta[i]->getID() == ID) {
			listaesta[i]->setReserved(reserved);
			listaesta[i]->setActive(active);
			listaesta[i]->setLotID(lotID);
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


