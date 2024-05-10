/**
 * Project Untitled
 */

#include "pch.h"
#include "zone.h"

using namespace RDEModel;

zone::zone() {}

zone::zone(String^ location, String^ name, int openingTime, int closingTime,
           bool active) {
    this->location = location;
    this->name = name;
    this->openingTime = openingTime;
    this->closingTime = closingTime;
    this->active = active;
}

String^ zone::getLocation() {
    return this->location;
}

void zone::setLocation(String^ location) {
    this->location = location;
}

String^ zone::getName() {
    return this->name;
}

void zone::setName(String^ name) {
    this->name = name;
}

int zone::getOpeningTime() {
    return this->openingTime;
}

void zone::setOpeningTime(int openingTime) {
    this->openingTime = openingTime;
}

int zone::getClosingTime() {
    return this->closingTime;
}

void zone::setClosingTime(int closingTime) {
    this->closingTime = closingTime;
}

bool zone::getActive() {
    return this->active;
}

void zone::setActive(bool active) {
    this->active = active;
}
