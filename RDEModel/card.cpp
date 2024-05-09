
#include "pch.h"
#include "card.h"

using namespace RDEModel;

card::card() {
}
card::card(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active) {

    this->code= code;
    this->expirationDate = expirationDate;
    this->permissionType = permissionType;
    this->ID = ID;
    this->permission = permission;
    this->emissionDate = emissionDate;
    this->registrationDate = registrationDate;
    this->active = active;

}

int card::getcode() {
    return this->code;
}
int card::getexpirationDate() {
    return this->expirationDate;
}
String^ card::getpermissionType() {
    return this->permissionType;
}
int card::getID() {
    return this->ID;
}
bool card::getpermission() {
    return this->permission;
}
int card::getemissionDate() {
    return this->emissionDate;
}
int card::getregistrationDate() {
    return this->registrationDate;
}
bool card::getactive() {
    return this->active;
}

void card::setcode(int code) {
    this->code = code;
}
void card::setexpirationDate(int expirationDate) {
    this->expirationDate = expirationDate;
}
void card::setpermissionType(String^ permissionType) {
    this->permissionType =permissionType ;
}
void card::setID(int ID) {
    this->ID =ID ;
}
void card::setpermission(bool permission) {
    this->permission =permission ;
}
void card::setemissionDate(int emissionDate) {
    this->emissionDate =emissionDate ;
}
void card::setregistrationDate(int registrationDate) {
    this-> registrationDate=registrationDate ;
}
void card::setactive(bool active) {
    this-> active=active ;
}
