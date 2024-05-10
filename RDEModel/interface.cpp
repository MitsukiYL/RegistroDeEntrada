/**
 * Project Untitled
 */

#include "pch.h"
#include "interface.h"

using namespace RDEModel;

interface::interface() {}

interface::interface(int pin, String^ protocol, String^ producer, bool active, int registrationDate) {
    this->pin = pin;
    this->protocole = protocol;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
}

int interface::getpin() {
    return this->pin;
}

void interface::setpin(int pin) {
    this->pin = pin;
}

String^ interface::getprotocol() {
    return this->protocole;
}

void interface::setprotocol(String^ protocol) {
    this->protocole = protocol;
}

String^ interface::getproducer() {
    return this->producer;
}

void interface::setproducer(String^ producer) {
    this->producer = producer;
}

bool interface::isactive() {
    return this->active;
}

void interface::setactive(bool active) {
    this->active = active;
}

int interface::getregistrationDate() {
    return this->registrationDate;
}

void interface::setregistrationDate(int registrationDate) {
    this->registrationDate = registrationDate;
}
