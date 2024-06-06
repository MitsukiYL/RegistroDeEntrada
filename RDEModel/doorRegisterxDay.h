
#pragma once

using namespace System;

namespace RDEModel {

	public ref class doorRegisterxDay {
	private:
		String^ day;
		int cantidad;

	public:
		doorRegisterxDay();
		doorRegisterxDay(String^ day,  int cantidad);

		String^ getDay();
		void setDay(String^ day);

		int getCantidad();
		void setCantidad(int cantidad);
	};
}