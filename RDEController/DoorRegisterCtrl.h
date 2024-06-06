#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class DoorRegisterCtrl {
	public:
		DoorRegisterCtrl();
		List<doorRegister^>^ buscarDoorRegisterAll();
		List<doorRegister^>^ buscarDoorRegisterxCard(int codeCard);
		List<doorRegister^>^ buscarDoorRegisterxDay(String^ daysearch);
		void escribirArchivo(List<doorRegister^>^ listaDoorRegister);
		void agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor);
	};
}