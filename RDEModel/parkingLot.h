/**
 * Project Untitled
 */


#ifndef _PARKINGLOT_H
#define _PARKINGLOT_H

#include "zone.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class parkingLot {
    private:
        String^ name;
        String^ vehicleType;
        String^ ID;
        int capacity;
        int N_reserved;
        int N_inactive;
        zone^ objZone;

	public:
		parkingLot();
		parkingLot(String^ name, String^ vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone);
    
        String^ getName();
        void setName(String^ name);

        String^ getVehicleType();
        void setVehicleType(String^ vehicleType);

        String^ getID();
        void setID(String^ ID);

        int getCapacity();
        void setCapacity(int capacity);

        int getNReserved();
        void setNReserved(int N_reserver);

        int getNInactive();
        void setNInactive(int N_inactive);

        zone^ getZone();
        void setZone(zone^ objZone);
       
    };
}

#endif //_PARKINGLOT_H
