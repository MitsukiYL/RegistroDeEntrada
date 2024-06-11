/**
 * Project Untitled
 */

#include "pch.h"
#include "interface.h"

using namespace RDEModel;

interface::interface() {}

interface::interface(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID) {
    this->pin = pin;
    this->protocol = protocol;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
    this->ID = ID;
}

int interface::getPin() {
    return this->pin;
}

void interface::setPin(int pin) {
    this->pin = pin;
}

String^ interface::getProtocol() {
    return this->protocol;
}

void interface::setProtocol(String^ protocol) {
    this->protocol = protocol;
}

String^ interface::getProducer() {
    return this->producer;
}

void interface::setProducer(String^ producer) {
    this->producer = producer;
}

bool interface::getActive() {
    return this->active;
}

void interface::setActive(bool active) {
    this->active = active;
}

String^ interface::getRegistrationDate() {
    return this->registrationDate;
}

void interface::setRegistrationDate(String^ registrationDate) {
    this->registrationDate = registrationDate;
}

int interface::getID() {
    return this->ID;
}

void interface::setID(int ID) {
    this->ID = ID;
}