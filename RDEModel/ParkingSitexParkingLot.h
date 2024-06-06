#pragma once

namespace RDEModel {

	using namespace System;

	public ref class ParkingSitexParkingLot {
	private:
		String^ IDParkingLot;
		int cantParkingSite;
	public:
		ParkingSitexParkingLot();
		ParkingSitexParkingLot(String^ IDParkingLot, int cantParkingSite);

		String^ getIDParkingLot();
		int getcantParkingSite();

		void setIDParkingLot(String^ IDParkingLot);
		void setcantParkingSite(int cantParkingSite);
	};

}