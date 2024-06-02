
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxCard {
	private:
		int codeCard;//codigo unico de la tarjeta
		int cantRegister;//cantidad de veces que entro y salio la persona

	public:
		doorRegisterxCard();
		doorRegisterxCard(int codeCard, int cantRegister);

		int getCodeCard();
		void setCodeCard(int codeCard);

		int getCantRegister();
		void setCantRegister(int cantRegister);
	};
}
