
#include "pch.h"
#include "card.h"

using namespace RDEModel;

card::card() {
}
card::card(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser) {

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

int card::getCode() {
    return this->code;
}
int card::getExpirationDate() {
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
int card::getEmissionDate() {
    return this->emissionDate;
}
int card::getRegistrationDate() {
    return this->registrationDate;
}
bool card::getActive() {
    return this->active;
}
user^ card::getObjUser() {
    return this->objUser;
}

void card::setCode(int code) {
    this->code = code;
}
void card::setExpirationDate(int expirationDate) {
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
void card::setEmissionDate(int emissionDate) {
    this->emissionDate =emissionDate;
}
void card::setRegistrationDate(int registrationDate) {
    this-> registrationDate=registrationDate;
}
void card::setActive(bool active) {
    this-> active=active;
}
void card::setObjUser(user^ objUser) {
    this->objUser = objUser;
}