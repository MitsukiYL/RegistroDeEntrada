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
	using namespace System::IO;

	/// <summary>
	/// Summary for InterfaceSolUser
	/// </summary>
	public ref class InterfaceSolUser : public System::Windows::Forms::Form
	{
	public:
		InterfaceSolUser(void)
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
		~InterfaceSolUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_user;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::RichTextBox^ rtxt_comment;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ combox_type;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ combox_occupation;

	protected:


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
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rtxt_comment = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->combox_type = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->combox_occupation = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(124, 59);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(174, 20);
			this->txt_user->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"DNI";
			// 
			// rtxt_comment
			// 
			this->rtxt_comment->Location = System::Drawing::Point(124, 162);
			this->rtxt_comment->Name = L"rtxt_comment";
			this->rtxt_comment->Size = System::Drawing::Size(174, 96);
			this->rtxt_comment->TabIndex = 126;
			this->rtxt_comment->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 125;
			this->label5->Text = L"Comentario";
			// 
			// combox_type
			// 
			this->combox_type->FormattingEnabled = true;
			this->combox_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo Cargo", L"Nueva Tarjeta", L"Otro" });
			this->combox_type->Location = System::Drawing::Point(124, 85);
			this->combox_type->Name = L"combox_type";
			this->combox_type->Size = System::Drawing::Size(174, 21);
			this->combox_type->TabIndex = 131;
			this->combox_type->TextChanged += gcnew System::EventHandler(this, &InterfaceSolUser::combox_type_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 129;
			this->label4->Text = L"Nuevo Cargo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 127;
			this->label6->Text = L"Tipo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(107, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 33);
			this->button1->TabIndex = 132;
			this->button1->Text = L"Crear solicitud";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceSolUser::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 13);
			this->label2->TabIndex = 133;
			this->label2->Text = L"Coloque los datos de su solicitud :";
			// 
			// combox_occupation
			// 
			this->combox_occupation->Enabled = false;
			this->combox_occupation->FormattingEnabled = true;
			this->combox_occupation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Estudiante", L"Jefe de Práctica", L"Docente",
					L"Personal Académico", L"Personal Administrativo", L"Personal de Mantenimiento", L"Administrador"
			});
			this->combox_occupation->Location = System::Drawing::Point(124, 112);
			this->combox_occupation->Name = L"combox_occupation";
			this->combox_occupation->Size = System::Drawing::Size(174, 21);
			this->combox_occupation->TabIndex = 134;
			// 
			// InterfaceSolUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 317);
			this->Controls->Add(this->combox_occupation);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->combox_type);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->rtxt_comment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_user);
			this->Name = L"InterfaceSolUser";
			this->Text = L"InterfaceSolUser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		DateTimeHelper^ objDateTimeHelper = gcnew DateTimeHelper();

		int DNI = Convert::ToInt32(this->txt_user->Text);
		int emissionDate = Convert::ToInt32(objDateTimeHelper->fechaActual());
		int responseDate = 0; //Se modifica en otra interfaz
		String^ type = this->combox_type->Text;
		String^ newoccupation = this->combox_occupation->Text;
		String^ comment = this->rtxt_comment->Text;
		bool active = true;
		user^ objUser = objUserCtrl->buscarUserxPersonDNI(DNI);

		List<request^>^ listaRequest = objRequestCtrl->buscarRequestAll();

		int IDnew = 1, val = 1;

		while (val) {
			val = 0;
			for (int i = 0; i < listaRequest->Count; i++) {
				if (listaRequest[i]->getID() == IDnew) {
					val = 1;
					break;
				}
			}
			if (!val) { break; }
			IDnew++;
		}
		
		objRequestCtrl->agregarNewRequest(IDnew, emissionDate, responseDate, type, newoccupation, comment, active, objUser);
		
	}
private: System::Void combox_type_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ txt = this->combox_type->Text;
	if (txt == "Nuevo Cargo") {
		this->combox_occupation->Enabled = true;
	}
	else{
		this->combox_occupation->Enabled = false;
		this->combox_occupation->Text = "";
	}
}
};
}
