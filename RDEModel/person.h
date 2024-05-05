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
        char occupation;
        String^ gender;
        String^ phone;
        int age;
        bool isInside;
        
    };
}




#endif //_PERSON_H