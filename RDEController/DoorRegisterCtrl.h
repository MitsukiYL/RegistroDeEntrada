#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class DoorRegisterCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		DoorRegisterCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<doorRegister^>^ buscarDoorRegisterAll();
		List<doorRegister^>^ buscarDoorRegisterxCard(String^ codeCard);
		List<doorRegister^>^ buscarDoorRegisterxDay(String^ daysearch);
		List<doorRegister^>^ buscarDoorRegisterxN(String^ name);

		void agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor);
		void actualizarDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor, door^ objDoor);
	};
}