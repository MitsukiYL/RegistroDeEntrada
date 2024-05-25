#include "pch.h"
#include "admin.h"

using namespace RDEModel;

admin::admin() {};
admin::admin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours) {

	this->adminID= adminID;
	this->area = area;
	this->adminType = adminType;
	this->name = name;
	this->password = password;
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
String^ admin::getName() {
	return this->name;
}
String^ admin::getPassword() {
	return this->password;
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
void admin::setName(String^ name) {
	this-> name=name;
}
void admin::setPassword(String^ password) {
	this-> password=password;
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