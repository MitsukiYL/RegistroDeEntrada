

#include "pch.h"
#include "doorRegisterxDoor.h"

using namespace RDEModel;

doorRegisterxDoor::doorRegisterxDoor() {}

doorRegisterxDoor::doorRegisterxDoor(String^ doorName, int cantVisitas) {

	this->doorName = doorName;
	this->cantVisitas = cantVisitas;
}

String^ doorRegisterxDoor::getDoorName() {
	return this->doorName;
}

void doorRegisterxDoor::setDoorName(String^ doorName) {
	this->doorName = doorName;
}

int doorRegisterxDoor::getCantVisitas() {
	return this->cantVisitas;
}

void doorRegisterxDoor::setCantVisitas(int cantVisitas) {
	this->cantVisitas = cantVisitas;
}

