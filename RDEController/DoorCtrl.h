#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System::Data::SqlClient;

	public ref class DoorCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		DoorCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<door^>^ buscarDoorAll();
		door^ buscarDoorxN(String^ Nb);

	};
}