#pragma once
namespace RDEController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RDEModel;


	public ref class DoorRegisterxDoorCtrl {
	public:
		DoorRegisterxDoorCtrl();
		List<doorRegisterxDoor^>^ generarReporte();

	};
}