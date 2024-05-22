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
	/// Resumen de MantVehicles
	/// </summary>
	public ref class MantVehicles : public System::Windows::Forms::Form
	{
	public:
		MantVehicles(void)
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
		~MantVehicles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_plate;
	private: System::Windows::Forms::TextBox^ txt_vehicleType;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_brand;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_fuelType;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_model;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ Vehicle_DGV;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ check_insurance;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_plate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_vehicleType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fuelType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_insurance;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_plate = (gcnew System::Windows::Forms::TextBox());
			this->txt_vehicleType = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_brand = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_fuelType = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_model = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Vehicle_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->check_insurance = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Column_plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_vehicleType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fuelType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_insurance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Placa";
			// 
			// txt_plate
			// 
			this->txt_plate->Location = System::Drawing::Point(55, 13);
			this->txt_plate->Name = L"txt_plate";
			this->txt_plate->Size = System::Drawing::Size(212, 20);
			this->txt_plate->TabIndex = 1;
			// 
			// txt_vehicleType
			// 
			this->txt_vehicleType->Location = System::Drawing::Point(55, 49);
			this->txt_vehicleType->Name = L"txt_vehicleType";
			this->txt_vehicleType->Size = System::Drawing::Size(212, 20);
			this->txt_vehicleType->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Vehiculo";
			// 
			// txt_brand
			// 
			this->txt_brand->Location = System::Drawing::Point(55, 87);
			this->txt_brand->Name = L"txt_brand";
			this->txt_brand->Size = System::Drawing::Size(212, 20);
			this->txt_brand->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Marca";
			// 
			// txt_fuelType
			// 
			this->txt_fuelType->Location = System::Drawing::Point(345, 49);
			this->txt_fuelType->Name = L"txt_fuelType";
			this->txt_fuelType->Size = System::Drawing::Size(212, 20);
			this->txt_fuelType->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(275, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Combustible";
			// 
			// txt_model
			// 
			this->txt_model->Location = System::Drawing::Point(345, 13);
			this->txt_model->Name = L"txt_model";
			this->txt_model->Size = System::Drawing::Size(212, 20);
			this->txt_model->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(296, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Modelo";
			// 
			// Vehicle_DGV
			// 
			this->Vehicle_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vehicle_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column_plate,
					this->Column_vehicleType, this->Column_brand, this->Column_model, this->Column_fuelType, this->Column_insurance
			});
			this->Vehicle_DGV->Location = System::Drawing::Point(13, 158);
			this->Vehicle_DGV->Name = L"Vehicle_DGV";
			this->Vehicle_DGV->Size = System::Drawing::Size(798, 273);
			this->Vehicle_DGV->TabIndex = 12;
			this->Vehicle_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantVehicles::Vehicle_DGV_CellClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantVehicles::button1_Click);
			// 
			// check_insurance
			// 
			this->check_insurance->AutoSize = true;
			this->check_insurance->Location = System::Drawing::Point(345, 90);
			this->check_insurance->Name = L"check_insurance";
			this->check_insurance->Size = System::Drawing::Size(116, 17);
			this->check_insurance->TabIndex = 14;
			this->check_insurance->Text = L"Cuenta con seguro";
			this->check_insurance->UseVisualStyleBackColor = true;
			this->check_insurance->CheckedChanged += gcnew System::EventHandler(this, &MantVehicles::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(112, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantVehicles::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(209, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantVehicles::button3_Click);
			// 
			// Column_plate
			// 
			this->Column_plate->HeaderText = L"Placa";
			this->Column_plate->Name = L"Column_plate";
			// 
			// Column_vehicleType
			// 
			this->Column_vehicleType->HeaderText = L"Vehículo";
			this->Column_vehicleType->Name = L"Column_vehicleType";
			// 
			// Column_brand
			// 
			this->Column_brand->HeaderText = L"Marca";
			this->Column_brand->Name = L"Column_brand";
			// 
			// Column_model
			// 
			this->Column_model->HeaderText = L"Modelo";
			this->Column_model->Name = L"Column_model";
			// 
			// Column_fuelType
			// 
			this->Column_fuelType->HeaderText = L"Tipo de Combustible";
			this->Column_fuelType->Name = L"Column_fuelType";
			// 
			// Column_insurance
			// 
			this->Column_insurance->HeaderText = L"Seguro";
			this->Column_insurance->Name = L"Column_insurance";
			// 
			// MantVehicles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 442);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->check_insurance);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Vehicle_DGV);
			this->Controls->Add(this->txt_fuelType);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_model);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_brand);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_vehicleType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_plate);
			this->Controls->Add(this->label1);
			this->Name = L"MantVehicles";
			this->Text = L"MantVehicles";
			this->Load += gcnew System::EventHandler(this, &MantVehicles::MantVehicles_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

void ShowVehicle() {
			/*List<vehicle^>^ VehicleList = Controller::QueryAllVehicle();
			if (VehicleList != nullptr) {
				Vehicle_DGV->Rows->Clear();
				for (int i = 0; i < VehicleList->Count; i++) {
					String^ InsuranceString = VehicleList[i]->insurance ? "True" : "False";
					Vehicle_DGV->Rows->Add(gcnew array<String^> {VehicleList[i]->plate, 
						VehicleList[i]->vehicleType, VehicleList[i]->brand, 
						VehicleList[i]->model, VehicleList[i]->fuelType, 
						InsuranceString});
				}
			}*/
		}

#pragma endregion
	private: System::Void MantVehicles_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowVehicle();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Vehicle_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*String^ plate = Vehicle_DGV->Rows[Vehicle_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
	vehicle^ Vehicle = Controller::QueryVehiclebyPlate(plate);
	if (Vehicle != nullptr) {
		txt_plate->Text = Vehicle->plate;
		txt_vehicleType->Text = Vehicle->vehicleType;
		txt_brand->Text = Vehicle->brand;
		txt_model->Text = Vehicle->model;
		txt_fuelType->Text = Vehicle->fuelType;
	}*/
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	/*String^ plate = txt_plate->Text;
	String^ vehicleType = txt_vehicleType->Text;
	String^ brand = txt_brand->Text;
	String^ model = txt_model->Text;
	String^ fuelType = txt_fuelType->Text;
	bool^ insurance = true;


	vehicle^ Vehicle = gcnew vehicle();
	Vehicle->plate = plate;
	Vehicle->vehicleType = vehicleType;
	Vehicle->brand = brand;
	Vehicle->model = model;
	Vehicle->fuelType = fuelType;
	Vehicle->insurance = (bool)insurance;
	Controller::AddVehicle(Vehicle);
	ShowVehicle();*/
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	/*String^ plate = txt_plate->Text;
	String^ vehicleType = txt_vehicleType->Text;
	String^ brand = txt_brand->Text;
	String^ model = txt_model->Text;
	String^ fuelType = txt_fuelType->Text;
	bool^ insurance = true;


	vehicle^ Vehicle = gcnew vehicle();
	Vehicle->plate = plate;
	Vehicle->vehicleType = vehicleType;
	Vehicle->brand = brand;
	Vehicle->model = model;
	Vehicle->fuelType = fuelType;
	Vehicle->insurance = (bool)insurance;
	Controller::UpdateVehicle(Vehicle);
	ShowVehicle();*/

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String^ plate = txt_plate->Text;
	Controller::DeleteVehicle(plate);
	ShowVehicle();*/
}
};
}
