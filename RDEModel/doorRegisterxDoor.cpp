

#include "pch.h"
#include "doorRegisterxDoor.h"

using namespace RDEModel;

doorRegisterxDoor::doorRegisterxDoor() {}

doorRegisterxDoor::doorRegisterxDoor(String^ doorName, int cantEntradas, int cantSalidas) {

	this->doorName = doorName;
	this->cantEntradas = cantEntradas;
	this->cantSalidas = cantSalidas;
}

String^ doorRegisterxDoor::getDoorName() {
	return this->doorName;
}

void doorRegisterxDoor::setDoorName(String^ doorName) {
	this->doorName = doorName;
}

int doorRegisterxDoor::getCantEntradas() {
	return this->cantEntradas;
}

void doorRegisterxDoor::setCantEntradas(int cantEntradas) {
	this->cantEntradas = cantEntradas;
}

int doorRegisterxDoor::getCantSalidas() {
	return this->cantSalidas;
}

void doorRegisterxDoor::setCantSalidas(int cantSalidas) {
	this->cantSalidas = cantSalidas;
}


