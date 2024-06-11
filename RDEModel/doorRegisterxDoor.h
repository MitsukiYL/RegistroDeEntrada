
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxDoor {
	private:
		String^ doorName;//nombre de la puerta
		int cantVisitas;//cantidad de veces que entro y salio la persona

	public:
		doorRegisterxDoor();
		doorRegisterxDoor(String^ doorName, int cantVisitas);

		String^ getDoorName();
		void setDoorName(String^ doorName);

		int getCantVisitas();
		void setCantVisitas(int cantVisitas);
	};
}
