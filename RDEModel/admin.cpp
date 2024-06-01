#include "pch.h"
#include "admin.h"
//hola
using namespace RDEModel;

admin::admin() {};
admin::admin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) : person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside) {

	this->adminID= adminID;
	this->area = area;
	this->adminType = adminType;
	this->registrationDate = registrationDate;
	this->expirationDate = expirationDate;
	this->contractID = contractID;
	this->listWorkHours = listWorkHours;
}

int admin::getAdminID(){
	return this->adminID;
}
String^ admin::getArea() {
	return this->area;
}
String^ admin::getAdminType() {
	return this->adminType;
}

int admin::getRegistrationDate() {
	return this->registrationDate;
}
int admin::getExpirationDate() {
	return this->expirationDate;
}
int admin::getContractID() {
	return this->contractID;
}
List<workHours^>^ admin::getListWorkHours() {
	return this->listWorkHours;
}

void admin::setAdminID(int adminID) {
	this->adminID=adminID;
}

void admin::setArea(String^ area) {
	this->area =area;
}
void admin::setAdminType(String^ adminType) {
	this->adminType =adminType;
}

void admin::setRegistrationDate(int registrationDate) {
	this->registrationDate =registrationDate;
}
void admin::setExpirationDate(int expirationDate) {
	this->expirationDate =expirationDate;
}
void admin::setContractID(int contractID) {
	this-> contractID=contractID;
}
void admin::setListWorkHours(List<workHours^>^ listWorkHours) {
	this->listWorkHours=listWorkHours;
}