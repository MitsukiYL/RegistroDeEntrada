#include "pch.h"
#include "admin.h"
//hola
using namespace RDEModel;

admin::admin() {};
admin::admin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, List<workHours^>^ listWorkHours, person^ objPerson){
	this->adminID= adminID;
	this->area = area;
	this->adminType = adminType;
	this->registrationDate = registrationDate;
	this->expirationDate = expirationDate;
	this->contractID = contractID;
	this->listWorkHours = listWorkHours;
	this->objPerson = objPerson;
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

String^ admin::getRegistrationDate() {
	return this->registrationDate;
}
String^ admin::getExpirationDate() {
	return this->expirationDate;
}
int admin::getContractID() {
	return this->contractID;
}
List<workHours^>^ admin::getListWorkHours() {
	return this->listWorkHours;
}
person^ admin::getPerson() {
	return this->objPerson;
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

void admin::setRegistrationDate(String^ registrationDate) {
	this->registrationDate =registrationDate;
}
void admin::setExpirationDate(String^ expirationDate) {
	this->expirationDate =expirationDate;
}
void admin::setContractID(int contractID) {
	this-> contractID=contractID;
}
void admin::setListWorkHours(List<workHours^>^ listWorkHours) {
	this->listWorkHours=listWorkHours;
}
void admin::setPerson(person^ objPerson) {
	this->objPerson = objPerson;
}