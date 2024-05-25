/**
 * Project Untitled
 */

#include "pch.h"
#include "interface.h"

using namespace RDEModel;

interface::interface() {}

interface::interface(int pin, String^ protocol, String^ producer, bool active, int registrationDate) {
    this->pin = pin;
    this->protocol = protocol;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
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

int interface::getRegistrationDate() {
    return this->registrationDate;
}

void interface::setRegistrationDate(int registrationDate) {
    this->registrationDate = registrationDate;
}
