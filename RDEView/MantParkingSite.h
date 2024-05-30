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
	/// Resumen de MantParkingSite
	/// </summary>
	public ref class MantParkingSite : public System::Windows::Forms::Form
	{
	public:
		MantParkingSite(void)
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
		~MantParkingSite()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::TextBox^ txt_ID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_lotID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::CheckBox^ checkReserved;
	private: System::Windows::Forms::CheckBox^ checkActive;






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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_lotID = (gcnew System::Windows::Forms::TextBox());
			this->checkReserved = (gcnew System::Windows::Forms::CheckBox());
			this->checkActive = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(927, 368);
			this->dataGridView1->TabIndex = 42;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantParkingSite::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantParkingSite::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Reservado";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Estado";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Playa";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(254, 100);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 41;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantParkingSite::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(134, 100);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantParkingSite::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 100);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantParkingSite::button1_Click);
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(85, 5);
			this->txt_ID->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(250, 26);
			this->txt_ID->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 6);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Codigo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(383, 100);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 43;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantParkingSite::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 57);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Playa";
			// 
			// txt_lotID
			// 
			this->txt_lotID->Location = System::Drawing::Point(85, 51);
			this->txt_lotID->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_lotID->Name = L"txt_lotID";
			this->txt_lotID->Size = System::Drawing::Size(250, 26);
			this->txt_lotID->TabIndex = 47;
			// 
			// checkReserved
			// 
			this->checkReserved->AutoSize = true;
			this->checkReserved->Location = System::Drawing::Point(438, 5);
			this->checkReserved->Name = L"checkReserved";
			this->checkReserved->Size = System::Drawing::Size(112, 24);
			this->checkReserved->TabIndex = 48;
			this->checkReserved->Text = L"Reservado";
			this->checkReserved->UseVisualStyleBackColor = true;
			// 
			// checkActive
			// 
			this->checkActive->AutoSize = true;
			this->checkActive->Location = System::Drawing::Point(438, 57);
			this->checkActive->Name = L"checkActive";
			this->checkActive->Size = System::Drawing::Size(78, 24);
			this->checkActive->TabIndex = 49;
			this->checkActive->Text = L"Activo";
			this->checkActive->UseVisualStyleBackColor = true;
			// 
			// MantParkingSite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(951, 620);
			this->Controls->Add(this->checkActive);
			this->Controls->Add(this->checkReserved);
			this->Controls->Add(this->txt_lotID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label1);
			this->Name = L"MantParkingSite";
			this->Text = L"MantParkingSite";
			this->Load += gcnew System::EventHandler(this, &MantParkingSite::MantParkingSite_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ID = this->txt_ID->Text;
		bool reserved = this->checkReserved->Checked;
		bool active = this->checkActive->Checked;
		int lotID = Convert::ToInt32(this->txt_lotID->Text);

		ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
		estacinctrl->agregarEstacionamiento(ID, reserved, active, lotID);
		txt_ID->Clear();

		ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
		List<parkingSite^>^ listaParkingSite = objParkSiteCtrl->AllEstacionamientos();

		ShowGrid(listaParkingSite);

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int IDbuscar = Convert::ToInt32(this->txt_lotID->Text);
	ParkingSiteCtrl^ estaCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaestacionamientos = estaCtrl->BuscarSitexLot(IDbuscar);
	ShowGrid(listaestacionamientos);


}

	private: void ShowGrid(List<parkingSite^>^ listaestacionamientos) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaestacionamientos->Count; i++) {
			parkingSite^ objesta = listaestacionamientos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = objesta->getID();
			filaGrilla[1] = Convert::ToString(objesta->getReserved());
			filaGrilla[2] = Convert::ToString(objesta->getActive());
			filaGrilla[3] = Convert::ToString(objesta->getLotID());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = this->txt_ID->Text; 
	bool reserved = this->checkReserved->Checked;
	bool active = this->checkActive->Checked;
	int lotID = Convert::ToInt32(this->txt_lotID->Text);
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->actualizarEstac(ID, reserved, active,lotID);
	txt_ID->Clear();
	MessageBox::Show("El estacionamiento se actualizo con exito.\nCodigo"+ID);

	ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaParkingSite = objParkSiteCtrl->AllEstacionamientos();

	ShowGrid(listaParkingSite);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = this->txt_ID->Text;
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->eliminarEstac(ID);
	MessageBox::Show("El estacionamiento se elimino con exito.");
	txt_ID->Clear();

	ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaParkingSite = objParkSiteCtrl->AllEstacionamientos();

	ShowGrid(listaParkingSite);
}
private: System::Void MantParkingSite_Load(System::Object^ sender, System::EventArgs^ e) {
	ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaParkingSite = objParkSiteCtrl->AllEstacionamientos();

	ShowGrid(listaParkingSite);
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ IDPankingSite = (dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	if (IDPankingSite != nullptr) {
		ParkingSiteCtrl^ objEstacCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objEstacionamiento = objEstacCtrl->BuscarSiteXID(IDPankingSite);
		this->txt_ID->Text = objEstacionamiento->getID();
		this->txt_lotID->Text = Convert::ToString( objEstacionamiento->getLotID());
		this->checkReserved->Checked = objEstacionamiento->getReserved();
		this->checkActive->Checked = objEstacionamiento->getActive();
		
	}

}
};
}
