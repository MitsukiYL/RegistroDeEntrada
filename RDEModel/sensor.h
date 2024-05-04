/**
 * Project Untitled
 */


#ifndef _SENSOR_H
#define _SENSOR_H

using namespace System;

namespace RDEModel {
	public ref class sensor {
    public:
        int pin;
        String^ protocole;
        String^ producer;
        bool active;
        int registrationDate;
        int ID;
        String^ model;
    };
}

#endif //_SENSOR_H