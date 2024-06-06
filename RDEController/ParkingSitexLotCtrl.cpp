#include "ParkingSitexLotCtrl.h"
#include "ParkingLotCtrl.h"
#include "ParkingSiteCtrl.h"

using namespace RDEController;

ParkingSitexLotCtrl::ParkingSitexLotCtrl() {}

List<ParkingSitexParkingLot^>^ ParkingSitexLotCtrl::generarReporte() {

	List<ParkingSitexParkingLot^>^ listSitexLot = gcnew List<ParkingSitexParkingLot^>();
	ParkingLotCtrl^ objPlayaCtrl = gcnew ParkingLotCtrl();
	List<parkingLot^>^ listaPlayas = objPlayaCtrl->AllPlayas();
	ParkingSiteCtrl^ objSiteCtrl= gcnew ParkingSiteCtrl();
	for (int i = 0;i< listaPlayas->Count; i++) {

		String^ IDParkingLot = listaPlayas[i]->getID();
		List<parkingSite^>^ ListaSites = objSiteCtrl->BuscarSitexLot(IDParkingLot);
		int cantParkingSitesxlot = ListaSites->Count;
		int cantInactives = 0;
		int cantReserveds = 0;
		for (int h = 0; h < ListaSites->Count; h++) {
			if (ListaSites[h]->getReserved()) { cantReserveds++; }
			else { if (!(ListaSites[h]->getActive())) { cantInactives++; } };
		}

		ParkingSitexParkingLot^ objEstacionamientosPlaya = gcnew ParkingSitexParkingLot(IDParkingLot, cantParkingSitesxlot,cantInactives,cantReserveds);
		listSitexLot->Add(objEstacionamientosPlaya);

	}
	return listSitexLot;
}