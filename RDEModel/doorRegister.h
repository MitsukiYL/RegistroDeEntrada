/**
 * Project Untitled
 */

#include "card.h"
#include "sensor.h"
#include "door.h"
//hola
#ifndef _DOORREGISTER_H
#define _DOORREGISTER_H

using namespace System;

namespace RDEModel {
    public ref class doorRegister {
    private:
        String^ entryTime;
        String^ exitTime;
        bool userIn;
        int code;
        card^ objCard;
        sensor^ objSensor;
        door^ objDoor;

    public:
        doorRegister();
        doorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor);

        String^ getEntryTime();
        void setEntryTime(String^ entryTime);

        String^ getExitTime();
        void setExitTime(String^ exitTime);

        bool getUserIn();
        void setUserIn(bool userIn);

        int getCode();
        void setCode(int code);

        card^ getObjCard();
        void setObjCard(card^ objCard);

        sensor^ getObjSensor();
        void setObjSensor(sensor^ objSensor);

        door^ getObjDoor();
        void setObjDoor(door^ objDoor);
    };

}

#endif //_DOORREGISTER_H
