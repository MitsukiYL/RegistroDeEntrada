/**
 * Project Untitled
 */

#include "pch.h"
#include "vehicle.h"

using namespace RDEModel;

vehicle::vehicle() {}

vehicle::vehicle(String^ fuelType, String^ vehicleType, int registrationDate,
                 String^ plate, String^ brand, String^ model, bool insurance) {
    this->fuelType = fuelType;
    this->vehicleType = vehicleType;
    this->registrationDate = registrationDate;
    this->plate = plate;
    this->brand = brand;
    this->model = model;
    this->insurance = insurance;
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

int vehicle::getRegistrationDate() {
    return this->registrationDate;
}

void vehicle::setRegistrationDate(int registrationDate) {
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
