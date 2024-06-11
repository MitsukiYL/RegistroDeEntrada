#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class DoorCtrl {
	public:
		DoorCtrl();
		List<door^>^ buscarDoorAll();
		door^ buscarDoorxN(String^ Nb);
	};
}