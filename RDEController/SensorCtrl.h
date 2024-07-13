#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class SensorCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		SensorCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<sensor^>^ buscarSensorAll();
		sensor^ buscarSensorxID(int IDb);

		void agregarNewSensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model);
		void actualizarSensor(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID, String^ model);
		void eliminarSensor(int IDb);
	};
}