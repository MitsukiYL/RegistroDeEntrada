#pragma once
namespace RDEController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RDEModel;
	public ref class ZonexParkingSiteCtrl {
	public:
		ZonexParkingSiteCtrl();
		List<ZonexParkingSite^>^ generarReporte();
	};

}