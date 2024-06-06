#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RDEController;
	using namespace RDEModel;

	/// <summary>
	/// Resumen de ReporteDoorRegisterxDay
	/// </summary>
	public ref class ReporteDoorRegisterxDay : public System::Windows::Forms::Form
	{
	public:
		ReporteDoorRegisterxDay(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteDoorRegisterxDay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(13, 13);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"N_visitas";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(680, 422);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// ReporteDoorRegisterxDay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 451);
			this->Controls->Add(this->chart1);
			this->Name = L"ReporteDoorRegisterxDay";
			this->Text = L"ReporteDoorRegisterxDay";
			this->Load += gcnew System::EventHandler(this, &ReporteDoorRegisterxDay::ReporteDoorRegisterxDay_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReporteDoorRegisterxDay_Load(System::Object^ sender, System::EventArgs^ e) {
		doorRegisterxDayCtrl^ objDoorRegisterxDayCtrl = gcnew doorRegisterxDayCtrl();
		List<doorRegisterxDay^>^ listaDoorRegisterxDay = objDoorRegisterxDayCtrl->generarReporte();
		this->chart1->Series["N_visitas"]->Points->Clear();

		for (int i = 0; i < listaDoorRegisterxDay->Count; i++) {

			this->chart1->Series["N_visitas"]->Points->Add(listaDoorRegisterxDay[i]->getCantidad());//cantidad de entradas del dia
			this->chart1->Series["N_visitas"]->Points[i]->Label = Convert::ToString(listaDoorRegisterxDay[i]->getCantidad());

			this->chart1->Series["N_visitas"]->Points[i]->AxisLabel = listaDoorRegisterxDay[i]->getDay(); //nombre del dia
			this->chart1->Series["N_visitas"]->Points[i]->LegendText = listaDoorRegisterxDay[i]->getDay();
			
		}
	}
	};
}
