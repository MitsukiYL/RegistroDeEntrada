#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace RDEController;

	/// <summary>
	/// Resumen de MantParkingLot
	/// </summary>
	public ref class MantParkingLot : public System::Windows::Forms::Form
	{
	public:
		MantParkingLot(void)
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
		~MantParkingLot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::TextBox^ txt_vehicleType;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_Ninactive;





	private: System::Windows::Forms::TextBox^ txt_capacity;
	private: System::Windows::Forms::TextBox^ txt_Nreserved;
	private: System::Windows::Forms::TextBox^ txt_ZoneID;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;













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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->txt_vehicleType = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_Ninactive = (gcnew System::Windows::Forms::TextBox());
			this->txt_capacity = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nreserved = (gcnew System::Windows::Forms::TextBox());
			this->txt_ZoneID = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column2,
					this->Column4, this->Column1, this->Column3, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 144);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1072, 278);
			this->dataGridView1->TabIndex = 48;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantParkingLot::dataGridView1_CellClick);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Codigo";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de Vehiculo";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Capacidad";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Nro de Inactivos";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Nro de Reservados";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Zona";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(287, 110);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantParkingLot::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 110);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantParkingLot::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 110);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantParkingLot::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(349, 68);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 16);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Nro de Reservados";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(349, 38);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 16);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Nro de Inactivos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 42);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 16);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Tipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(349, 7);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 16);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Capacidad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 14);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Código";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Nombre";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(97, 10);
			this->txt_ID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(193, 22);
			this->txt_ID->TabIndex = 49;
			// 
			// txt_vehicleType
			// 
			this->txt_vehicleType->Location = System::Drawing::Point(97, 38);
			this->txt_vehicleType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_vehicleType->Name = L"txt_vehicleType";
			this->txt_vehicleType->Size = System::Drawing::Size(193, 22);
			this->txt_vehicleType->TabIndex = 50;
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(97, 68);
			this->txt_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(193, 22);
			this->txt_name->TabIndex = 51;
			// 
			// txt_Ninactive
			// 
			this->txt_Ninactive->Location = System::Drawing::Point(516, 33);
			this->txt_Ninactive->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_Ninactive->Name = L"txt_Ninactive";
			this->txt_Ninactive->Size = System::Drawing::Size(193, 22);
			this->txt_Ninactive->TabIndex = 52;
			// 
			// txt_capacity
			// 
			this->txt_capacity->Location = System::Drawing::Point(516, 5);
			this->txt_capacity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_capacity->Name = L"txt_capacity";
			this->txt_capacity->Size = System::Drawing::Size(193, 22);
			this->txt_capacity->TabIndex = 53;
			// 
			// txt_Nreserved
			// 
			this->txt_Nreserved->Location = System::Drawing::Point(516, 68);
			this->txt_Nreserved->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_Nreserved->Name = L"txt_Nreserved";
			this->txt_Nreserved->Size = System::Drawing::Size(193, 22);
			this->txt_Nreserved->TabIndex = 54;
			// 
			// txt_ZoneID
			// 
			this->txt_ZoneID->Location = System::Drawing::Point(891, 7);
			this->txt_ZoneID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_ZoneID->Name = L"txt_ZoneID";
			this->txt_ZoneID->Size = System::Drawing::Size(193, 22);
			this->txt_ZoneID->TabIndex = 56;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(823, 10);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 16);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Zona";
			// 
			// MantParkingLot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1095, 447);
			this->Controls->Add(this->txt_ZoneID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_Nreserved);
			this->Controls->Add(this->txt_capacity);
			this->Controls->Add(this->txt_Ninactive);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->txt_vehicleType);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MantParkingLot";
			this->Text = L"MantParkingLot";
			this->Load += gcnew System::EventHandler(this, &MantParkingLot::MantParkingLot_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->txt_name->Text;
		String^ vehicleType = this->txt_vehicleType->Text;
		String^ ID = Convert::ToString(this->txt_ID->Text);
		int capacity = Convert::ToInt32(this->txt_capacity->Text);
		int N_reserved = Convert::ToInt32(this->txt_Nreserved->Text);
		int N_inactive = Convert::ToInt32(this->txt_Ninactive->Text);
		int zoneID = Convert::ToInt32(this->txt_ZoneID->Text);

		ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
		zone^ objZone = objZoneCtrl->buscarZonaxID(zoneID);
		ParkingLotCtrl^ playactrl = gcnew ParkingLotCtrl();

		if (objZone != nullptr) {
			playactrl->agregarPlaya(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone);
			txt_ID->Clear();
			MessageBox::Show("La playa se agregó con exito.");
		}
		else {
			MessageBox::Show("Zona elegida no existe.");
		}
		
		List<parkingLot^>^ listaParkingLot = playactrl->AllPlayas();
		mostrarGrilla(listaParkingLot);

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ ID = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

	ParkingLotCtrl^ objParkingLotCtrl = gcnew ParkingLotCtrl();
	parkingLot^ objParkingLot = objParkingLotCtrl->BuscarplayaxID(ID);

	if (objParkingLot != nullptr) {
		objParkingLotCtrl->eliminarPlaya(ID);
		MessageBox::Show("La playa se eliminó con éxito.");
	}
	else {
		MessageBox::Show("Error al seleccionar playa.");
	}


	List<parkingLot^>^ listaParkingLot = objParkingLotCtrl->AllPlayas();
	mostrarGrilla(listaParkingLot);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	ParkingLotCtrl^ objParkingLotCtrl = gcnew ParkingLotCtrl();

	String^ name = this->txt_name->Text;
	String^ vehicleType = this->txt_vehicleType->Text;
	String^ ID = Convert::ToString(this->txt_ID->Text);
	int capacity = Convert::ToInt32(this->txt_capacity->Text);
	int N_reserved = Convert::ToInt32(this->txt_Nreserved->Text);
	int N_inactive = Convert::ToInt32(this->txt_Ninactive->Text);
	int zoneID = Convert::ToInt32(this->txt_ZoneID->Text);

	ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
	zone^ objZone = objZoneCtrl->buscarZonaxID(zoneID);
	
	if (objZone != nullptr) {
		objParkingLotCtrl->actualizarPlaya(name, vehicleType, ID, capacity, N_reserved, N_inactive, objZone);
		txt_ID->Clear();
		MessageBox::Show("La playa se actualizó con exito.");
	}
	else {
		MessageBox::Show("Zona elegida no existe.");
	}

	List<parkingLot^>^ listaParkingLot = objParkingLotCtrl->AllPlayas();
	mostrarGrilla(listaParkingLot);
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ ID = dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
	ParkingLotCtrl^ objParkLotCtrl = gcnew ParkingLotCtrl();
	parkingLot^ ParkingLot = objParkLotCtrl->BuscarplayaxID(ID);;
	if (ParkingLot != nullptr) {
		this->txt_ID->Text = ParkingLot->getID();
		this->txt_vehicleType->Text = ParkingLot->getVehicleType();
		this->txt_name->Text = ParkingLot->getName();
		this->txt_capacity->Text = Convert::ToString(ParkingLot->getCapacity());
		this->txt_Ninactive->Text = Convert::ToString(ParkingLot->getNInactive());
		this->txt_Nreserved->Text= Convert::ToString(ParkingLot->getNReserved());
		this->txt_ZoneID->Text = Convert::ToString(ParkingLot->getZone()->getID());
	}
}
private: System::Void MantParkingLot_Load(System::Object^ sender, System::EventArgs^ e) {
	ParkingLotCtrl^ objParkLotCtrl = gcnew ParkingLotCtrl();
	List<parkingLot^>^ listaParkingLot = objParkLotCtrl->AllPlayas();
	mostrarGrilla(listaParkingLot);
}
private: void mostrarGrilla(List<parkingLot^>^ listParkLot) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listParkLot->Count; i++) {
		parkingLot^ objParkingLot = listParkLot[i];
		array<String^>^ filaGrilla = gcnew array<String^>(7);
		filaGrilla[0] = objParkingLot->getID();
		filaGrilla[1] = objParkingLot->getVehicleType();
		filaGrilla[2] = objParkingLot->getName();
		filaGrilla[3] = Convert::ToString(objParkingLot->getCapacity());
		filaGrilla[4] = Convert::ToString(objParkingLot->getNInactive());
		filaGrilla[5] = Convert::ToString(objParkingLot->getNReserved());
		filaGrilla[6] = Convert::ToString(objParkingLot->getZone()->getID());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
};
}
