/**
 * Project Untitled
 */


#ifndef _INTERFACE_H
#define _INTERFACE_H

using namespace System;

namespace RDEModel {
    public ref class interface {
    private:
        int pin;
        String^ protocol;
        String^ producer;
        bool active;
        String^ registrationDate;
        int ID;

    public:
        interface();
        interface(int ID, int pin, String^ protocol, String^ producer, bool active, String^ registrationDate);
    
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
    };
}

#endif //_INTERFACE_H
