#include "pch.h"
#include "ParkingSitexParkingLot.h"

using namespace RDEModel;

ParkingSitexParkingLot::ParkingSitexParkingLot() {

}
ParkingSitexParkingLot::ParkingSitexParkingLot(String^ IDParkingLot, int cantParkingSite, int cantInactives,int cantReserveds) {
	this->IDParkingLot= IDParkingLot;
	this->cantParkingSite = cantParkingSite;
	this->cantInactives = cantInactives;
	this->cantReserveds = cantReserveds;
}

String^ ParkingSitexParkingLot::getIDParkingLot() {
	return this->IDParkingLot;
}
int ParkingSitexParkingLot::getcantParkingSite() {
	return this->cantParkingSite;
}

int ParkingSitexParkingLot::getcantInactives() {
	return this->cantInactives;
}
int ParkingSitexParkingLot::getcantReserveds() {
	return this->cantReserveds;
}


void ParkingSitexParkingLot::setIDParkingLot(String^ IDParkingLot) {
	this->IDParkingLot = IDParkingLot;
}
void ParkingSitexParkingLot::setcantParkingSite(int cantParkingSite) {
	this->cantParkingSite = cantParkingSite;
}

void ParkingSitexParkingLot::setcantInactives(int cantInactives) {
	this->cantInactives = cantInactives;
}
void ParkingSitexParkingLot::setcantReserveds(int cantReserveds) {
	this->cantReserveds = cantReserveds;
}