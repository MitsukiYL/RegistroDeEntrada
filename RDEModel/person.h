/**
 * Project Untitled
 */



#ifndef _PERSON_H
#define _PERSON_H

using namespace System;

namespace RDEModel {
    public ref class person {
    public:
        String^ name;
        String^ password;
        int code;
        int DNI;
        String^ mail;
        bool permission;
        String^ occupation;
        String^ gender;
        String^ phone;
        int age;
        bool isInside;
    
        person();
        person(int DNI, String^ name, int code,  String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);

        String^ getName();
        void setName(String^ name);

        String^ getPassword();
        void setPassword(String^ password);

        int getCode();
        void setCode(int code);

        int getDNI();
        void setDNI(int DNI);

        String^ getMail();
        void setMail(String^ mail);

        bool getPermission();
        void setPermission(bool permission);

        String^ getOccupation();
        void setOccupation(String^ occupation);

        String^ getGender();
        void setGender(String^ gender);

        String^ getPhone();
        void setPhone(String^ phone);

        int getAge();
        void setAge(int age);

        bool getisInside();
        void setisInside(bool isInside);
    };
}




#endif //_PERSON_H
