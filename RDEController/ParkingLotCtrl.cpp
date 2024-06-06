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

		String^ ID = datos[0];
		String^ vehicleType = datos[1];
		String^ name = datos[2];
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

 List <parkingLot^>^ ParkingLotCtrl::PlayasxZona(int IDzone) {
	 List<parkingLot^>^ listaplaya = gcnew List<parkingLot^>();
	 array<String^>^ lineas = File::ReadAllLines("ParkingLot.txt");
	 String^ separadores = ";"; /*aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	 for each (String ^ lineapeluche in lineas) {
		 /*voy a separar los datos de una linea en sub strings*/
		 array<String^>^ datos = lineapeluche->Split(separadores->ToCharArray());

		 String^ ID = datos[0];
		 String^ vehicleType = datos[1];
		 String^ name = datos[2];
		 int capacity = Convert::ToInt32(datos[3]);
		 int N_reserved = Convert::ToInt32(datos[4]);
		 int N_inactive = Convert::ToInt32(datos[5]);
		 int zoneID = Convert::ToInt32(datos[6]);

		 ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		 zone^ objZone = objZoneCtrl->buscarZonaxID(zoneID);

		 ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		 List<parkingSite^>^ listaParkingSite = objParkingSiteCtrl->AllEstacionamientos();

		 if (objZone->getID() == IDzone) {
			 parkingLot^ objplaya = gcnew parkingLot(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone, listaParkingSite);
			 listaplaya->Add(objplaya);
		 }
		 
	 }
	 return listaplaya;
 }


 List <parkingLot^>^ ParkingLotCtrl::AllPlayas() {
	 List<parkingLot^>^ listaplaya = gcnew List<parkingLot^>();
	 array<String^>^ lineas = File::ReadAllLines("ParkingLot.txt");
	 String^ separadores = ";"; /*aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	 for each (String ^ lineaplaya in lineas) {
		 /*voy a separar los datos de una linea en sub strings*/
		 array<String^>^ datos = lineaplaya->Split(separadores->ToCharArray());

		 String^ ID = datos[0];
		 String^ vehicleType = datos[1];
		 String^ name = datos[2];
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
	 }
	 return listaplaya;
 }


void ParkingLotCtrl::agregarPlaya(String ^ name, String^ vehicleType, String ^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite) {
	List<parkingLot^>^ listaplaya = AllPlayas();	
	String^ newcode = Convert::ToString(objZone->getID()) + Convert::ToString(Convert::ToChar('A' + PlayasxZona(objZone->getID())->Count));///problemaaaaaa
	parkingLot^ PlayaNueva = gcnew parkingLot(name, vehicleType, newcode, capacity, N_reserved, N_inactive, objZone, listaParkingSite);
	listaplaya->Add(PlayaNueva);	
	escribirArchivo(listaplaya);
}


void ParkingLotCtrl::escribirArchivo(List <parkingLot^>^ listaplaya) {
	array<String^>^ lineasarchivo = gcnew array<String^>(listaplaya->Count);
	for (int i = 0; i < listaplaya->Count; i++) {
		parkingLot^ objparkinglot = listaplaya[i];
		lineasarchivo[i] = objparkinglot->getID() + ";" + objparkinglot->getVehicleType() + ";" + Convert::ToString(objparkinglot->getName()) + ";" + Convert::ToString(objparkinglot->getCapacity()) + ";" + Convert::ToString(objparkinglot->getNReserved()) + ";" + Convert::ToString(objparkinglot->getNInactive()) + ";" + Convert::ToString(objparkinglot->getZone()->getID());
	}
	File::WriteAllLines("ParkingLot.txt", lineasarchivo);
}

void ParkingLotCtrl::actualizarPlaya(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite) {
	List<parkingLot^>^ listaplaya = AllPlayas();
	for (int i = 0; i < listaplaya->Count; i++) {
		if (listaplaya[i]->getID() == ID) {
			listaplaya[i]->setName(name);
			listaplaya[i]->setVehicleType(vehicleType);
			listaplaya[i]->setCapacity(capacity);
			listaplaya[i]->setNReserved(N_reserved);
			listaplaya[i]->setNInactive(N_inactive);
			listaplaya[i]->setZone(objZone);
			listaplaya[i]->setListParkingSite(listaParkingSite);
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