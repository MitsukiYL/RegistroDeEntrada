#include "pch.h"
#include "ParkingSitexParkingLot.h"

using namespace RDEModel;

ParkingSitexParkingLot::ParkingSitexParkingLot() {

}
ParkingSitexParkingLot::ParkingSitexParkingLot(String^ IDParkingLot, int cantParkingSite) {
	this->IDParkingLot= IDParkingLot;
	this->cantParkingSite = cantParkingSite;
}

String^ ParkingSitexParkingLot::getIDParkingLot() {
	return this->IDParkingLot;
}
int ParkingSitexParkingLot::getcantParkingSite() {
	return this->cantParkingSite;
}

void ParkingSitexParkingLot::setIDParkingLot(String^ IDParkingLot) {
	this->IDParkingLot = IDParkingLot;
}
void ParkingSitexParkingLot::setcantParkingSite(int cantParkingSite) {
	this->cantParkingSite = cantParkingSite;
}