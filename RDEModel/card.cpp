
#include "pch.h"
#include "card.h"

using namespace RDEModel;

card::card() {
}
card::card(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser) {

    this->code= code;
    this->expirationDate = expirationDate;
    this->permissionType = permissionType;
    this->ID = ID;
    this->permission = permission;
    this->emissionDate = emissionDate;
    this->registrationDate = registrationDate;
    this->active = active;
    this->objUser = objUser;
}

String^ card::getCode() {
    return this->code;
}
String^ card::getExpirationDate() {
    return this->expirationDate;
}
String^ card::getPermissionType() {
    return this->permissionType;
}
int card::getID() {
    return this->ID;
}
bool card::getPermission() {
    return this->permission;
}
String^ card::getEmissionDate() {
    return this->emissionDate;
}
String^ card::getRegistrationDate() {
    return this->registrationDate;
}
bool card::getActive() {
    return this->active;
}
user^ card::getObjUser() {
    return this->objUser;
}

void card::setCode(String^ code) {
    this->code = code;
}
void card::setExpirationDate(String^ expirationDate) {
    this->expirationDate = expirationDate;
}
void card::setPermissionType(String^ permissionType) {
    this->permissionType =permissionType;
}
void card::setID(int ID) {
    this->ID =ID;
}
void card::setPermission(bool permission) {
    this->permission =permission;
}
void card::setEmissionDate(String^ emissionDate) {
    this->emissionDate =emissionDate;
}
void card::setRegistrationDate(String^ registrationDate) {
    this-> registrationDate=registrationDate;
}
void card::setActive(bool active) {
    this-> active=active;
}
void card::setObjUser(user^ objUser) {
    this->objUser = objUser;
}