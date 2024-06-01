
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxCard {
	private:
		int codeCard;//codigo unico de la tarjeta
		int codeDoorRegister;//una entrada y salida que una persona tuvo

	public:
		doorRegisterxCard();
		doorRegisterxCard(int codeCard, int codeDoorRegister);

		int getCodeCard();
		void setCodeCard(int codeCard);

		int getCodeDoorRegister();
		void setCodeDoorRegister(int codeDoorRegister);
	};
}
