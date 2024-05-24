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
        List<parkingSite^>^ listaParkingSite;

	public:
		parkingLot();
		parkingLot(String^ name, char vehicleType, String^ ID, int capacity, int N_reserved, int N_inactive, zone^ objZone, List<parkingSite^>^ listaParkingSite);
    
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

        zone^ getZone();
        void setZone(zone^ objZone);

        List<parkingSite^>^ getListaParkingSite();
        void setListaParkingSite(List<parkingSite^>^ listaParkingSite);
       
    };
}

#endif //_PARKINGLOT_H
