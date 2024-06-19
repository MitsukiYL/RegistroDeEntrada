#include "ZonexParkingSiteCtrl.h"
#include "ParkingLotCtrl.h"
#include "ParkingSiteCtrl.h"
#include "ZoneCtrl.h"

using namespace RDEController;

ZonexParkingSiteCtrl::ZonexParkingSiteCtrl() {}

List<ZonexParkingSite^>^ ZonexParkingSiteCtrl::generarReporte() {

	List<ZonexParkingSite^>^ listZonexSite = gcnew List<ZonexParkingSite^>();
	ZoneCtrl^ objZonaCtrl = gcnew ZoneCtrl();
	ParkingLotCtrl^ objPlayaCtrl = gcnew ParkingLotCtrl();
	ParkingSiteCtrl^ objSiteCtrl = gcnew ParkingSiteCtrl();


	List<zone^>^ listaZonas = objZonaCtrl->buscarZoneAll();
	
	for (int i = 0; i < listaZonas->Count; i++) {

		int IDZone = listaZonas[i]->getID();
		List<parkingLot^>^  listaPlayas = objPlayaCtrl->PlayasxZona(IDZone);

		int cantParkingSitesxzone= 0;
		int cantInactives = 0;
		int cantReserveds = 0;

		for (int j = 0; j < listaPlayas->Count; j++) {

			String^ IDParkingLot = listaPlayas[j]->getID();
			List<parkingSite^>^ ListaSites = objSiteCtrl->BuscarSitexLot(IDParkingLot);
			
			cantParkingSitesxzone = cantParkingSitesxzone + ListaSites->Count;
			
			for (int h = 0; h < ListaSites->Count; h++) {
				if (ListaSites[h]->getReserved()) { cantReserveds++; }
				else { if (!(ListaSites[h]->getActive())) { cantInactives++; } };
			}
		}

		ZonexParkingSite^ objZonaxEstacinamineto = gcnew ZonexParkingSite(IDZone, cantParkingSitesxzone, cantInactives, cantReserveds);
		listZonexSite->Add(objZonaxEstacinamineto);

	}
	return listZonexSite;
}