#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class InterfaceCtrl {
	public:
		InterfaceCtrl();
		List<interface^>^ buscarInterfaceAll();
		interface^ buscarInterfacexID(int IDb);
		void escribirArchivo(List<interface^>^ listaInterface);
		void agregarNewInterface(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID);
		void eliminarInterface(int IDb);
	};
}