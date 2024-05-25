/**
 * Project Untitled
 */


#ifndef _PARKINGLOT_H
#define _PARKINGLOT_H

#include "zone.h"
#include "parkingSite.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class parkingLot {
    private:
        String^ name;
        char vehicleType;
        String^ ID;
        int capacity;
        int N_reserved;
        int N_inactive;
        zone^ objZone;
        List<parkingSite^>^ listParkingSite;

	public:
		parkingLot();
		parkingLot(String^ name, char vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listParkingSite);
    
        String^ getName();
        void setName(String^ name);

        char getVehicleType();
        void setVehicleType(char vehicleType);

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

        List<parkingSite^>^ getListParkingSite();
        void setListParkingSite(List<parkingSite^>^ listaParkingSite);
       
    };
}

#endif //_PARKINGLOT_H
