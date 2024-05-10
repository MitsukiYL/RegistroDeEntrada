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
        String^ protocole;
        String^ producer;
        bool active;
        int registrationDate;

    public:
        interface();
        interface(int pin, String^ protocole, String^ producer, bool active, int registrationDate);  
    
        int getpin();
        void setpin(int pin);

        String^ getprotocol();
        void setprotocol(String^ protocol);

        String^ getproducer();
        void setproducer(String^ producer);

        bool getactive();
        void setactive(bool active);

        int getregistrationDate();
        void setregistrationDate(int registrationDate);
    };
}

#endif //_INTERFACE_H
