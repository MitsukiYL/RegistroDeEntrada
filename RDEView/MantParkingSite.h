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

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_ID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_lotID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;



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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_lotID = (gcnew System::Windows::Forms::TextBox());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Location = System::Drawing::Point(5, 155);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(618, 239);
			this->dataGridView1->TabIndex = 42;
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(166, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 41;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantParkingSite::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(86, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantParkingSite::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantParkingSite::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Estado ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Reservado";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(78, 2);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(168, 20);
			this->txt_ID->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Codigo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(252, 116);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 43;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantParkingSite::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"true", L"false" });
			this->comboBox1->Location = System::Drawing::Point(78, 30);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(168, 21);
			this->comboBox1->TabIndex = 44;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"true", L"false" });
			this->comboBox2->Location = System::Drawing::Point(78, 56);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(168, 21);
			this->comboBox2->TabIndex = 45;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Playa";
			// 
			// txt_lotID
			// 
			this->txt_lotID->Location = System::Drawing::Point(78, 89);
			this->txt_lotID->Name = L"txt_lotID";
			this->txt_lotID->Size = System::Drawing::Size(168, 20);
			this->txt_lotID->TabIndex = 47;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Playa";
			this->Column4->Name = L"Column4";
			// 
			// MantParkingSite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 403);
			this->Controls->Add(this->txt_lotID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
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
		bool reserved = Convert::ToBoolean(this->comboBox1->Text);
		bool active = Convert::ToBoolean(this->comboBox2->Text);
		int lotID = Convert::ToInt32(this->txt_lotID->Text);

		ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
		estacinctrl->agregarEstacionamiento(ID, reserved, active, lotID);
		txt_ID->Clear();
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
	bool reserved = Convert::ToBoolean(this->comboBox1->Text);
	bool active = Convert::ToBoolean(this->comboBox2->Text);
	int lotID = Convert::ToInt32(this->txt_lotID->Text);
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->actualizarEstac(ID, reserved, active,lotID);
	txt_ID->Clear();
	MessageBox::Show("El estacionamiento se actualizo con exito.");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = this->txt_ID->Text;
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->eliminarEstac(ID);
	MessageBox::Show("El estacionamiento se elimino con exito.");
	txt_ID->Clear();
}
private: System::Void MantParkingSite_Load(System::Object^ sender, System::EventArgs^ e) {
	ParkingSiteCtrl^ objParkSiteCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaParkingSite = objParkSiteCtrl->AllEstacionamientos();

	ShowGrid(listaParkingSite);
}
};
}
