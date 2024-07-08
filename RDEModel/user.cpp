/**
 * Project Untitled
 */

#include "pch.h"
#include "user.h"

using namespace RDEModel;
using namespace System::Collections::Generic;

user::user() {}

user::user(int userID, String^ userType, bool active, String^ registrationDate, parkingSite^ objParkingSite, person^ objPerson){
    this->userType = userType;
    this->active = active;
    this->userID = userID;
    this->registrationDate = registrationDate;
    this->objParkingSite = objParkingSite;
    this->objPerson = objPerson;

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

String^ user::getRegistrationDate() {
    return this->registrationDate;
}

void user::setRegistrationDate(String^ registrationDate) {
    this->registrationDate = registrationDate;
}

parkingSite^ user::getParkingSite() {
    return this->objParkingSite;
}

void user::setParkingSite(parkingSite^ objParkingSite) {
    this->objParkingSite = objParkingSite;
}

person^ user::getPerson() {
    return this->objPerson;
}

void user::setPerson(person^ objPerson) {
    this->objPerson = objPerson;
}
