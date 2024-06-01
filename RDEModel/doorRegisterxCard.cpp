

#include "pch.h"
#include "doorRegisterxCard.h"

using namespace RDEModel;

doorRegisterxCard::doorRegisterxCard() {}

doorRegisterxCard::doorRegisterxCard(int codeCard, int codeDoorRegister) {

	this->codeCard = codeCard;
	this->codeDoorRegister = codeDoorRegister;
}

int doorRegisterxCard::getCodeCard() {
	return this->codeCard;
}

void doorRegisterxCard::setCodeCard(int codeCard) {
	this->codeCard = codeCard;
}

int doorRegisterxCard::getCodeDoorRegister() {
	return this->codeDoorRegister;
}

void doorRegisterxCard::setCodeDoorRegister(int codeDoorRegister) {
	this->codeDoorRegister = codeDoorRegister;
}


