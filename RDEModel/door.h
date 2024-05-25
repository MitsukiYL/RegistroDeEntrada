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
        	int openingTime;
        	int closingTime;
            List<sensor^>^ listSensor;
            List<interface^>^ listInterface;
            List<motor^>^ listMotor;

		public:
		door();
		door(String^ doorName, bool active, String^ location, String^ doorType, int openingTime, int closingTime, List<sensor^>^ listSensor, List<interface^>^ listInterface, List<motor^>^ listMotor);

        String^ getDoorName();
        bool  getActive();
        String^ getLocation();
	    String^ getDoorType();
        int  getOpeningTime();
        int  getClosingTime();
        List<sensor^>^ getListSensor();
        List<interface^>^ getListInterface();
        List<motor^>^ getListMotor();

        void setDoorName(String^ doorName);
        void setActive(bool active);
        void setLocation(String^ location);
        void setDoorType(String^ doorType);
        void setOpeningTime(int openingTime);
        void setClosingTime(int closingTime);
        void setListSensor(List<sensor^>^ listSensor);
        void setListInterface(List<interface^>^ listInterface);
        void setListMotor(List<motor^>^ listMotor);
    };
}



#endif //_DOOR_H
