#pragma once

namespace RDEController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RDEModel;


	public ref class EntryReportCtrl {
	public:
		EntryReportCtrl();
		List<doorRegisterxCard^>^ generarReporte();

	};
}