#include "pch.h"
#include "doorRegisterxDay.h"

using namespace RDEModel;

doorRegisterxDay::doorRegisterxDay() {}

doorRegisterxDay::doorRegisterxDay(String^ day, int cantidad) {
	this->day = day;
	this->cantidad = cantidad;
}

String^ doorRegisterxDay::getDay() {
	return this->day;
}

void doorRegisterxDay::setDay(String^ day) {
	this->day = day;
}

int doorRegisterxDay::getCantidad() {
	return this->cantidad;
}
void doorRegisterxDay::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
