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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MantVehicles()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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







	private: System::Windows::Forms::TextBox^ txt_registrationDate;
	private: System::Windows::Forms::TextBox^ txt_insurance;
	private: System::Windows::Forms::TextBox^ txt_regDate;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_plate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_vehicleType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fuelType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_insurance;

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
			this->Column_plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_vehicleType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fuelType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_insurance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->check_insurance = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_insurance = (gcnew System::Windows::Forms::TextBox());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_regDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->txt_fuelType->Location = System::Drawing::Point(381, 49);
			this->txt_fuelType->Name = L"txt_fuelType";
			this->txt_fuelType->Size = System::Drawing::Size(212, 20);
			this->txt_fuelType->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(311, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Combustible";
			// 
			// txt_model
			// 
			this->txt_model->Location = System::Drawing::Point(381, 13);
			this->txt_model->Name = L"txt_model";
			this->txt_model->Size = System::Drawing::Size(212, 20);
			this->txt_model->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(332, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Modelo";
			// 
			// Vehicle_DGV
			// 
			this->Vehicle_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vehicle_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column_plate,
					this->Column_vehicleType, this->Column_brand, this->Column_model, this->Column_fuelType, this->Column1, this->Column_insurance
			});
			this->Vehicle_DGV->Location = System::Drawing::Point(12, 158);
			this->Vehicle_DGV->Name = L"Vehicle_DGV";
			this->Vehicle_DGV->Size = System::Drawing::Size(740, 273);
			this->Vehicle_DGV->TabIndex = 12;
			this->Vehicle_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantVehicles::Vehicle_DGV_CellClick);
			// 
			// Column_plate
			// 
			this->Column_plate->HeaderText = L"Placa";
			this->Column_plate->Name = L"Column_plate";
			// 
			// Column_vehicleType
			// 
			this->Column_vehicleType->HeaderText = L"Veh�culo";
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
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha de Registro";
			this->Column1->Name = L"Column1";
			// 
			// Column_insurance
			// 
			this->Column_insurance->HeaderText = L"Seguro";
			this->Column_insurance->Name = L"Column_insurance";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"A�adir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantVehicles::button1_Click);
			// 
			// check_insurance
			// 
			this->check_insurance->AutoSize = true;
			this->check_insurance->Location = System::Drawing::Point(477, 133);
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
			// txt_insurance
			// 
			this->txt_insurance->Location = System::Drawing::Point(0, 0);
			this->txt_insurance->Name = L"txt_insurance";
			this->txt_insurance->Size = System::Drawing::Size(100, 20);
			this->txt_insurance->TabIndex = 0;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(0, 0);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(100, 20);
			this->txt_registrationDate->TabIndex = 0;
			// 
			// txt_regDate
			// 
			this->txt_regDate->Location = System::Drawing::Point(381, 89);
			this->txt_regDate->Name = L"txt_regDate";
			this->txt_regDate->Size = System::Drawing::Size(212, 20);
			this->txt_regDate->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(281, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Fecha de Registro";
			// 
			// MantVehicles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 442);
			this->Controls->Add(this->txt_regDate);
			this->Controls->Add(this->label4);
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

		}

#pragma endregion
	private: System::Void MantVehicles_Load(System::Object^ sender, System::EventArgs^ e) {
		VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
		List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
		mostrarGrilla(listVehicle);
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Vehicle_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ plate = Vehicle_DGV->Rows[Vehicle_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	vehicle^ Vehicle = objVehicleCtrl->buscarVehiclexPlate(plate);;
	if (Vehicle != nullptr) {
		this->txt_fuelType->Text = Vehicle->fuelType;
		this->txt_vehicleType->Text = Vehicle->vehicleType;
		this->txt_plate->Text = Vehicle->plate;
		this->txt_brand->Text = Vehicle->brand;
		this->txt_model->Text = Vehicle->model;
		this->check_insurance->Checked = Vehicle->insurance;
		this->txt_regDate->Text = Vehicle->registrationDate;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//A�ADIR

	String^ fuelType = this->txt_fuelType->Text;
	String^ vehicleType = this->txt_vehicleType->Text;
	String^ plate = this->txt_plate->Text;
	String^ brand = this->txt_brand->Text;
	String^ model = this->txt_model->Text;
	bool insurance = this->check_insurance->Checked;
	String^ registrationDate = this->txt_regDate->Text;


	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	objVehicleCtrl->agregarNewVehicle(fuelType, vehicleType, registrationDate, plate, brand, model, insurance);
	txt_plate->Clear();

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR


	String^ fuelType = this->txt_fuelType->Text;
	String^ vehicleType = this->txt_vehicleType->Text;
	String^ plate = this->txt_plate->Text;
	String^ brand = this->txt_brand->Text;
	String^ model = this->txt_model->Text;
	bool insurance = this->check_insurance->Checked;
	String^ registrationDate = this->txt_regDate->Text;

	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	objVehicleCtrl->actualizarVehicle(fuelType, vehicleType, registrationDate, plate, brand, model, insurance);
	MessageBox::Show("El vehiculo seleccionado a ha sido actualizado correctamente");
	txt_plate->Clear();

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR

	int filaSeleccionada = this->Vehicle_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
	String^ placaEliminar = this->Vehicle_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	objVehicleCtrl->eliminarVehicle(placaEliminar);
	MessageBox::Show("El vehiculo seleccionado a ha sido eliminado correctamente");
	this->Vehicle_DGV->Rows->Clear();

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);
}

private: void mostrarGrilla(List<vehicle^>^ listVehicle) {
	this->Vehicle_DGV->Rows->Clear();
	for (int i = 0; i < listVehicle->Count; i++) {
		vehicle^ objVehicle = listVehicle[i];
		array<String^>^ filaGrilla = gcnew array<String^>(7);
		filaGrilla[0] = objVehicle->getPlate();
		filaGrilla[1] = objVehicle->getVehicleType();
		filaGrilla[2] = objVehicle->getBrand();
		filaGrilla[3] = objVehicle->getModel();
		filaGrilla[4] = objVehicle->getFuelType();
		filaGrilla[5] = objVehicle->getRegistrationDate();
		filaGrilla[6] = Convert::ToString(objVehicle->getInsurance());
		this->Vehicle_DGV->Rows->Add(filaGrilla);
	}
}
};
}
