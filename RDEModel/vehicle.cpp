/**
 * Project Untitled
 */

#include "pch.h"
#include "vehicle.h"

using namespace RDEModel;

vehicle::vehicle() {}

vehicle::vehicle(int ID, String^ fuelType, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser) {
    this->ID = ID;
    this->fuelType = fuelType;
    this->vehicleType = vehicleType;
    this->registrationDate = registrationDate;
    this->plate = plate;
    this->brand = brand;
    this->model = model;
    this->insurance = insurance;
    this->objUser = objUser;
}
int  vehicle::getID() {
    return this->ID;
}
void vehicle::setID(int ID) {
    this->ID = ID;
}

String^ vehicle::getFuelType() {
    return this->fuelType;
}

void vehicle::setFuelType(String^ fuelType) {
    this->fuelType = fuelType;
}

String^ vehicle::getVehicleType() {
    return this->vehicleType;
}

void vehicle::setVehicleType(String^ vehicleType) {
    this->vehicleType = vehicleType;
}

String^ vehicle::getRegistrationDate() {
    return this->registrationDate;
}

void vehicle::setRegistrationDate(String^ registrationDate) {
    this->registrationDate = registrationDate;
}

String^ vehicle::getPlate() {
    return this->plate;
}

void vehicle::setPlate(String^ plate) {
    this->plate = plate;
}

String^ vehicle::getBrand() {
    return this->brand;
}

void vehicle::setBrand(String^ brand) {
    this->brand = brand;
}

String^ vehicle::getModel() {
    return this->model;
}

void vehicle::setModel(String^ model) {
    this->model = model;
}

bool vehicle::getInsurance() {
    return this->insurance;
}

void vehicle::setInsurance(bool insurance) {
    this->insurance = insurance;
}

user^ vehicle::getUser() {
    return this->objUser;
}
void vehicle::setUser(user^ objUser) {
    this->objUser = objUser;
}
