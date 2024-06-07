

#include "pch.h"
#include "doorRegisterxCard.h"

using namespace RDEModel;

doorRegisterxCard::doorRegisterxCard() {}

doorRegisterxCard::doorRegisterxCard(int cardID, int cantEntradas, int cantSalidas) {

	this->cardID = cardID;
	this->cantEntradas = cantEntradas;
	this->cantSalidas = cantSalidas;
}

int doorRegisterxCard::getCardID() {
	return this->cardID;
}

void doorRegisterxCard::setCardID(int cardID) {
	this->cardID = cardID;
}

int doorRegisterxCard::getCantEntradas() {
	return this->cantEntradas;
}

void doorRegisterxCard::setCantEntradas(int cantEntradas) {
	this->cantEntradas = cantEntradas;
}

int doorRegisterxCard::getCantSalidas() {
	return this->cantSalidas;
}

void doorRegisterxCard::setCantSalidas(int cantSalidas) {
	this->cantSalidas = cantSalidas;
}



