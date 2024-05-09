/**
 * Project Untitled
 */


#ifndef _DOOR_H
#define _DOOR_H

using namespace System;

namespace RDEModel {
	public ref class door {
    		private:
        	String^ doorName;
        	bool active;
        	String^ location;
        	String^ doorType;
        	int openingTime;
        	int closingTime;

		public:
		door();
		door(String^ doorName, bool active, String^ location, String^ doorType, int openingTime, int closingTime);

        String^ getdoorName();
        bool  getactive();
        String^ getlocation();
        int  getopeningTime();
        int  getclosingTime();

        void setdoorName(String^ doorName);
        void setactive(bool active);
        void setlocation(String^ location);
        void setdoorType(String^ doorType);
        void setopeningTime(int openingTime);
        void setclosingTime(int closingTime);

    };
}



#endif //_DOOR_H
