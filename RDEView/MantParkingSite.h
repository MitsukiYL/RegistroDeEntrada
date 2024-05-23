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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 200);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(514, 368);
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
			this->button3->Location = System::Drawing::Point(246, 131);
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
			this->button2->Location = System::Drawing::Point(126, 131);
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
			this->button1->Location = System::Drawing::Point(6, 131);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantParkingSite::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 86);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Estado ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 46);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Reservado";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(117, 3);
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
			this->button4->Location = System::Drawing::Point(376, 131);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 43;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantParkingSite::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"true", L"false" });
			this->comboBox1->Location = System::Drawing::Point(117, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(250, 28);
			this->comboBox1->TabIndex = 44;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"true", L"false" });
			this->comboBox2->Location = System::Drawing::Point(117, 86);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(250, 28);
			this->comboBox2->TabIndex = 45;
			// 
			// MantParkingSite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 548);
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
			this->Name = L"MantParkingSite";
			this->Text = L"MantParkingSite";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ID = this->txt_ID->Text;
		bool reserved = Convert::ToBoolean(this->comboBox1->Text);
		bool active = Convert::ToBoolean(this->comboBox2->Text);
		ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
		estacinctrl->agregarEstacionamiento(ID, reserved, active);
		txt_ID->Clear();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ IDbuscar = this->txt_ID->Text;
	ParkingSiteCtrl^ estaCtrl = gcnew ParkingSiteCtrl();
	List<parkingSite^>^ listaestacionamientos = estaCtrl->BuscarEstacionamientoxID(IDbuscar);
	ShowGrid(listaestacionamientos);
}

	private: void ShowGrid(List<parkingSite^>^ listaestacionamientos) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaestacionamientos->Count; i++) {
			parkingSite^ objesta = listaestacionamientos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(3);
			filaGrilla[0] = objesta->getID();
			filaGrilla[1] = Convert::ToString(objesta->getReserved());
			filaGrilla[2] = Convert::ToString(objesta->getActive());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = this->txt_ID->Text;
	bool reserved = Convert::ToBoolean(this->comboBox1->Text);
	bool active = Convert::ToBoolean(this->comboBox2->Text);
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->actualizarEstac(ID, reserved, active);
	txt_ID->Clear();
	MessageBox::Show("El estacionamiento se actualizo con exito.");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = this->txt_ID->Text;
	ParkingSiteCtrl^ estacinctrl = gcnew ParkingSiteCtrl();
	estacinctrl->eliminarEstac(ID);
	txt_ID->Clear();

}
};
}
