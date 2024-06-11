#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class MotorCtrl {
	public:
		MotorCtrl();
		List<motor^>^ buscarMotorAll();
		motor^ buscarMotorxID(int IDb);
		void escribirArchivo(List<motor^>^ listaMotor);
		void agregarNewMotor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID);
		void eliminarMotor(int IDb);
	};
}