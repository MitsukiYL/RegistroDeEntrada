/**
 * Project Untitled
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

using namespace System;

namespace RDEModel {
	public ref class vehicle {
    private:
        String^ fuelType;
        String^ vehicleType;
        int registrationDate;
        String^ plate;
        String^ brand;
        String^ model;
        bool insurance;
    public:
        vehicle();
        vehicle(String^ fuelType, String^ vehicleType, int registrationDate,
            String^ plate, String^ brand, String^ model, bool insurance);

        String^ getFuelType();
        void setFuelType(String^ fuelType);

        String^ getVehicleType();
        void setVehicleType(String^ vehicleType);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);

        String^ getPlate();
        void setPlate(String^ plate);

        String^ getBrand();
        void setBrand(String^ brand);

        String^ getModel();
        void setModel(String^ model);

        bool hasInsurance();
        void setInsurance(bool insurance);
    };
}

#endif //_VEHICLE_H