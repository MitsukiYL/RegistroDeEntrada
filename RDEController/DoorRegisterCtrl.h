#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class DoorRegisterCtrl {
	public:
		DoorRegisterCtrl();
		List<doorRegister^>^ buscarDoorRegisterAll();
		List<doorRegister^>^ buscarDoorRegisterxCard(String^ codeCard);
		List<doorRegister^>^ buscarDoorRegisterxDay(String^ daysearch);
		List<doorRegister^>^ buscarDoorRegisterxN(String^ name);
		void escribirArchivo(List<doorRegister^>^ listaDoorRegister);
		void agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor);
		void actualizarDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor);
	};
}