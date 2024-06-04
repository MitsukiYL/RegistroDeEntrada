

#include "pch.h"
#include "doorRegisterxCard.h"

using namespace RDEModel;

doorRegisterxCard::doorRegisterxCard() {}

doorRegisterxCard::doorRegisterxCard(int cardID, int cantRegister) {

	this->cardID = cardID;
	this->cantRegister = cantRegister;
}

int doorRegisterxCard::getCardID() {
	return this->cardID;
}

void doorRegisterxCard::setCardID(int cardID) {
	this->cardID = cardID;
}

int doorRegisterxCard::getCantRegister() {
	return this->cantRegister;
}

void doorRegisterxCard::setCantRegister(int cantRegister) {
	this->cantRegister = cantRegister;
}


