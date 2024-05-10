/**
 * Project Untitled
 */


#ifndef _SENSOR_H
#define _SENSOR_H

using namespace System;

namespace RDEModel {
	public ref class sensor {
    private:
        int pin;
        String^ protocole;
        String^ producer;
        bool active;
        int registrationDate;
        int ID;
        String^ model;
    public:
        sensor();
        sensor(int pin, String^ protocole, String^ producer, bool active,
            int registrationDate, int ID, String^ model);

        int getPin();
        void setPin(int pin);

        String^ getProtocole();
        void setProtocole(String^ protocole);

        String^ getProducer();
        void setProducer(String^ producer);

        bool isActive();
        void setActive(bool active);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);

        int getID();
        void setID(int ID);

        String^ getModel();
        void setModel(String^ model);
    };
}

#endif //_SENSOR_H