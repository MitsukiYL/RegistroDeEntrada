

#include "pch.h"
#include "doorRegisterxCard.h"

using namespace RDEModel;

doorRegisterxCard::doorRegisterxCard() {}

doorRegisterxCard::doorRegisterxCard(int codeCard, int cantRegister) {

	this->codeCard = codeCard;
	this->cantRegister = cantRegister;
}

int doorRegisterxCard::getCodeCard() {
	return this->codeCard;
}

void doorRegisterxCard::setCodeCard(int codeCard) {
	this->codeCard = codeCard;
}

int doorRegisterxCard::getCantRegister() {
	return this->cantRegister;
}

void doorRegisterxCard::setCantRegister(int cantRegister) {
	this->cantRegister = cantRegister;
}


