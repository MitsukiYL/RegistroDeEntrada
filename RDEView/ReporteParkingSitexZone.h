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
	/// Resumen de ReporteParkingSitexZone
	/// </summary>
	public ref class ReporteParkingSitexZone : public System::Windows::Forms::Form
	{
	public:
		ReporteParkingSitexZone(void)
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
		~ReporteParkingSitexZone()
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(13, 13);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Total";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Inactivos";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Reservados";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(640, 407);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &ReporteParkingSitexZone::chart1_Click);
			// 
			// ReporteParkingSitexZone
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 432);
			this->Controls->Add(this->chart1);
			this->Name = L"ReporteParkingSitexZone";
			this->Text = L"ReporteParkingSitexZone";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
		ZonexParkingSiteCtrl^ reporteZonexSiteCtrl = gcnew ZonexParkingSiteCtrl();
		List<ZonexParkingSite^>^ listZonexSite = reporteZonexSiteCtrl->generarReporte();
		this->chart1->Series["Total"]->Points->Clear();
		this->chart1->Series["Inactivos"]->Points->Clear();
		this->chart1->Series["Reservados"]->Points->Clear();
		for (int i = 0; i < listZonexSite->Count; i++) {
			this->chart1->Series["Total"]->Points->Add(listZonexSite[i]->getcantParkingSite());
			this->chart1->Series["Total"]->Points[i]->AxisLabel = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Total"]->Points[i]->LegendText = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Total"]->Points[i]->Label = Convert::ToString(listZonexSite[i]->getcantParkingSite());

			this->chart1->Series["Inactivos"]->Points->Add(listZonexSite[i]->getcantInactives());
			this->chart1->Series["Inactivos"]->Points[i]->AxisLabel = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Inactivos"]->Points[i]->LegendText = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Inactivos"]->Points[i]->Label = Convert::ToString(listZonexSite[i]->getcantInactives());

			this->chart1->Series["Reservados"]->Points->Add(listZonexSite[i]->getcantReserveds());
			this->chart1->Series["Reservados"]->Points[i]->AxisLabel = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Reservados"]->Points[i]->LegendText = Convert::ToString(listZonexSite[i]->getIDZone());
			this->chart1->Series["Reservados"]->Points[i]->Label = Convert::ToString(listZonexSite[i]->getcantReserveds());
		}
	}
	};
}
