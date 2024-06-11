/**
 * Project Untitled
 */

#include "pch.h"
#include "motor.h"

using namespace RDEModel;

motor::motor() {}

motor::motor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID) {
    this->pin = pin;
    this->RPM = RPM;
    this->producer = producer;
    this->active = active;
    this->registrationDate = registrationDate;
    this->power = power;
    this->ID = ID;
}

int motor::getPin() {
    return this->pin;
}

void motor::setPin(int pin) {
    this->pin = pin;
}

int motor::getRPM() {
    return this->RPM;
}

void motor::setRPM(int RPM) {
    this->RPM = RPM;
}

String^ motor::getProducer() {
    return this->producer;
}

void motor::setProducer(String^ producer) {
    this->producer = producer;
}

bool motor::getActive() {
    return this->active;
}

void motor::setActive(bool active) {
    this->active = active;
}

String^ motor::getRegistrationDate() {
    return this->registrationDate;
}

void motor::setRegistrationDate(String^ registrationDate) {
    this->registrationDate = registrationDate;
}

int motor::getPower() {
    return this->power;
}

void motor::setPower(int power) {
    this->power = power;
}

int motor::getID() {
    return this->ID;
}

void motor::setID(int ID) {
    this->ID = ID;
}