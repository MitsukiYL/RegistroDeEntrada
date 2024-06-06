#pragma once

namespace RDEModel {

	using namespace System;

	public ref class ParkingSitexParkingLot {
	private:
		String^ IDParkingLot;
		int cantParkingSite;
		int cantInactives;
		int cantReserveds;
	public:
		ParkingSitexParkingLot();
		ParkingSitexParkingLot(String^ IDParkingLot, int cantParkingSite,int cantInactive,int cantReserveds);

		String^ getIDParkingLot();
		int getcantParkingSite();
		int getcantInactives();
		int getcantReserveds();

		void setIDParkingLot(String^ IDParkingLot);
		void setcantParkingSite(int cantParkingSite);
		void setcantInactives(int cantInactives);
		void setcantReserveds(int cantReserveds);

	};

}