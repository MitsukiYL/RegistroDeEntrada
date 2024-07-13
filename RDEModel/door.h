/**
 * Project Untitled
 */
#include "sensor.h"
#include "interface.h"
#include "motor.h"

#ifndef _DOOR_H
#define _DOOR_H

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class door {
    		private:
        	String^ doorName;
        	bool active;
        	String^ location;
        	String^ doorType;
            String^ openingTime;
            String^ closingTime;
            sensor^ objSensor;
            interface^ objInterface;
            motor^ objMotor;

		public:
		door();
		door(String^ doorName, bool active, String^ location, String^ doorType, String^ openingTime, String^ closingTime, sensor^ objSensor, interface^ objInterface, motor^ objMotor);

        String^ getDoorName();
        bool  getActive();
        String^ getLocation();
	    String^ getDoorType();
        String^ getOpeningTime();
        String^ getClosingTime();
        sensor^ getSensor();
        interface^ getInterface();
        motor^ getMotor();

        void setDoorName(String^ doorName);
        void setActive(bool active);
        void setLocation(String^ location);
        void setDoorType(String^ doorType);
        void setOpeningTime(String^ openingTime);
        void setClosingTime(String^ closingTime);
        void setSensor(sensor^ objSensor);
        void setInterface(interface^ objInterface);
        void setMotor(motor^ objMotor);
    };
}



#endif //_DOOR_H
