#include "pch.h"
#include "admin.h"

using namespace RDEModel;

admin::admin() {};
admin::admin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID) {

	this->adminID= adminID;
	this->area = area;
	this->adminType = adminType;
	this->name = name;
	this->password = password;
	this->registrationDate = registrationDate;
	this->expirationDate = expirationDate;
	this->contractID = contractID;

}

int admin::getadminID(){
	return this->adminID;
}
String^ admin::getarea() {
	return this->area;
}
String^ admin::getadminType() {
	return this->adminType;
}
String^ admin::getname() {
	return this->name;
}
String^ admin::getpassword() {
	return this->password;
}
int admin::getregistrationDate() {
	return this->registrationDate;
}
int admin::getexpirationDate() {
	return this->expirationDate;
}
int admin::getcontractID() {
	return this->contractID;
}

void admin::setadminID(int adminID) {
	this->adminID=adminID;
}

void admin::setarea(String^ area) {
	this->area =area ;
}
void admin::setadminType(String^ adminType) {
	this->adminType =adminType;
}
void admin::setname(String^ name) {
	this-> name=name ;
}
void admin::setpassword(String^ password) {
	this-> password=password ;
}
void admin::setregistrationDate(int registrationDate) {
	this->registrationDate =registrationDate ;
}
void admin::setexpirationDate(int expirationDate) {
	this->expirationDate =expirationDate ;
}
void admin::setcontractID(int contractID) {
	this-> contractID=contractID ;
}