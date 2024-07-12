/**
 * Project Untitled
 */

#include "pch.h"
#include "person.h"

using namespace RDEModel;

person::person() {}

person::person(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age) {
    this->name = name;
    this->password = password;
    this->code = code;
    this->DNI = DNI;
    this->mail = mail;
    this->permission = permission;
    this->occupation = occupation;
    this->gender = gender;
    this->phone = phone;
    this->age = age;
}

String^ person::getName() {
    return this->name;
}

void person::setName(String^ name) {
    this->name = name;
}

String^ person::getPassword() {
    return this->password;
}

void person::setPassword(String^ password) {
    this->password = password;
}

int person::getCode() {
    return this->code;
}

void person::setCode(int code) {
    this->code = code;
}

int person::getDNI() {
    return this->DNI;
}

void person::setDNI(int DNI) {
    this->DNI = DNI;
}

String^ person::getMail() {
    return this->mail;
}

void person::setMail(String^ mail) {
    this->mail = mail;
}

bool person::getPermission() {
    return this->permission;
}

void person::setPermission(bool permission) {
    this->permission = permission;
}

String^ person::getOccupation() {
    return this->occupation;
}

void person::setOccupation(String^ occupation) {
    this->occupation = occupation;
}

String^ person::getGender() {
    return this->gender;
}

void person::setGender(String^ gender) {
    this->gender = gender;
}

String^ person::getPhone() {
    return this->phone;
}

void person::setPhone(String^ phone) {
    this->phone = phone;
}

int person::getAge() {
    return this->age;
}

void person::setAge(int age) {
    this->age = age;
}

