/**
 * Project Untitled
 */


#ifndef _INTERFACE_H
#define _INTERFACE_H

using namespace System;

namespace RDEModel {
    public ref class interface {
    public:
        int pin;
        String^ protocole;
        String^ producer;
        bool active;
        int registrationDate;
    };
}

#endif //_INTERFACE_H