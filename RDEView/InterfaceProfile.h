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
	/// Resumen de InterfaceProfile
	/// </summary>
	public ref class InterfaceProfile : public System::Windows::Forms::Form
	{
	public:
		InterfaceProfile(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InterfaceProfile(user^ objUser)
		{
			InitializeComponent();
			this->objUser = objUser;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InterfaceProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: user^ objUser;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label_code;
	private: System::Windows::Forms::Label^ label_occ;


	private: System::Windows::Forms::Label^ label_mail;

	private: System::Windows::Forms::Label^ label_dni;

	private: System::Windows::Forms::Label^ label_name;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_parkingsite;

	private: System::Windows::Forms::Label^ label8;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label_code = (gcnew System::Windows::Forms::Label());
			this->label_occ = (gcnew System::Windows::Forms::Label());
			this->label_mail = (gcnew System::Windows::Forms::Label());
			this->label_dni = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_parkingsite = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(13, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(13, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(13, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(13, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ocupación:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(13, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Código:";
			// 
			// label_code
			// 
			this->label_code->AutoSize = true;
			this->label_code->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_code->Location = System::Drawing::Point(164, 66);
			this->label_code->Name = L"label_code";
			this->label_code->Size = System::Drawing::Size(40, 17);
			this->label_code->TabIndex = 10;
			this->label_code->Text = L"0000";
			// 
			// label_occ
			// 
			this->label_occ->AutoSize = true;
			this->label_occ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_occ->Location = System::Drawing::Point(164, 140);
			this->label_occ->Name = L"label_occ";
			this->label_occ->Size = System::Drawing::Size(55, 17);
			this->label_occ->TabIndex = 9;
			this->label_occ->Text = L"Alumno";
			// 
			// label_mail
			// 
			this->label_mail->AutoSize = true;
			this->label_mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_mail->Location = System::Drawing::Point(164, 115);
			this->label_mail->Name = L"label_mail";
			this->label_mail->Size = System::Drawing::Size(142, 17);
			this->label_mail->TabIndex = 8;
			this->label_mail->Text = L"correo@pucp.edu.pe";
			// 
			// label_dni
			// 
			this->label_dni->AutoSize = true;
			this->label_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_dni->Location = System::Drawing::Point(164, 89);
			this->label_dni->Name = L"label_dni";
			this->label_dni->Size = System::Drawing::Size(40, 17);
			this->label_dni->TabIndex = 7;
			this->label_dni->Text = L"1111";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_name->Location = System::Drawing::Point(164, 44);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(51, 17);
			this->label_name->TabIndex = 6;
			this->label_name->Text = L"Mitsuki";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(461, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Actualizar datos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::CadetBlue;
			this->pictureBox1->Location = System::Drawing::Point(477, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 104);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label_parkingsite
			// 
			this->label_parkingsite->AutoSize = true;
			this->label_parkingsite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_parkingsite->Location = System::Drawing::Point(164, 164);
			this->label_parkingsite->Name = L"label_parkingsite";
			this->label_parkingsite->Size = System::Drawing::Size(55, 17);
			this->label_parkingsite->TabIndex = 14;
			this->label_parkingsite->Text = L"Alumno";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(13, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Estacionamiento:";
			// 
			// InterfaceProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 337);
			this->Controls->Add(this->label_parkingsite);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_code);
			this->Controls->Add(this->label_occ);
			this->Controls->Add(this->label_mail);
			this->Controls->Add(this->label_dni);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InterfaceProfile";
			this->Text = L"Perfil de usuario";
			this->Load += gcnew System::EventHandler(this, &InterfaceProfile::InterfaceProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceProfile_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->objUser != nullptr) {
			this->label_name->Text = this->objUser->getPerson()->getName();
			this->label_dni->Text = Convert::ToString(this->objUser->getPerson()->getDNI());
		}
	}
};
}
