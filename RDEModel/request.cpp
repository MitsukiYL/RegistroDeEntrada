
#include "pch.h"
#include "request.h"

using namespace RDEModel;

request::request() {

}

request::request(int ID, int emissionDate, int responseDate, String^ type, String^ newOccupation, String^ comment, bool active, user^ objUser) {
    this->ID = ID;
    this->emissionDate = emissionDate;
    this->responseDate = responseDate;
    this->type = type;
    this->newOccupation = newOccupation;
    this->comment = comment;
    this->active = active;
    this->objUser = objUser;
}

int request::getID() {
    return ID;
}

void request::setID(int ID) {
    this->ID = ID;
}

int request::getEmissionDate() {
    return emissionDate;
}
void request::setEmissionDate(int emissionDate) {
    this->emissionDate = emissionDate;
}

int request::getResponseDate() {
    return responseDate;
}
void request::setResponseDate(int responseDate) {
    this->responseDate = responseDate;
}

String^ request::getType() {
    return type;
}

void request::setType(String^ type) {
    this->type = type;
}

String^ request::getNewOccupation() {
    return newOccupation;
}

void request::setNewOccupation(String^ newOccupation) {
    this->newOccupation = newOccupation;
}

String^ request::getComment() {
    return comment;
}

void request::setComment(String^ comment) {
    this->comment = comment;
}

bool request::getActive() {
    return active;
}
void request::setActive(bool active) {
    this->active = active;
}

user^ request::getUser() {
    return objUser;
}

void request::setUser(user^ objUser) {
    this->objUser = objUser;
}