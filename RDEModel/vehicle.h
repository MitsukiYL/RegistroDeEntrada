/**
 * Project Untitled
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

using namespace System;

namespace RDEModel {
	public ref class vehicle {
     /* NOTA:
     * Para los métodos del entregable 2 (Ej: UpdateVehicle, DeletePerson), se deben colocar los atributos en public.
     * Sino el controller no los podrá registrar.
     */
    public:
        String^ fuelType;
        String^ vehicleType;
        String^ registrationDate;
        String^ plate;
        String^ brand;
        String^ model;
        bool insurance;

        vehicle();
        vehicle(String^ fuelType, String^ vehicleType, String^ registrationDate, String^ plate, String^ brand, String^ model, bool insurance);

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
    };
}

#endif //_VEHICLE_H
