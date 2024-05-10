/**
 * Project Untitled
 */

#include "pch.h"
#include "user.h"

using namespace RDEModel;

user::user() {}

user::user(String^ userType, String^ name, String^ password, bool active,
           int userID, int registrationDate) {
    this->userType = userType;
    this->name = name;
    this->password = password;
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

String^ user::getName() {
    return this->name;
}

void user::setName(String^ name) {
    this->name = name;
}

String^ user::getPassword() {
    return this->password;
}

void user::setPassword(String^ password) {
    this->password = password;
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
