#include "pch.h"
#include "ZonexParkingSite.h"

using namespace RDEModel;

ZonexParkingSite::ZonexParkingSite() {

}
ZonexParkingSite::ZonexParkingSite(int IDZone, int cantParkingSite, int cantInactives, int cantReserveds) {
	this->IDZone = IDZone;
	this->cantParkingSite = cantParkingSite;
	this->cantInactives = cantInactives;
	this->cantReserveds = cantReserveds;
}

int ZonexParkingSite::getIDZone() {
	return this->IDZone;
}
int ZonexParkingSite::getcantParkingSite() {
	return this->cantParkingSite;
}

int ZonexParkingSite::getcantInactives() {
	return this->cantInactives;
}
int ZonexParkingSite::getcantReserveds() {
	return this->cantReserveds;
}


void ZonexParkingSite::setIDZone(int IDParkingLot) {
	this->IDZone = IDZone;
}
void ZonexParkingSite::setcantParkingSite(int cantParkingSite) {
	this->cantParkingSite = cantParkingSite;
}

void ZonexParkingSite::setcantInactives(int cantInactives) {
	this->cantInactives = cantInactives;
}
void ZonexParkingSite::setcantReserveds(int cantReserveds) {
	this->cantReserveds = cantReserveds;
}