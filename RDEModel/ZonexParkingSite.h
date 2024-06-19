#pragma once
namespace RDEModel {

	using namespace System;

	public ref class ZonexParkingSite {
	private:
		int IDZone;
		int cantParkingSite;
		int cantInactives;
		int cantReserveds;
	public:
		ZonexParkingSite();
		ZonexParkingSite(int IDZone, int cantParkingSite, int cantInactive, int cantReserveds);

		int getIDZone();
		int getcantParkingSite();
		int getcantInactives();
		int getcantReserveds();

		void setIDZone(int IDZone);
		void setcantParkingSite(int cantParkingSite);
		void setcantInactives(int cantInactives);
		void setcantReserveds(int cantReserveds);

	};

}