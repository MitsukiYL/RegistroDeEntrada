/**
 * Project Untitled
 */


#ifndef _PARKINGLOT_H
#define _PARKINGLOT_H

using namespace System;

namespace RDEModel {
	public ref class parkingLot {
    private:
        String^ name;
        char vehicleType;
        String^ ID;
        int capacity;
        int N_reserved;
        int N_inactive;

	public:
		parkingLot();
		parkingLot(String^ name, char vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive);
    
        String^ getname();
        void setname(String^ name);

        char getvehicleType();
        void setvehicleType(char vehicleType);

        String^ getID();
        void setID(String^ ID);

        int getcapacity();
        void setcapacity(int capacity);

        int getNreserved();
        void setNreserved(int N_reserver);

        int getNinactive();
        void setNinactive(int N_inactive);
    };
}

#endif //_PARKINGLOT_H
