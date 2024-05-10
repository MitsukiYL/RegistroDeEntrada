/**
 * Project Untitled
 */

#include "pch.h"
#include "parkingSite.h"

using namespace RDEModel;

parkingSite::parkingSite() {}

parkingSite::parkingSite(String^ ID, bool reserved, bool active) {
    this->ID = ID;
    this->reserved = reserved;
    this->active = active;
}

String^ parkingSite::getID() {
    return this->ID;
}

void parkingSite::setID(String^ ID) {
    this->ID = ID;
}

bool parkingSite::getReserved() {
    return this->reserved;
}

void parkingSite::setReserved(bool reserved) {
    this->reserved = reserved;
}

bool parkingSite::getActive() {
    return this->active;
}

void parkingSite::setActive(bool active) {
    this->active = active;
}
