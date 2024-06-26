/**
 * Project Untitled
 */


#ifndef _MOTOR_H
#define _MOTOR_H

using namespace System;

namespace RDEModel {
    public ref class motor {
    private:
        int pin;
        int RPM;
        String^ producer;
        bool active;
        String^ registrationDate;
        int power;
        int ID;

        public:
        motor();
        motor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID);
    
        int getPin();
        void setPin(int pin);

        int getRPM();
        void setRPM(int RPM);

        String^ getProducer();
        void setProducer(String^ producer);

        bool getActive();
        void setActive(bool active);

        String^ getRegistrationDate();
        void setRegistrationDate(String^ registrationDate);

        int getPower();
        void setPower(int power);

        int getID();
        void setID(int ID);
    };
}

#endif //_MOTOR_H
