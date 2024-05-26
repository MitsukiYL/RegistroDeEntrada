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
	/// Resumen de MantAdmin
	/// </summary>
	public ref class MantAdmin : public System::Windows::Forms::Form
	{
	public:
		MantAdmin(void)
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
		~MantAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_password;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_ID;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ Admin_DGV;









	private: System::Windows::Forms::TextBox^ txt_expirationDate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_registrationDate;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_contractID;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_area;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_type;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_code;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_DNI;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_name;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_mail;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_phone;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_gender;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_occupation;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_age;

	private: System::Windows::Forms::Label^ label15;






	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::CheckBox^ check_IsInside;

private: System::Windows::Forms::CheckBox^ check_perm;

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
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Admin_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_expirationDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_contractID = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_area = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_occupation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->check_IsInside = (gcnew System::Windows::Forms::CheckBox());
			this->check_perm = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Admin_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(661, 86);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(168, 20);
			this->txt_password->TabIndex = 71;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(594, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Contraseña";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(107, 8);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(168, 20);
			this->txt_ID->TabIndex = 69;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 68;
			this->label8->Text = L"ID de Admin";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(231, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 67;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantAdmin::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 66;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantAdmin::button1_Click);
			// 
			// Admin_DGV
			// 
			this->Admin_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Admin_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->Column1, this->Column3,
					this->Column4, this->Column5, this->Column7, this->Column8, this->Column9, this->Column2, this->Column10, this->Column11, this->Column12,
					this->Column6, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17
			});
			this->Admin_DGV->Location = System::Drawing::Point(12, 177);
			this->Admin_DGV->Name = L"Admin_DGV";
			this->Admin_DGV->RowHeadersWidth = 62;
			this->Admin_DGV->Size = System::Drawing::Size(1116, 289);
			this->Admin_DGV->TabIndex = 64;
			this->Admin_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantAdmin::Admin_DGV_CellClick);
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
			this->Column3->HeaderText = L"Area";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
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
			// Column7
			// 
			this->Column7->HeaderText = L"Fecha de Expiracion";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nro de Contrato";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"DNI";
			this->Column9->Name = L"Column9";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Código";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Correo";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Contacto";
			this->Column12->Name = L"Column12";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Contraseña";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Permiso";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Cargo";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Género";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Edad";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Está Adentro";
			this->Column17->Name = L"Column17";
			// 
			// txt_expirationDate
			// 
			this->txt_expirationDate->Location = System::Drawing::Point(401, 8);
			this->txt_expirationDate->Name = L"txt_expirationDate";
			this->txt_expirationDate->Size = System::Drawing::Size(168, 20);
			this->txt_expirationDate->TabIndex = 63;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(297, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Fecha de Expiracion";
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(107, 91);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(168, 20);
			this->txt_registrationDate->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Fecha de Registro";
			// 
			// txt_contractID
			// 
			this->txt_contractID->Location = System::Drawing::Point(401, 34);
			this->txt_contractID->Name = L"txt_contractID";
			this->txt_contractID->Size = System::Drawing::Size(168, 20);
			this->txt_contractID->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(297, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Nro de Contrato";
			// 
			// txt_area
			// 
			this->txt_area->Location = System::Drawing::Point(107, 34);
			this->txt_area->Name = L"txt_area";
			this->txt_area->Size = System::Drawing::Size(168, 20);
			this->txt_area->TabIndex = 57;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Area";
			// 
			// txt_type
			// 
			this->txt_type->Location = System::Drawing::Point(107, 60);
			this->txt_type->Name = L"txt_type";
			this->txt_type->Size = System::Drawing::Size(168, 20);
			this->txt_type->TabIndex = 55;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Tipo";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(661, 8);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(168, 20);
			this->txt_code->TabIndex = 53;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(603, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Código";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(401, 60);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(168, 20);
			this->txt_DNI->TabIndex = 75;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(297, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 74;
			this->label9->Text = L"DNI";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(401, 86);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(168, 20);
			this->txt_name->TabIndex = 73;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(297, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 72;
			this->label10->Text = L"Nombre";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(661, 34);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(168, 20);
			this->txt_mail->TabIndex = 77;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(603, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 76;
			this->label11->Text = L"Correo";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(661, 60);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(168, 20);
			this->txt_phone->TabIndex = 79;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(603, 67);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 78;
			this->label12->Text = L"Contacto";
			// 
			// txt_gender
			// 
			this->txt_gender->Location = System::Drawing::Point(937, 34);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->Size = System::Drawing::Size(168, 20);
			this->txt_gender->TabIndex = 87;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(853, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 86;
			this->label13->Text = L"Género";
			// 
			// txt_occupation
			// 
			this->txt_occupation->Location = System::Drawing::Point(937, 8);
			this->txt_occupation->Name = L"txt_occupation";
			this->txt_occupation->Size = System::Drawing::Size(168, 20);
			this->txt_occupation->TabIndex = 85;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(853, 14);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 84;
			this->label14->Text = L"Cargo";
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(937, 60);
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(168, 20);
			this->txt_age->TabIndex = 83;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(853, 62);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 13);
			this->label15->TabIndex = 82;
			this->label15->Text = L"Edad";
			// 
			// check_IsInside
			// 
			this->check_IsInside->AutoSize = true;
			this->check_IsInside->Location = System::Drawing::Point(968, 91);
			this->check_IsInside->Name = L"check_IsInside";
			this->check_IsInside->Size = System::Drawing::Size(87, 17);
			this->check_IsInside->TabIndex = 89;
			this->check_IsInside->Text = L"Está Adentro";
			this->check_IsInside->UseVisualStyleBackColor = true;
			// 
			// check_perm
			// 
			this->check_perm->AutoSize = true;
			this->check_perm->Location = System::Drawing::Point(855, 91);
			this->check_perm->Name = L"check_perm";
			this->check_perm->Size = System::Drawing::Size(63, 17);
			this->check_perm->TabIndex = 90;
			this->check_perm->Text = L"Permiso";
			this->check_perm->UseVisualStyleBackColor = true;
			// 
			// MantAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 478);
			this->Controls->Add(this->check_perm);
			this->Controls->Add(this->check_IsInside);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_occupation);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Admin_DGV);
			this->Controls->Add(this->txt_expirationDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_registrationDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_contractID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_area);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_type);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantAdmin";
			this->Text = L"MantAdmin";
			this->Load += gcnew System::EventHandler(this, &MantAdmin::MantAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Admin_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR

		int adminID = Convert::ToInt32(this->txt_ID->Text);
		String^ area = this->txt_area->Text;
		String^ adminType = this->txt_type->Text;
		int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
		int expirationDate = Convert::ToInt32(this->txt_expirationDate->Text);
		int contractID = Convert::ToInt32(this->txt_contractID->Text);
		int personDNI = Convert::ToInt32(this->txt_DNI->Text);
		String^ name = this->txt_name->Text;
		int code = Convert::ToInt32(this->txt_code->Text);
		String^ mail = this->txt_mail->Text;
		String^ phone = this->txt_phone->Text;
		String^ password = this->txt_password->Text;
		bool permission = this->check_perm->Checked;
		String^ occupation = this->txt_occupation->Text;
		String^ gender = this->txt_gender->Text;
		int age = Convert::ToInt32(this->txt_age->Text);
		bool isInside = this->check_IsInside->Checked;

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
		objAdminCtrl->agregarAdmin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
		txt_ID->Clear();

		List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
		mostrarGrilla(listaAdmin);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int adminID = Convert::ToInt32(this->txt_ID->Text);
	String^ area = this->txt_area->Text;
	String^ adminType = this->txt_type->Text;
	int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
	int expirationDate = Convert::ToInt32(this->txt_expirationDate->Text);
	int contractID = Convert::ToInt32(this->txt_contractID->Text);
	int personDNI = Convert::ToInt32(this->txt_DNI->Text);
	String^ name = this->txt_name->Text;
	int code = Convert::ToInt32(this->txt_code->Text);
	String^ mail = this->txt_mail->Text;
	String^ phone = this->txt_phone->Text;
	String^ password = this->txt_password->Text;
	bool permission = this->check_perm->Checked;
	String^ occupation = this->txt_occupation->Text;
	String^ gender = this->txt_gender->Text;
	int age = Convert::ToInt32(this->txt_age->Text);
	bool isInside = this->check_IsInside->Checked;

	List<workHours^>^ listWorkHours = gcnew List<workHours^>();

	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	objAdminCtrl->actualizarAdmin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	txt_ID->Clear();

	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
	mostrarGrilla(listaAdmin);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->Admin_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEliminar = Convert::ToInt32(this->Admin_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	objAdminCtrl->eliminarAdmin(codigoEliminar);
	MessageBox::Show("El administrador seleccionada ha sido eliminado correctamente");
	this->Admin_DGV->Rows->Clear();

	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
	mostrarGrilla(listaAdmin);
}
private: System::Void MantAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();

	mostrarGrilla(listaAdmin);
}
private: void mostrarGrilla(List<admin^>^ listAdm) {
	 this->Admin_DGV->Rows->Clear();
	for (int i = 0; i < listAdm->Count; i++) {
		admin^ objAdm = listAdm[i];
		array<String^>^ filaGrilla = gcnew array<String^>(17);
		filaGrilla[0] = Convert::ToString(objAdm->getAdminID());
		filaGrilla[1] = objAdm->getArea();
		filaGrilla[2] = objAdm->getAdminType();
		filaGrilla[3] = Convert::ToString(objAdm->getRegistrationDate());
		filaGrilla[4] = Convert::ToString(objAdm->getExpirationDate());
		filaGrilla[5] = Convert::ToString(objAdm->getContractID());
		filaGrilla[6] = Convert::ToString(objAdm->getDNI());
		filaGrilla[7] = objAdm->getName();
		filaGrilla[8] = Convert::ToString(objAdm->getCode());
		filaGrilla[9] = objAdm->getMail();
		filaGrilla[10] = objAdm->getPhone();
		filaGrilla[11] = objAdm->getPassword();
		filaGrilla[12] = Convert::ToString(objAdm->getPermission());
		filaGrilla[13] = objAdm->getOccupation();
		filaGrilla[14] = objAdm->getGender();
		filaGrilla[15] = Convert::ToString(objAdm->getAge());
		filaGrilla[16] = Convert::ToString(objAdm->getIsInside());
		this->Admin_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void Admin_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int AdminID = Int32::Parse(Admin_DGV->Rows[Admin_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	admin^ Admin = objAdminCtrl->BuscarAdminxID(AdminID);
	if (Admin != nullptr) {
		this->txt_ID->Text = Convert::ToString(Admin->getAdminID());
		this->txt_area->Text = Admin->getArea();
		this->txt_type->Text = Admin->getAdminType();
		this->txt_registrationDate->Text = Convert::ToString(Admin->getRegistrationDate());
		this->txt_expirationDate->Text = Convert::ToString(Admin->getExpirationDate());
		this->txt_contractID->Text = Convert::ToString(Admin->getContractID());
		this->txt_DNI->Text = Convert::ToString(Admin->getDNI());
		this->txt_name->Text = Admin->name;
		this->txt_code->Text = Convert::ToString(Admin->code);
		this->txt_mail->Text = Admin->mail;
		this->txt_phone->Text = Admin->phone;
		this->txt_password->Text = Admin->password;
		this->check_perm->Checked = Admin->permission;
		this->txt_occupation->Text = Admin->occupation;
		this->txt_gender->Text = Admin->gender;
		this->txt_age->Text = Convert::ToString(Admin->age);
		this->check_IsInside->Checked = Admin->isInside;
	}
}
};
}
