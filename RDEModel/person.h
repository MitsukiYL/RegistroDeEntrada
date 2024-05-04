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
        int code;
        int DNI;
        String^ mail;
        bool permission;
        char occupation;
        String^ gender;
        int phone;
        int age;
        bool isInside;
        String^ password;
    };
}




#endif //_PERSON_H