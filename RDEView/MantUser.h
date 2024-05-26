#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MantUser
	/// </summary>
	public ref class MantUser : public System::Windows::Forms::Form
	{
	public:
		MantUser(void)
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
		~MantUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ Person_DGV;













	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_userID;

	private: System::Windows::Forms::TextBox^ txt_code;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_userType;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::TextBox^ txt_isInside;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_occupation;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_age;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_permission;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Person_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_userID = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_userType = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_isInside = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_occupation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_permission = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantUser::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(110, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantUser::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"A�adir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantUser::button1_Click);
			// 
			// Person_DGV
			// 
			this->Person_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Person_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1, this->Column3,
					this->Column4, this->Column5, this->Column2, this->Column7, this->Column8, this->Column9, this->Column6
			});
			this->Person_DGV->Location = System::Drawing::Point(12, 157);
			this->Person_DGV->Name = L"Person_DGV";
			this->Person_DGV->RowHeadersWidth = 62;
			this->Person_DGV->Size = System::Drawing::Size(1122, 289);
			this->Person_DGV->TabIndex = 44;
			this->Person_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantUser::Person_DGV_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
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
			this->Column4->HeaderText = L"Tipo de Usuario";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Registro";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"C�digo";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Correo";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Contacto";
			this->Column9->Name = L"Column9";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Contrase�a";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"ID de Usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Nombre";
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(110, 3);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(168, 20);
			this->txt_userID->TabIndex = 33;
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(110, 83);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(168, 20);
			this->txt_code->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Tipo de Usuario";
			// 
			// txt_userType
			// 
			this->txt_userType->Location = System::Drawing::Point(110, 28);
			this->txt_userType->Name = L"txt_userType";
			this->txt_userType->Size = System::Drawing::Size(168, 20);
			this->txt_userType->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Fecha de Registro";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(368, 25);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(168, 20);
			this->txt_phone->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Contrase�a";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(368, 51);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(168, 20);
			this->txt_password->TabIndex = 43;
			// 
			// txt_isInside
			// 
			this->txt_isInside->Location = System::Drawing::Point(897, 81);
			this->txt_isInside->Name = L"txt_isInside";
			this->txt_isInside->Size = System::Drawing::Size(168, 20);
			this->txt_isInside->TabIndex = 107;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(813, 83);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 13);
			this->label17->TabIndex = 106;
			this->label17->Text = L"Est� adentro";
			// 
			// txt_gender
			// 
			this->txt_gender->Location = System::Drawing::Point(897, 29);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->Size = System::Drawing::Size(168, 20);
			this->txt_gender->TabIndex = 105;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(813, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 104;
			this->label13->Text = L"G�nero";
			// 
			// txt_occupation
			// 
			this->txt_occupation->Location = System::Drawing::Point(897, 3);
			this->txt_occupation->Name = L"txt_occupation";
			this->txt_occupation->Size = System::Drawing::Size(168, 20);
			this->txt_occupation->TabIndex = 103;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(813, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 102;
			this->label14->Text = L"Cargo";
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(897, 55);
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(168, 20);
			this->txt_age->TabIndex = 101;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(813, 57);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 13);
			this->label15->TabIndex = 100;
			this->label15->Text = L"Edad";
			// 
			// txt_permission
			// 
			this->txt_permission->Location = System::Drawing::Point(621, 83);
			this->txt_permission->Name = L"txt_permission";
			this->txt_permission->Size = System::Drawing::Size(168, 20);
			this->txt_permission->TabIndex = 99;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(563, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 98;
			this->label16->Text = L"Permiso";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(621, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 97;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(563, 61);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 96;
			this->label12->Text = L"Contacto";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(621, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 95;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(563, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 94;
			this->label11->Text = L"Correo";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(621, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 20);
			this->textBox4->TabIndex = 91;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(563, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 90;
			this->label8->Text = L"C�digo";
			// 
			// MantUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 458);
			this->Controls->Add(this->txt_isInside);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_occupation);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_permission);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Person_DGV);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_userType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->txt_userID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantUser";
			this->Text = L"MantUser";
			this->Load += gcnew System::EventHandler(this, &MantUser::MantUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//A�ADIR
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
}
private: System::Void Person_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MantUser_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
