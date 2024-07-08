/**
 * Project Untitled
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

#include "user.h"

using namespace System;

namespace RDEModel {
	public ref class vehicle {
     /* NOTA:
     * Para los métodos del entregable 2 (Ej: UpdateVehicle, DeletePerson), se deben colocar los atributos en public.
     * Sino el controller no los podrá registrar.
     */
    public:
        int ID;
        String^ fuelType;
        String^ vehicleType;
        String^ registrationDate;
        String^ plate;
        String^ brand;
        String^ model;
        bool insurance;
        user^ objUser;

        vehicle();
        vehicle(int ID, String^ fuelType, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance, user^ objUser);

        int  getID();
        void setID(int ID);

        String^ getFuelType();
        void setFuelType(String^ fuelType);

        String^ getVehicleType();
        void setVehicleType(String^ vehicleType);

        String^ getRegistrationDate();
        void setRegistrationDate(String^ registrationDate);

        String^ getPlate();
        void setPlate(String^ plate);

        String^ getBrand();
        void setBrand(String^ brand);

        String^ getModel();
        void setModel(String^ model);

        bool getInsurance();
        void setInsurance(bool insurance);

        user^ getUser();
        void setUser(user^ objUser);
    };

}

#endif //_VEHICLE_H
