/**
 * Project Untitled
 */

#include "pch.h"
#include "door.h"

using namespace RDEModel;

door::door() {};
door::door(String^ doorName, bool active, String^ location, String^ doorType, String^ openingTime, String^ closingTime, List<sensor^>^ listSensor, List<interface^>^ listInterface, List<motor^>^ listMotor){

    this->doorName = doorName;
    this->active = active;
    this->location = location;
    this->doorType = doorType;
    this->openingTime = openingTime;
    this->closingTime = closingTime;
    this->listSensor = listSensor;
    this->listInterface = listInterface;
    this->listMotor = listMotor;
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
List<sensor^>^ door::getListSensor() {
    return this->listSensor;
}
List<interface^>^ door::getListInterface() {
    return this->listInterface;
}
List<motor^>^ door::getListMotor() {
    return this->listMotor;
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
void door::setListSensor(List<sensor^>^ listSensor) {
    this->listSensor = listSensor;
}
void door::setListInterface(List<interface^>^ listInterface) {
    this->listInterface = listInterface;
}
void door::setListMotor(List<motor^>^ listMotor) {
    this->listMotor = listMotor;
}