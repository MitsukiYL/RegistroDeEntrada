/**
 * Project Untitled
 */

#include "pch.h"
#include "door.h"

using namespace RDEModel;

door::door() {};
door::door(String^ doorName, bool active, String^ location, String^ doorType, String^ openingTime, String^ closingTime, sensor^ objSensor, interface^ objInterface, motor^ objMotor){

    this->doorName = doorName;
    this->active = active;
    this->location = location;
    this->doorType = doorType;
    this->openingTime = openingTime;
    this->closingTime = closingTime;
    this->objSensor = objSensor;
    this->objInterface = objInterface;
    this->objMotor = objMotor;
}

String^ door::getDoorName() {
    return this->doorName;
}
bool  door::getActive() {
    return this->active;
}
String^ door::getLocation() {
    return this->location;
}

String^ door::getDoorType(){
    return this->doorType;
}
    
String^ door::getOpeningTime() {
    return this->openingTime;
}
String^ door::getClosingTime() {
    return this->closingTime;
}
sensor^ door::getSensor() {
    return this->objSensor;
}
interface^ door::getInterface() {
    return this->objInterface;
}
motor^ door::getMotor(){
    return this->objMotor;
}

void door::setDoorName(String^ doorName) {
    this->doorName=doorName;
}
void door::setActive(bool active) {
    this->active =active ;
}
void door::setLocation(String^ location) {
    this->location =location ;
}
void door::setDoorType(String^ doorType) {
    this-> doorType=doorType ;
}
void door::setOpeningTime(String^ openingTime) {
    this-> openingTime=openingTime ;
}
void door::setClosingTime(String^ closingTime) {
    this-> closingTime=closingTime ;
}
void door::setSensor(sensor^ objSensor) {
    this->objSensor = objSensor;
}
void door::setInterface(interface^ objInterface) {
    this->objInterface = objInterface;
}
void door::setMotor(motor^ objMotor) {
    this->objMotor = objMotor;
}