#pragma once
namespace RDEController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RDEModel;


	public ref class doorRegisterxDayCtrl {
	public:
		doorRegisterxDayCtrl();
		List<doorRegisterxDay^>^ generarReporte();

	};
}

//FDFDF