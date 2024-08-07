/**
 * Project Untitled
 */

#include "pch.h"
#include "parkingLot.h"

using namespace RDEModel;

parkingLot::parkingLot() {}

parkingLot::parkingLot(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone) {
    this->name = name;
    this->vehicleType = vehicleType;
    this->ID = ID;
    this->capacity = capacity;
    this->N_reserved = N_reserved;
    this->N_inactive = N_inactive;
    this->objZone = objZone;
}

String^ parkingLot::getName() {
    return this->name;
}

void parkingLot::setName(String^ name) {
    this->name = name;
}

String^ parkingLot::getVehicleType() {
    return this->vehicleType;
}

void parkingLot::setVehicleType(String^ vehicleType) {
    this->vehicleType = vehicleType;
}

String^ parkingLot::getID() {
    return this->ID;
}

void parkingLot::setID(String^ ID) {
    this->ID = ID;
}

int parkingLot::getCapacity() {
    return this->capacity;
}

void parkingLot::setCapacity(int capacity) {
    this->capacity = capacity;
}

int parkingLot::getNReserved() {
    return this->N_reserved;
}

void parkingLot::setNReserved(int N_reserved) {
    this->N_reserved = N_reserved;
}

int parkingLot::getNInactive() {
    return this->N_inactive;
}

void parkingLot::setNInactive(int N_inactive) {
    this->N_inactive = N_inactive;
}

zone^ parkingLot::getZone() {
    return this->objZone;
}

void parkingLot::setZone(zone^ objZone) {
    this->objZone = objZone;
}
