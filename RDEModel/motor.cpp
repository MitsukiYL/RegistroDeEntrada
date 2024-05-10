/**
 * Project Untitled
 */

#include "pch.h"
#include "motor.h"

using namespace RDEModel;

motor::motor() {}

motor::motor(int pin, int RPM, String^ producer, bool active, int registrationDate, int power) {
    this->pin = pin;
    this->RPM = RPM;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
    this->power = power;
}

int motor::getpin() {
    return this->pin;
}

void motor::setpin(int pin) {
    this->pin = pin;
}

int motor::getRPM() {
    return this->RPM;
}

void motor::setRPM(int RPM) {
    this->RPM = RPM;
}

String^ motor::getproducer() {
    return this->producer;
}

void motor::setproducer(String^ producer) {
    this->producer = producer;
}

bool motor::getactive() {
    return this->active;
}

void motor::setactive(bool active) {
    this->active = active;
}

int motor::getregistrationDate() {
    return this->registrationDate;
}

void motor::setregistrationDate(int registrationDate) {
    this->registrationDate = registrationDate;
}

int motor::getpower() {
    return this->power;
}

void motor::setpower(int power) {
    this->power = power;
}
