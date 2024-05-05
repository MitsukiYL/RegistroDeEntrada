/**
 * Project Untitled
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

using namespace System;

namespace RDEModel {
	public ref class vehicle {
    public:
        String^ fuelType;
        String^ vehicleType;
        int registrationDate;
        String^ plate;
        String^ brand;
        String^ model;
        bool insurance;
    };
}

#endif //_VEHICLE_H