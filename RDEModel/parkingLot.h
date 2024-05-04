/**
 * Project Untitled
 */


#ifndef _PARKINGLOT_H
#define _PARKINGLOT_H

using namespace System;

namespace RDEModel {
	public ref class parkingLot {
    public:
        String^ name;
        char vehicleType;
        String^ ID;
        int capacity;
        int N_reserved;
        int N_inactive;
    };
}

#endif //_PARKINGLOT_H