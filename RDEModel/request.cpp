
#include "pch.h"
#include "request.h"

using namespace RDEModel;

request::request() {

}

request::request(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted,user^ objUser) {
    this->ID = ID;
    this->emissionDate = emissionDate;
    this->responseDate = responseDate;
    this->type = type;
    this->newOccupation = newOccupation;
    this->comment = comment;
    this->active = active;
    this->accepted = accepted;
    this->objUser = objUser;
}

int request::getID() {
    return this->ID;
}

void request::setID(int ID) {
    this->ID = ID;
}

String^ request::getEmissionDate() {
    return this->emissionDate;
}
void request::setEmissionDate(String^ emissionDate) {
    this->emissionDate = emissionDate;
}

String^ request::getResponseDate() {
    return this->responseDate;
}
void request::setResponseDate(String^ responseDate) {
    this->responseDate = responseDate;
}

String^ request::getType() {
    return this->type;
}

void request::setType(String^ type) {
    this->type = type;
}

String^ request::getNewOccupation() {
    return this->newOccupation;
}

void request::setNewOccupation(String^ newOccupation) {
    this->newOccupation = newOccupation;
}

String^ request::getComment() {
    return this->comment;
}

void request::setComment(String^ comment) {
    this->comment = comment;
}

bool request::getActive() {
    return this->active;
}
void request::setActive(bool active) {
    this->active = active;
}

bool request::getAccepted() {
    return this->accepted;
}

void request::setAccepted(bool accepted) {
    this->accepted = accepted;
}

user^ request::getUser() {
    return this->objUser;
}

void request::setUser(user^ objUser) {
    this->objUser = objUser;
}