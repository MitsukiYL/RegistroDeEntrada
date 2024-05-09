/**
 * Project Untitled
 */

#include "pch.h"
#include "door.h"

using namespace RDEModel;

door::door() {};
door::door(String^ doorName, bool active, String^ location, String^ doorType, int openingTime, int closingTime) {

}

String^ door::getdoorName() {
    return this->doorName;
}
bool  door::getactive() {
    return this->active;
}
String^ door::getlocation() {
    return this->location;
}
int  door::getopeningTime() {
    return this->openingTime;
}
int  door::getclosingTime() {
    return this->closingTime;
}

void door::setdoorName(String^ doorName) {
    this->doorName=doorName;
}
void door::setactive(bool active) {
    this->active =active ;
}
void door::setlocation(String^ location) {
    this->location =location ;
}
void door::setdoorType(String^ doorType) {
    this-> doorType=doorType ;
}
void door::setopeningTime(int openingTime) {
    this-> openingTime=openingTime ;
}
void door::setclosingTime(int closingTime) {
    this-> closingTime=closingTime ;
}
