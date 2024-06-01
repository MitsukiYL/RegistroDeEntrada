
#include "pch.h"
#include "request.h"

using namespace RDEModel;

request::request() {

}

request::request(int ID, int date, String^ type, String^ newOccupation, String^ comment, user^ objUser) {
    this->ID = ID;
    this->date = date;
    this->type = type;
    this->newOccupation = newOccupation;
    this->comment = comment;
    this->objUser = objUser;
}

int request::getID() {
    return ID;
}

void request::setID(int ID) {
    this->ID = ID;
}

int request::getDate() {
    return date;
}

void request::setDate(int date) {
    this->date = date;
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

user^ request::getUser() {
    return objUser;
}

void request::setUser(user^ objUser) {
    this->objUser = objUser;
}