/**
 * Project Untitled
 */

#include "pch.h"
#include "parkingLot.h"

using namespace RDEModel;

parkingLot::parkingLot() {}

parkingLot::parkingLot(String^ name, char vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite) {
    this->name = name;
    this->vehicleType = vehicleType;
    this->ID = ID;
    this->capacity = capacity;
    this->N_reserved = N_reserved;
    this->N_inactive = N_inactive;
    this->objZone = objZone;
    this->listaParkingSite = listaParkingSite;
}

String^ parkingLot::getname() {
    return this->name;
}

void parkingLot::setname(String^ name) {
    this->name = name;
}

char parkingLot::getvehicleType() {
    return this->vehicleType;
}

void parkingLot::setvehicleType(char vehicleType) {
    this->vehicleType = vehicleType;
}

String^ parkingLot::getID() {
    return this->ID;
}

void parkingLot::setID(String^ ID) {
    this->ID = ID;
}

int parkingLot::getcapacity() {
    return this->capacity;
}

void parkingLot::setcapacity(int capacity) {
    this->capacity = capacity;
}

int parkingLot::getNreserved() {
    return this->N_reserved;
}

void parkingLot::setNreserved(int N_reserved) {
    this->N_reserved = N_reserved;
}

int parkingLot::getNinactive() {
    return this->N_inactive;
}

void parkingLot::setNinactive(int N_inactive) {
    this->N_inactive = N_inactive;
}

zone^ parkingLot::getZone() {
    return this->objZone;
}

void parkingLot::setZone(zone^ objZone) {
    this->objZone = objZone;
}

List<parkingSite^>^ parkingLot::getListaParkingSite() {
    return this->listaParkingSite;
}
void parkingLot::setListaParkingSite(List<parkingSite^>^ listaParkingSite) {
    this->listaParkingSite = listaParkingSite;
}