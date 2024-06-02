#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RDEReg
	/// </summary>
	public ref class RDEReg : public System::Windows::Forms::Form
	{
	public:
		RDEReg(void)
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
		~RDEReg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_code;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_mail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_password;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_DNI;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese sus datos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre de usuario:";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(115, 44);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(100, 20);
			this->txt_name->TabIndex = 2;
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(115, 77);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(100, 20);
			this->txt_code->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Código:";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(115, 134);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(100, 20);
			this->txt_mail->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Correo:";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(115, 160);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(100, 20);
			this->txt_password->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Contraseña:";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(115, 103);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(100, 20);
			this->txt_DNI->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Dni:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RDEReg::button1_Click);
			// 
			// RDEReg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RDEReg";
			this->Text = L"RDEReg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
