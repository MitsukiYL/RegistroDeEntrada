/**
 * Project Untitled
 */


#ifndef _PARKINGSITE_H
#define _PARKINGSITE_H

#include "parkingLot.h"

using namespace System;

namespace RDEModel {
	public ref class parkingSite {
    private:

        String^ ID;
        bool reserved;
        bool active;
        bool busy;
        parkingLot^ objParkingLot;

    public:

        parkingSite();
        parkingSite(String^ ID, bool reserved, bool active,bool busy, parkingLot^ objParkingLot);

        String^ getID();
        void setID(String^ ID);

        bool getReserved();
        void setReserved(bool reserved);

        bool getbusy();
        void setbusy(bool busy);

        bool getActive();
        void setActive(bool active);

        parkingLot^ getParkingLot();
        void setParkingLot(parkingLot^ objParkingLot);
    };
}

#endif //_PARKINGSITE_H
