#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RDEController;
	using namespace RDEModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ReporteDoorRegisterxDoor
	/// </summary>
	public ref class ReporteDoorRegisterxDoor : public System::Windows::Forms::Form
	{
	public:
		ReporteDoorRegisterxDoor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ReporteDoorRegisterxDoor()
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"N_visitas";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(531, 352);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// ReporteDoorRegisterxDoor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 363);
			this->Controls->Add(this->chart1);
			this->Name = L"ReporteDoorRegisterxDoor";
			this->Text = L"ReporteDoorRegisterxDoor";
			this->Load += gcnew System::EventHandler(this, &ReporteDoorRegisterxDoor::ReporteDoorRegisterxDoor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReporteDoorRegisterxDoor_Load(System::Object^ sender, System::EventArgs^ e) {

		DoorRegisterxDoorCtrl^ objDoorRegisterxDoorCtrl = gcnew DoorRegisterxDoorCtrl();
		List<doorRegisterxDoor^>^ listaDoorRegisterxDoor = objDoorRegisterxDoorCtrl->generarReporte();
		this->chart1->Series["N_visitas"]->Points->Clear();

		for (int i = 0; i < listaDoorRegisterxDoor->Count; i++) {

			this->chart1->Series["N_visitas"]->Points->Add(listaDoorRegisterxDoor[i]->getCantVisitas());//cantidad de entradas del dia
			this->chart1->Series["N_visitas"]->Points[i]->Label = Convert::ToString(listaDoorRegisterxDoor[i]->getCantVisitas());

			this->chart1->Series["N_visitas"]->Points[i]->AxisLabel = listaDoorRegisterxDoor[i]->getDoorName(); //nombre de la puerta
			this->chart1->Series["N_visitas"]->Points[i]->LegendText = listaDoorRegisterxDoor[i]->getDoorName();

		}
	}
	};
}
