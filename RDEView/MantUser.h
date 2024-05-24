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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_mail;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_dni;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_code;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::Label^ label1;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Person_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_dni = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(213, 86);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantUser::button1_Click);
			// 
			// Person_DGV
			// 
			this->Person_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Person_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->Person_DGV->Location = System::Drawing::Point(6, 128);
			this->Person_DGV->Name = L"Person_DGV";
			this->Person_DGV->RowHeadersWidth = 62;
			this->Person_DGV->Size = System::Drawing::Size(649, 289);
			this->Person_DGV->TabIndex = 44;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
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
			// Column6
			// 
			this->Column6->HeaderText = L"Contraseña";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(335, 53);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(168, 20);
			this->txt_password->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(231, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Contraseña";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(335, 27);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(168, 20);
			this->txt_phone->TabIndex = 41;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(231, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Fecha de Registro";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(335, 1);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(168, 20);
			this->txt_mail->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(231, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Tipo de Usuario";
			// 
			// txt_dni
			// 
			this->txt_dni->Location = System::Drawing::Point(45, 54);
			this->txt_dni->Name = L"txt_dni";
			this->txt_dni->Size = System::Drawing::Size(168, 20);
			this->txt_dni->TabIndex = 37;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"ID";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(45, 28);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(168, 20);
			this->txt_code->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Estado";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(45, 2);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(168, 20);
			this->txt_name->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Nombre";
			// 
			// MantUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 409);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Person_DGV);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_dni);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MantUser";
			this->Text = L"MantUser";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
