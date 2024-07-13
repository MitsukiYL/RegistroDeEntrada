#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

public ref class MotorCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		MotorCtrl();
		void abrirConexion();
		void cerrarConexion();
		List<motor^>^ buscarMotorAll();
		motor^ buscarMotorxID(int IDb);

		void agregarNewMotor(int pin, int RPM, String^ producer, bool active, String^ registrationDate, int power, int ID);
		void actualizarMotorActive(int ID, bool active);
		void eliminarMotor(int IDb);
	};
}