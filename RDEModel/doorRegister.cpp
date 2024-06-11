/**
 * Project Untitled
 */

#include "pch.h"
#include "doorRegister.h"

using namespace RDEModel;

doorRegister::doorRegister() {}

doorRegister::doorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor){
    this->entryTime = entryTime;
    this->exitTime = exitTime;
    this->userIn = userIn;
    this->code = code;
    this->objCard = objCard;
    this->objSensor = objSensor;
    this->objDoor = objDoor;
}

String^ doorRegister::getEntryTime() {
    return this->entryTime;
}

void doorRegister::setEntryTime(String^ entryTime) {
    this->entryTime = entryTime;
}

String^ doorRegister::getExitTime() {
    return this->exitTime;
}

void doorRegister::setExitTime(String^ exitTime) {
    this->exitTime = exitTime;
}

bool doorRegister::getUserIn() {
    return this->userIn;
}

void doorRegister::setUserIn(bool userIn) {
    this->userIn = userIn;
}

int doorRegister::getCode() {
    return this->code;
}

void doorRegister::setCode(int code) {
    this->code = code;
}

card^ doorRegister::getObjCard() {
    return this->objCard;
}
void doorRegister::setObjCard(card^ objCard) {
    this->objCard = objCard;
}

sensor^ doorRegister::getObjSensor() {
    return this->objSensor;
}
void doorRegister::setObjSensor(sensor^ objSensor) {
    this->objSensor = objSensor;
}

door^ doorRegister::getObjDoor() {

    return this->objDoor;
}

void doorRegister::setObjDoor(door^ objDoor) {

    this->objDoor = objDoor;
}