#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class SensorCtrl {
	public:
		SensorCtrl();
		List<sensor^>^ buscarSensorAll();
		sensor^ buscarSensorxID(int IDb);
		void escribirArchivo(List<sensor^>^ listaSensor);
		void agregarNewSensor(int pin, String^ protocole, String^ producer, bool active, String^ registrationDate, int ID, String^ model, List<card^>^ listCard);
		void actualizarSensor(int pin, String^ protocole, String^ producer, bool active, String^ registrationDate, int ID, String^ model, List<card^>^ listCard);
		void eliminarSensor(int IDb);
	};
}