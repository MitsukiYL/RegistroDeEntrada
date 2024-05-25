/**
 * Project Untitled
 */

#include "pch.h"
#include "doorRegister.h"

using namespace RDEModel;

doorRegister::doorRegister() {}

doorRegister::doorRegister(int entryTime, int exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor){
    this->entryTime = entryTime;
    this->exitTime = exitTime;
    this->userIn = userIn;
    this->code = code;
    this->objCard = objCard;
    this->objSensor = objSensor;
}

int doorRegister::getEntryTime() {
    return this->entryTime;
}

void doorRegister::setEntryTime(int entryTime) {
    this->entryTime = entryTime;
}

int doorRegister::getExitTime() {
    return this->exitTime;
}

void doorRegister::setExitTime(int exitTime) {
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