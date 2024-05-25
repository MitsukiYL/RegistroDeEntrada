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
        int registrationDate;
        int power;

        public:
        motor();
        motor(int pin, int RPM, String^ producer, bool active, int registrationDate, int power);
    
        int getPin();
        void setPin(int pin);

        int getRPM();
        void setRPM(int RPM);

        String^ getProducer();
        void setProducer(String^ producer);

        bool getActive();
        void setActive(bool active);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);

        int getPower();
        void setPower(int power);
    };
}

#endif //_MOTOR_H
