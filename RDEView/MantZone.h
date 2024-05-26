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
	/// Resumen de MantZone
	/// </summary>
	public ref class MantZone : public System::Windows::Forms::Form
	{
	public:
		MantZone(void)
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
		~MantZone()
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
	private: System::Windows::Forms::TextBox^ txt_closingTime;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_openingTime;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_location;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_name;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_ID;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_adminID;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_active;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_closingTime = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_openingTime = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_location = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_adminID = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_active = (gcnew System::Windows::Forms::TextBox());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column6,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 126);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1015, 178);
			this->dataGridView1->TabIndex = 46;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(219, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantZone::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantZone::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantZone::button1_Click);
			// 
			// txt_closingTime
			// 
			this->txt_closingTime->Location = System::Drawing::Point(347, 29);
			this->txt_closingTime->Name = L"txt_closingTime";
			this->txt_closingTime->Size = System::Drawing::Size(168, 20);
			this->txt_closingTime->TabIndex = 42;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(254, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Hora de Cierre";
			// 
			// txt_openingTime
			// 
			this->txt_openingTime->Location = System::Drawing::Point(347, 3);
			this->txt_openingTime->Name = L"txt_openingTime";
			this->txt_openingTime->Size = System::Drawing::Size(168, 20);
			this->txt_openingTime->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(254, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Hora de Apertura";
			// 
			// txt_location
			// 
			this->txt_location->Location = System::Drawing::Point(67, 56);
			this->txt_location->Name = L"txt_location";
			this->txt_location->Size = System::Drawing::Size(168, 20);
			this->txt_location->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(254, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Estado";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(67, 30);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(168, 20);
			this->txt_name->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Nombre";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(67, 4);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(168, 20);
			this->txt_ID->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Ubicacion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(534, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Administrador";
			// 
			// txt_adminID
			// 
			this->txt_adminID->Location = System::Drawing::Point(627, 4);
			this->txt_adminID->Name = L"txt_adminID";
			this->txt_adminID->Size = System::Drawing::Size(168, 20);
			this->txt_adminID->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 49;
			this->label7->Text = L"ID";
			// 
			// txt_active
			// 
			this->txt_active->Location = System::Drawing::Point(347, 56);
			this->txt_active->Name = L"txt_active";
			this->txt_active->Size = System::Drawing::Size(168, 20);
			this->txt_active->TabIndex = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ID";
			this->Column6->Name = L"Column6";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ubicacion";
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
			this->Column4->HeaderText = L"Hora de Apertura";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Hora de Cierre";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Administrador";
			this->Column7->Name = L"Column7";
			// 
			// MantZone
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1037, 316);
			this->Controls->Add(this->txt_active);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_adminID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_closingTime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_openingTime);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_location);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantZone";
			this->Text = L"MantZone";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
	int ID = Convert::ToInt32(this->txt_ID->Text);
	String^ name = this->txt_name->Text;
	String^ location = this->txt_location->Text;
	int openingTime = Convert::ToInt32(this->txt_openingTime->Text);
	int closingTime = Convert::ToInt32(this->txt_closingTime->Text);
	bool active = Convert::ToBoolean(this->txt_active->Text);
	int adminID = Convert::ToInt32(this->txt_adminID->Text);

	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	admin^ objAdmin = objAdminCtrl->BuscarAdminxID(adminID);

	ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
	objZoneCtrl->agregarNewZone(ID, name, location, openingTime, closingTime, active, objAdmin);
	txt_ID->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int ID = Convert::ToInt32(this->txt_ID->Text);
	String^ name = this->txt_name->Text;
	String^ location = this->txt_location->Text;
	int openingTime = Convert::ToInt32(this->txt_openingTime->Text);
	int closingTime = Convert::ToInt32(this->txt_closingTime->Text);
	bool active = Convert::ToBoolean(this->txt_active->Text);
	int adminID = Convert::ToInt32(this->txt_adminID->Text);

	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	admin^ objAdmin = objAdminCtrl->BuscarAdminxID(adminID);

	ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
	objZoneCtrl->actualizarZone(ID, name, location, openingTime, closingTime, active, objAdmin);
	txt_ID->Clear();

	MessageBox::Show("La zona se actualizo con exito.");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	ZoneCtrl^ objZoneCtrl = gcnew ZoneCtrl();
	objZoneCtrl->eliminarZone(codigoEliminar);
	MessageBox::Show("La zona seleccionada ha sido eliminado correctamente");
	this->dataGridView1->Rows->Clear();
}
};
}
