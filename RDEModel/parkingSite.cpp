/**
 * Project Untitled
 */

#include "pch.h"
#include "parkingSite.h"

using namespace RDEModel;

parkingSite::parkingSite() {}

parkingSite::parkingSite(String^ ID, bool reserved, bool active,bool busy, parkingLot^ objParkingLot) {
    this->ID = ID;
    this->reserved = reserved;
    this->active = active;
    this->busy = busy;
    this->objParkingLot = objParkingLot;
}

String^ parkingSite::getID() {
    return this->ID;
}

void parkingSite::setID(String^ ID) {
    this->ID = ID;
}

bool parkingSite::getReserved() {
    return this->reserved;
}

void parkingSite::setReserved(bool reserved) {
    this->reserved = reserved;
}

bool parkingSite::getActive() {
    return this->active;
}

void parkingSite::setActive(bool active) {
    this->active = active;
}

bool parkingSite::getbusy() {
    return this->busy;
}
void parkingSite::setbusy(bool busy) {
    this->busy = busy;
}

parkingLot^ parkingSite::getParkingLot() {
    return this->objParkingLot;
}
void parkingSite::setParkingLot(parkingLot^ objParkingLot) {
    this->objParkingLot = objParkingLot;
}
