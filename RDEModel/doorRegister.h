/**
 * Project Untitled
 */

#include "card.h"
#include "sensor.h"
//hola
#ifndef _DOORREGISTER_H
#define _DOORREGISTER_H

using namespace System;

namespace RDEModel {
    public ref class doorRegister {
    private:
        int entryTime;
        int exitTime;
        bool userIn;
        int code;
        card^ objCard;
        sensor^ objSensor;

    public:
        doorRegister();
        doorRegister(int entryTime, int exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor);

        int getEntryTime();
        void setEntryTime(int entryTime);

        int getExitTime();
        void setExitTime(int exitTime);

        bool getUserIn();
        void setUserIn(bool userIn);

        int getCode();
        void setCode(int code);

        card^ getObjCard();
        void setObjCard(card^ objCard);

        sensor^ getObjSensor();
        void setObjSensor(sensor^ objSensor);
    };

}

#endif //_DOORREGISTER_H
