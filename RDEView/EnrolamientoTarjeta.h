#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EnrolamientoTarjeta
	/// </summary>
	public ref class EnrolamientoTarjeta : public System::Windows::Forms::Form
	{
	public:
		EnrolamientoTarjeta(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnrolamientoTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ combox_permType;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ combox_occupation;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->combox_permType = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->combox_occupation = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// combox_permType
			// 
			this->combox_permType->FormattingEnabled = true;
			this->combox_permType->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Alumno", L"Jefe de Práctica", L"Docente",
					L"Coordinador", L"Personal Administrativo", L"Personal de Seguridad", L"Personal de Mantenimiento", L"Otros"
			});
			this->combox_permType->Location = System::Drawing::Point(135, 128);
			this->combox_permType->Name = L"combox_permType";
			this->combox_permType->Size = System::Drawing::Size(121, 21);
			this->combox_permType->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Cargo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de Permiso";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 166);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(252, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(15, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(16, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Tarjeta";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(135, 276);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 276);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"ID";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(135, 250);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Código";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 32);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Continuar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnrolamientoTarjeta::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(19, 313);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 17);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Confirmar";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// combox_occupation
			// 
			this->combox_occupation->FormattingEnabled = true;
			this->combox_occupation->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Alumno", L"Jefe de Práctica", L"Docente",
					L"Coordinador", L"Personal Administrativo", L"Personal de Seguridad", L"Personal de Mantenimiento", L"Otros"
			});
			this->combox_occupation->Location = System::Drawing::Point(135, 99);
			this->combox_occupation->Name = L"combox_occupation";
			this->combox_occupation->Size = System::Drawing::Size(121, 21);
			this->combox_occupation->TabIndex = 19;
			// 
			// EnrolamientoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 396);
			this->Controls->Add(this->combox_occupation);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->combox_permType);
			this->Name = L"EnrolamientoTarjeta";
			this->Text = L"EnrolamientoTarjeta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			MessageBox::Show("Tarjeta enlazada correctamente");
		}
		else {
			MessageBox::Show("Datos incorrectos");
		}
	}
};
}
