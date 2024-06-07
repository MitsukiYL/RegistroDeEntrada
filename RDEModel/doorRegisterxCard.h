
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxCard {
	private:
		int cardID;//codigo unico de la tarjeta
		int cantEntradas;//cantidad de veces que entro y salio la persona
		int cantSalidas;

	public:
		doorRegisterxCard();
		doorRegisterxCard(int cardID, int cantEntradas, int cantSalidas);

		int getCardID();
		void setCardID(int cardID);

		int getCantEntradas();
		void setCantEntradas(int cantEntradas);

		int getCantSalidas();
		void setCantSalidas(int cantSalidas);
	};
}
