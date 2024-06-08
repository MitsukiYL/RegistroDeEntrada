/**
 * Project Untitled
 */

#include "pch.h"
#include "systemRegister.h"

using namespace RDEModel;

systemRegister::systemRegister() {}

systemRegister::systemRegister(String^ date, String^ operationType, String^ IP, admin^ objAdmin) {
    this->date = date;
    this->operationType = operationType;
    this->IP = IP;
    this->objAdmin = objAdmin;
}

String^ systemRegister::getDate() {
    return this->date;
}

void systemRegister::setDate(String^ date) {
    this->date = date;
}

String^ systemRegister::getOperationType() {
    return this->operationType;
}

void systemRegister::setOperationType(String^ operationType) {
    this->operationType = operationType;
}

String^ systemRegister::getIP() {
    return this->IP;
}

void systemRegister::setIP(String^ IP) {
    this->IP = IP;
}

admin^ systemRegister::getObjAdmin() {
    return this->objAdmin;
}
void systemRegister::setObjAdmin(admin^ objAdmin) {
    this->objAdmin;
}