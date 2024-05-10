/**
 * Project Untitled
 */

#include "pch.h"
#include "systemRegister.h"

using namespace RDEModel;

systemRegister::systemRegister() {}

systemRegister::systemRegister(int date, String^ operationType, String^ IP) {
    this->date = date;
    this->operationType = operationType;
    this->IP = IP;
}

int systemRegister::getDate() {
    return this->date;
}

void systemRegister::setDate(int date) {
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
