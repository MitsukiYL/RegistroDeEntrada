#include "ParkingLotCtrl.h"
#include "ZoneCtrl.h"
#include "ParkingSiteCtrl.h"

using namespace RDEController;
using namespace System::IO;

ParkingLotCtrl::ParkingLotCtrl() {

}

 parkingLot^ ParkingLotCtrl::BuscarplayaxID(String^ IDbuscar) {

	parkingLot^ objParkingLot;
	array<String^>^ lineas = File::ReadAllLines("ParkingLot.txt");
	String^ separadores = ";";

	for each (String ^ lineapeluche in lineas) {
		
		array<String^>^ datos = lineapeluche->Split(separadores->ToCharArray());

		String^ name = datos[0];
		char vehicleType = Convert::ToChar(datos[1]);
		String^ ID = datos[2];
		int capacity = Convert::ToInt32(datos[3]);
		int N_reserved = Convert::ToInt32(datos[4]);
		int N_inactive = Convert::ToInt32(datos[5]);
		int zoneID = Convert::ToInt32(datos[6]);


		ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		zone^ objZone = objZoneCtrl->buscarZonaxID(zoneID);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		List<parkingSite^>^ listaParkingSite = objParkingSiteCtrl->AllEstacionamientos();
		

		if (ID->CompareTo(IDbuscar)==0) {
			objParkingLot = gcnew parkingLot(name,vehicleType,ID,capacity,N_reserved,N_inactive,objZone,listaParkingSite);
		}
	}
	return objParkingLot;
}

List <parkingLot^>^ ParkingLotCtrl::AllPlayas() {
	List<parkingLot^>^ listaplaya = gcnew List<parkingLot^>();
	array<String^>^ lineas = File::ReadAllLines("ParkingLot.txt");
	String^ separadores = ";"; /*aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineapeluche in lineas) {
		/*voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineapeluche->Split(separadores->ToCharArray());

		String^ name = datos[0];
		char vehicleType = Convert::ToChar(datos[1]);
		String^ ID = datos[2];
		int capacity = Convert::ToInt32(datos[3]);
		int N_reserved = Convert::ToInt32(datos[4]);
		int N_inactive = Convert::ToInt32(datos[5]);
		int zoneID = Convert::ToInt32(datos[6]);

		ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		zone^ objZone = objZoneCtrl->buscarZonaxID(zoneID);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		List<parkingSite^>^ listaParkingSite = objParkingSiteCtrl->AllEstacionamientos();

		parkingLot^ objplaya = gcnew parkingLot(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone, listaParkingSite);
		listaplaya->Add(objplaya);
		return listaplaya;
	}
}


void ParkingLotCtrl::agregarPlaya(String ^ name, char vehicleType, String ^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite) {
	List<parkingLot^>^ listaplaya = AllPlayas();
	parkingLot^ PlayaNueva = gcnew parkingLot(name,vehicleType,ID,capacity, N_reserved, N_inactive, objZone, listaParkingSite);
	listaplaya->Add(PlayaNueva);
	escribirArchivo(listaplaya);
}


void ParkingLotCtrl::escribirArchivo(List <parkingLot^>^ listaplaya) {
	array<String^>^ lineasarchivo = gcnew array<String^>(listaplaya->Count);
	for (int i = 0; i < listaplaya->Count; i++) {
		parkingLot^ objparkinglot = listaplaya[i];
		lineasarchivo[i] = Convert::ToString(objparkinglot->getname()) + ";" + Convert::ToString(objparkinglot->getvehicleType()) + ";" + Convert::ToString(objparkinglot->getID()) + ";" + Convert::ToString(objparkinglot->getcapacity()) + ";" + Convert::ToString(objparkinglot->getNreserved()) + ";" + Convert::ToString(objparkinglot->getNinactive());
	}
	File::WriteAllLines("ParkingLot.txt", lineasarchivo);
}

void ParkingLotCtrl::actualizarPlaya(String^ name, char vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite) {
	List<parkingLot^>^ listaplaya = AllPlayas();
	for (int i = 0; i < listaplaya->Count; i++) {
		if (listaplaya[i]->getID() == ID) {
			listaplaya[i]->setname(name);
			listaplaya[i]->setvehicleType(vehicleType);
			listaplaya[i]->setcapacity(capacity);
			listaplaya[i]->setNreserved(N_reserved);
			listaplaya[i]->setNinactive(N_inactive);
			listaplaya[i]->setZone(objZone);
			listaplaya[i]->setListaParkingSite(listaParkingSite);
			break;
		}
	}
	escribirArchivo(listaplaya);

}

void ParkingLotCtrl::eliminarPlaya(String^ ID) {
	List<parkingLot^>^ listaplaya = AllPlayas();
	for (int i = 0; i < listaplaya->Count; i++) {
		if (listaplaya[i]->getID()) {
			listaplaya->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaplaya);
}