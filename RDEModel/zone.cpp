/**
 * Project Untitled
 */

#include "pch.h"
#include "zone.h"

using namespace RDEModel;

zone::zone() {}

zone::zone(int ID, String^ name, String^ location, int openingTime, int closingTime, bool active, admin^ objAdmin) {
    this->ID = ID;
    this->location = location;
    this->name = name;
    this->openingTime = openingTime;
    this->closingTime = closingTime;
    this->active = active;
    this->objAdmin = objAdmin;
}

int zone::getID() {
    return this->ID;
}
void zone::setID(int ID) {
    this->ID = ID;
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

admin^ zone::getAdmin() {
    return this->objAdmin;
}
void zone::setAdmin(admin^ objAdmin) {
    this->objAdmin = objAdmin;
}
