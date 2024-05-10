/**
 * Project Untitled
 */

#include "pch.h"
#include "sensor.h"

using namespace RDEModel;

sensor::sensor() {}

sensor::sensor(int pin, String^ protocol, String^ producer, bool active,
               int registrationDate, int ID, String^ model) {
    this->pin = pin;
    this->protocole = protocol;
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

String^ sensor::getProtocole() {
    return this->protocole;
}

void sensor::setProtocole(String^ protocol) {
    this->protocole = protocol;
}

String^ sensor::getProducer() {
    return this->producer;
}

void sensor::setProducer(String^ producer) {
    this->producer = producer;
}

bool sensor::isActive() {
    return this->active;
}

void sensor::setActive(bool active) {
    this->active = active;
}

int sensor::getRegistrationDate() {
    return this->registrationDate;
}

void sensor::setRegistrationDate(int registrationDate) {
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
