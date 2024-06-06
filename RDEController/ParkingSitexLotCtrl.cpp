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
	for (int i = 0; listaPlayas->Count; i++) {

		String^ IDParkingLot = listaPlayas[i]->getID();
		List<parkingSite^>^ ListaSites = objSiteCtrl->BuscarSitexLot(Convert::ToInt32(IDParkingLot));
		int cantParkingSitesxlot = ListaSites->Count;

		ParkingSitexParkingLot^ objEstacionamientosPlaya = gcnew ParkingSitexParkingLot(IDParkingLot, cantParkingSitesxlot);
		listSitexLot->Add(objEstacionamientosPlaya);

	}
	return listSitexLot;
}