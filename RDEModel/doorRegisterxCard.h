
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxCard {
	private:
		int cardID;//codigo unico de la tarjeta
		int cantRegister;//cantidad de veces que entro y salio la persona

	public:
		doorRegisterxCard();
		doorRegisterxCard(int cardID, int cantRegister);

		int getCardID();
		void setCardID(int cardID);

		int getCantRegister();
		void setCantRegister(int cantRegister);
	};
}
