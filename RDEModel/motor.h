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
    };
}

#endif //_MOTOR_H
