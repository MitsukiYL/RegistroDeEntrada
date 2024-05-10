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
    
        int getpin();
        void setpin(int pin);

        int getRPM();
        void setRPM(int RPM);

        String^ getproducer();
        void setproducer(String^ producer);

        bool getactive();
        void setactive(bool active);

        int getregistrationDate();
        void setregistrationDate(int registrationDate);

        int getpower();
        void setpower(int power);
    };
}

#endif //_MOTOR_H
