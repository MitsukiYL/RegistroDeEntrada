/**
 * Project Untitled
 */

#include "pch.h"
#include "user.h"

using namespace RDEModel;

user::user() {}

user::user(String^ userType, bool active, int userID, int registrationDate, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) : person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside){
    this->userType = userType;
    this->active = active;
    this->userID = userID;
    this->registrationDate = registrationDate;
}

String^ user::getUserType() {
    return this->userType;
}

void user::setUserType(String^ userType) {
    this->userType = userType;
}


bool user::getActive() {
    return this->active;
}

void user::setActive(bool active) {
    this->active = active;
}

int user::getUserID() {
    return this->userID;
}

void user::setUserID(int userID) {
    this->userID = userID;
}

int user::getRegistrationDate() {
    return this->registrationDate;
}

void user::setRegistrationDate(int registrationDate) {
    this->registrationDate = registrationDate;
}
