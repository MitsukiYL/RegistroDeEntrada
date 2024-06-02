#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MantRequest
	/// </summary>
	public ref class MantRequest : public System::Windows::Forms::Form
	{
	public:
		MantRequest(void)
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
		~MantRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ check_perm;
	protected:
	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ Card_DGV;








	private: System::Windows::Forms::TextBox^ txt_cardID;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::TextBox^ txt_emmDate;

	private: System::Windows::Forms::TextBox^ txt_Type;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;










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
			this->check_perm = (gcnew System::Windows::Forms::CheckBox());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Card_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->txt_cardID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_emmDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_Type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// check_perm
			// 
			this->check_perm->AutoSize = true;
			this->check_perm->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_perm->Location = System::Drawing::Point(15, 92);
			this->check_perm->Name = L"check_perm";
			this->check_perm->Size = System::Drawing::Size(63, 17);
			this->check_perm->TabIndex = 116;
			this->check_perm->Text = L"Permiso";
			this->check_perm->UseVisualStyleBackColor = true;
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_active->Location = System::Drawing::Point(286, 92);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(56, 17);
			this->check_active->TabIndex = 115;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(400, 67);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(168, 20);
			this->txt_user->TabIndex = 114;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(296, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 113;
			this->label9->Text = L"Usuario";
			// 
			// Card_DGV
			// 
			this->Card_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Card_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column2, this->Column5,
					this->Column6, this->Column4, this->Column8, this->Column1, this->Column3
			});
			this->Card_DGV->Location = System::Drawing::Point(15, 182);
			this->Card_DGV->Margin = System::Windows::Forms::Padding(2);
			this->Card_DGV->Name = L"Card_DGV";
			this->Card_DGV->RowHeadersWidth = 62;
			this->Card_DGV->RowTemplate->Height = 28;
			this->Card_DGV->Size = System::Drawing::Size(807, 213);
			this->Card_DGV->TabIndex = 112;
			// 
			// txt_cardID
			// 
			this->txt_cardID->Location = System::Drawing::Point(122, 14);
			this->txt_cardID->Name = L"txt_cardID";
			this->txt_cardID->Size = System::Drawing::Size(168, 20);
			this->txt_cardID->TabIndex = 111;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 110;
			this->label8->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(224, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 109;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantRequest::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 108;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantRequest::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 107;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantRequest::button1_Click);
			// 
			// txt_emmDate
			// 
			this->txt_emmDate->Location = System::Drawing::Point(400, 10);
			this->txt_emmDate->Name = L"txt_emmDate";
			this->txt_emmDate->Size = System::Drawing::Size(168, 20);
			this->txt_emmDate->TabIndex = 102;
			// 
			// txt_Type
			// 
			this->txt_Type->Location = System::Drawing::Point(122, 64);
			this->txt_Type->Name = L"txt_Type";
			this->txt_Type->Size = System::Drawing::Size(168, 20);
			this->txt_Type->TabIndex = 100;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(296, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(296, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 118;
			this->label1->Text = L"Nuevo Cargo";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(400, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 117;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 120;
			this->label3->Text = L"Fecha de Emision";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 119;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 13);
			this->label4->TabIndex = 121;
			this->label4->Text = L"Fecha de Respuesta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(571, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 123;
			this->label5->Text = L"Comentario";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(648, 11);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(174, 96);
			this->richTextBox1->TabIndex = 124;
			this->richTextBox1->Text = L"";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Emision";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Fecha de Respuesta";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nuevo Cargo";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Usuario";
			this->Column1->Name = L"Column1";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Comentario";
			this->Column3->Name = L"Column3";
			// 
			// MantRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 410);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->check_perm);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Card_DGV);
			this->Controls->Add(this->txt_cardID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_emmDate);
			this->Controls->Add(this->txt_Type);
			this->Controls->Add(this->label2);
			this->Name = L"MantRequest";
			this->Text = L"MantRequest";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
}
};
}
