
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxDoor {
	private:
		String^ doorName;//nombre de la puerta
		int cantEntradas;//cantidad de veces que entro y salio la persona
		int cantSalidas;

	public:
		doorRegisterxDoor();
		doorRegisterxDoor(String^ doorName, int cantEntradas, int cantSalidas);

		String^ getDoorName();
		void setDoorName(String^ doorName);

		int getCantEntradas();
		void setCantEntradas(int cantEntradas);

		int getCantSalidas();
		void setCantSalidas(int cantSalidas);
	};
}
