/**
 * Project Untitled
 */

#include "pch.h"
#include "sensor.h"

using namespace RDEModel;

sensor::sensor() {}

sensor::sensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model) {
    this->pin = pin;
    this->protocol = protocol;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
    this->ID = ID;
    this->model = model;
}

int sensor::getPin() {
    return this->pin;
}

void sensor::setPin(int pin) {
    this->pin = pin;
}

String^ sensor::getProtocol() {
    return this->protocol;
}

void sensor::setProtocol(String^ protocol) {
    this->protocol = protocol;
}

String^ sensor::getProducer() {
    return this->producer;
}

void sensor::setProducer(String^ producer) {
    this->producer = producer;
}

bool sensor::getActive() {
    return this->active;
}

void sensor::setActive(bool active) {
    this->active = active;
}

String^ sensor::getRegistrationDate() {
    return this->registrationDate;
}

void sensor::setRegistrationDate(String^ registrationDate) {
    this->registrationDate = registrationDate;
}

int sensor::getID() {
    return this->ID;
}

void sensor::setID(int ID) {
    this->ID = ID;
}

String^ sensor::getModel() {
    return this->model;
}

void sensor::setModel(String^ model) {
    this->model = model;
}