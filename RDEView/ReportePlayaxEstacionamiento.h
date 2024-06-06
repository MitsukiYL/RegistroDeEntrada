#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RDEModel;
	using namespace RDEController;

	/// <summary>
	/// Resumen de ReportePlayaxEstacionamiento
	/// </summary>
	public ref class ReportePlayaxEstacionamiento : public System::Windows::Forms::Form
	{
	public:
		ReportePlayaxEstacionamiento(void)
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
		~ReportePlayaxEstacionamiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
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
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(696, 475);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// ReportePlayaxEstacionamiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 560);
			this->Controls->Add(this->chart1);
			this->Name = L"ReportePlayaxEstacionamiento";
			this->Text = L"ReportePlayaxEstacionamiento";
			this->Load += gcnew System::EventHandler(this, &ReportePlayaxEstacionamiento::ReportePlayaxEstacionamiento_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReportePlayaxEstacionamiento_Load(System::Object^ sender, System::EventArgs^ e) {
		ParkingSitexLotCtrl^ reporteSitexlotctrl = gcnew ParkingSitexLotCtrl();
		List<ParkingSitexParkingLot^>^ listaSitexLot = reporteSitexlotctrl->generarReporte();
		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listaSitexLot->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaSitexLot[i]->getcantParkingSite());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaSitexLot[i]->getIDParkingLot();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaSitexLot[i]->getIDParkingLot();
			this->chart1->Series["Series1"]->Points[i]->LegendText = Convert::ToString(listaSitexLot[i]->getcantParkingSite());
		}
	}
	};
}
