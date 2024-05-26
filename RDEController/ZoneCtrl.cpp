#include "ZoneCtrl.h"
#include "AdminCtrl.h"

using namespace RDEController;
using namespace System::IO;

ZoneCtrl::ZoneCtrl() {
}
List<zone^>^ ZoneCtrl::buscarZoneAll() {
	List<zone^>^ listaZone = gcnew List<zone^>();
	array<String^>^ lineas = File::ReadAllLines("Zone.txt");
	String^ separadores = ";";
	for each (String ^ lineaZone in lineas) {

		array<String^>^ datos = lineaZone->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ name = datos[1];
		String^ location = datos[2];
		int openingTime = Convert::ToInt32(datos[3]);
		int closingTime = Convert::ToInt32(datos[4]);
		bool active = Convert::ToBoolean(datos[5]);
		int adminID = Convert::ToInt32(datos[6]);

		AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
		admin^ objAdmin = objAdminCtrl->BuscarAdminxID(adminID);

		zone^ objZone = gcnew zone(ID, name, location, openingTime, closingTime, active, objAdmin);
		listaZone->Add(objZone);
	}
	return listaZone;
}

zone^ ZoneCtrl::buscarZonaxID(int searchID) {
	zone^ objZone;
	array<String^>^ lineas = File::ReadAllLines("Zone.txt");
	String^ separadores = ";";
	for each (String ^ lineaZone in lineas) {

		array<String^>^ datos = lineaZone->Split(separadores->ToCharArray());

		int ID = Convert::ToInt32(datos[0]);
		String^ name = datos[1];
		String^ location = datos[2];
		int openingTime = Convert::ToInt32(datos[3]);
		int closingTime = Convert::ToInt32(datos[4]);
		bool active = Convert::ToBoolean(datos[5]);
		int adminID = Convert::ToInt32(datos[6]);

		AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
		admin^ objAdmin = objAdminCtrl->BuscarAdminxID(adminID);

		if (ID == searchID) {
			objZone = gcnew zone(ID, name, location, openingTime, closingTime, active, objAdmin);
		}
		
	}
	return objZone;
}

void ZoneCtrl::escribirArchivo(List<zone^>^ listaZone){
	array<String^>^ lineasArchivo = gcnew array<String^>(listaZone->Count);
	for (int i = 0; i < listaZone->Count; i++) {
		zone^ objZone = listaZone[i];
		lineasArchivo[i] = Convert::ToString(objZone->getID()) + ";" + objZone->getName() + ";" + objZone->getLocation() + ";" + Convert::ToString(objZone->getOpeningTime()) + ";" + Convert::ToString(objZone->getClosingTime()) + ";" + Convert::ToString(objZone->getActive()) + ";" + Convert::ToString(objZone->getAdmin()->getAdminID());
	}
	File::WriteAllLines("Zone.txt", lineasArchivo);
}

void ZoneCtrl::agregarNewZone(int ID, String^ name, String^ location, int openingTime, int closingTime, bool active, admin^ objAdmin) {
	List<zone^>^ listaZone = buscarZoneAll();
	zone^ objZone = gcnew zone(ID, name, location, openingTime, closingTime, active, objAdmin);
	listaZone->Add(objZone);
	escribirArchivo(listaZone);
}

void ZoneCtrl::eliminarZone(int ID) {
	List<zone^>^ listaZone = buscarZoneAll();
	for (int i = 0; i < listaZone->Count; i++) {
		if (listaZone[i]->getID() == ID) {
			listaZone->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaZone);
}

void ZoneCtrl::actualizarZone(int ID, String^ name, String^ location, int openingTime, int closingTime, bool active, admin^ objAdmin) {
	List<zone^>^ lista = buscarZoneAll();
	for (int i = 0; i < lista->Count; i++) {
		if (lista[i]->getID() == ID) {
			lista[i]->setName(name);
			lista[i]->setLocation(location);
			lista[i]->setOpeningTime(openingTime);
			lista[i]->setClosingTime(closingTime);
			lista[i]->setActive(active);
			lista[i]->setAdmin(objAdmin);
			break;
		}
	}
	escribirArchivo(lista);
}