/**
 * Project Untitled
 */
#include "card.h"

#ifndef _SENSOR_H
#define _SENSOR_H

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class sensor {
    private:
        int pin;
        String^ protocol;
        String^ producer;
        bool active;
        String^ registrationDate;
        int ID;
        String^ model;

    public:
        sensor();
        sensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model);

        int getPin();
        void setPin(int pin);

        String^ getProtocol();
        void setProtocol(String^ protocol);

        String^ getProducer();
        void setProducer(String^ producer);

        bool getActive();
        void setActive(bool active);

        String^ getRegistrationDate();
        void setRegistrationDate(String^ registrationDate);

        int getID();
        void setID(int ID);

        String^ getModel();
        void setModel(String^ model);
    };
}

#endif //_SENSOR_H