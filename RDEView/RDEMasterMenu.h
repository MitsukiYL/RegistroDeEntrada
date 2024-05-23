#pragma once

#include "InterfaceInscription.h"
#include "InterfaceProfile.h"
#include "InterfaceRequest.h"
#include "InterfaceRDE.h"
#include "MantPerson.h"
#include "MantVehicles.h"
#include "MantUser.h"


namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RDEMasterMenu
	/// </summary>
	public ref class RDEMasterMenu : public System::Windows::Forms::Form
	{
	public:
		RDEMasterMenu(void)
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
		~RDEMasterMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ xdToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ xdToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilDeUsuarioToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vehiculosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zonasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ playasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ puertasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ motoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ interfacesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ men�DeInscripci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ men�DePeticionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroDeEntradaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->xdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�DeInscripci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->men�DePeticionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDeEntradaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xdToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vehiculosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zonasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puertasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->motoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->interfacesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->xdToolStripMenuItem,
					this->xdToolStripMenuItem3, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1167, 35);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// xdToolStripMenuItem
			// 
			this->xdToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->perfilDeUsuarioToolStripMenuItem,
					this->men�DeInscripci�nToolStripMenuItem, this->men�DePeticionesToolStripMenuItem, this->registroDeEntradaToolStripMenuItem
			});
			this->xdToolStripMenuItem->Name = L"xdToolStripMenuItem";
			this->xdToolStripMenuItem->Size = System::Drawing::Size(104, 29);
			this->xdToolStripMenuItem->Text = L"Interfaces";
			this->xdToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::xdToolStripMenuItem_Click);
			// 
			// perfilDeUsuarioToolStripMenuItem
			// 
			this->perfilDeUsuarioToolStripMenuItem->Name = L"perfilDeUsuarioToolStripMenuItem";
			this->perfilDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->perfilDeUsuarioToolStripMenuItem->Text = L"Perfil de Usuario";
			this->perfilDeUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::perfilDeUsuarioToolStripMenuItem_Click);
			// 
			// men�DeInscripci�nToolStripMenuItem
			// 
			this->men�DeInscripci�nToolStripMenuItem->Name = L"men�DeInscripci�nToolStripMenuItem";
			this->men�DeInscripci�nToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->men�DeInscripci�nToolStripMenuItem->Text = L"Men� de inscripci�n";
			this->men�DeInscripci�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::men�DeInscripci�nToolStripMenuItem_Click);
			// 
			// men�DePeticionesToolStripMenuItem
			// 
			this->men�DePeticionesToolStripMenuItem->Name = L"men�DePeticionesToolStripMenuItem";
			this->men�DePeticionesToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->men�DePeticionesToolStripMenuItem->Text = L"Men� de peticiones";
			this->men�DePeticionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::men�DePeticionesToolStripMenuItem_Click);
			// 
			// registroDeEntradaToolStripMenuItem
			// 
			this->registroDeEntradaToolStripMenuItem->Name = L"registroDeEntradaToolStripMenuItem";
			this->registroDeEntradaToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->registroDeEntradaToolStripMenuItem->Text = L"Registro de Entrada";
			this->registroDeEntradaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::registroDeEntradaToolStripMenuItem_Click);
			// 
			// xdToolStripMenuItem3
			// 
			this->xdToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->usuariosToolStripMenuItem,
					this->vehiculosToolStripMenuItem, this->personasToolStripMenuItem, this->zonasToolStripMenuItem, this->estacionamientosToolStripMenuItem,
					this->playasToolStripMenuItem, this->tarjetasToolStripMenuItem, this->sensoresToolStripMenuItem, this->puertasToolStripMenuItem,
					this->motoresToolStripMenuItem, this->interfacesToolStripMenuItem, this->administradoresToolStripMenuItem
			});
			this->xdToolStripMenuItem3->Name = L"xdToolStripMenuItem3";
			this->xdToolStripMenuItem3->Size = System::Drawing::Size(156, 29);
			this->xdToolStripMenuItem3->Text = L"Mantenimientos";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->usuariosToolStripMenuItem->Text = L"Personas";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::usuariosToolStripMenuItem_Click);
			// 
			// vehiculosToolStripMenuItem
			// 
			this->vehiculosToolStripMenuItem->Name = L"vehiculosToolStripMenuItem";
			this->vehiculosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->vehiculosToolStripMenuItem->Text = L"Vehiculos";
			this->vehiculosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::vehiculosToolStripMenuItem_Click);
			// 
			// personasToolStripMenuItem
			// 
			this->personasToolStripMenuItem->Name = L"personasToolStripMenuItem";
			this->personasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->personasToolStripMenuItem->Text = L"Usuarios";
			this->personasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::personasToolStripMenuItem_Click);
			// 
			// zonasToolStripMenuItem
			// 
			this->zonasToolStripMenuItem->Name = L"zonasToolStripMenuItem";
			this->zonasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->zonasToolStripMenuItem->Text = L"Zonas";
			// 
			// estacionamientosToolStripMenuItem
			// 
			this->estacionamientosToolStripMenuItem->Name = L"estacionamientosToolStripMenuItem";
			this->estacionamientosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->estacionamientosToolStripMenuItem->Text = L"Estacionamientos";
			// 
			// playasToolStripMenuItem
			// 
			this->playasToolStripMenuItem->Name = L"playasToolStripMenuItem";
			this->playasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->playasToolStripMenuItem->Text = L"Playas";
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			// 
			// puertasToolStripMenuItem
			// 
			this->puertasToolStripMenuItem->Name = L"puertasToolStripMenuItem";
			this->puertasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->puertasToolStripMenuItem->Text = L"Puertas";
			// 
			// motoresToolStripMenuItem
			// 
			this->motoresToolStripMenuItem->Name = L"motoresToolStripMenuItem";
			this->motoresToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->motoresToolStripMenuItem->Text = L"Motores";
			// 
			// interfacesToolStripMenuItem
			// 
			this->interfacesToolStripMenuItem->Name = L"interfacesToolStripMenuItem";
			this->interfacesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->interfacesToolStripMenuItem->Text = L"Interfaces";
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(61, 29);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::salirToolStripMenuItem_Click);
			// 
			// RDEMasterMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1167, 651);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"RDEMasterMenu";
			this->Text = L"RDEMasterMenu";
			this->Load += gcnew System::EventHandler(this, &RDEMasterMenu::RDEMasterMenu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void perfilDeUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceProfile^ profileform = gcnew InterfaceProfile();
	profileform->Show();
}
private: System::Void men�DeInscripci�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceInscription^ inscriptionform = gcnew InterfaceInscription();
	inscriptionform->Show();
}
private: System::Void men�DePeticionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceRequest^ requestform = gcnew InterfaceRequest();
	requestform->Show();
}
private: System::Void registroDeEntradaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceRDE^ rdeform = gcnew InterfaceRDE();
	rdeform->Show();
}
private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantPerson^ mantpersonform = gcnew MantPerson();
	mantpersonform->Show();
}
private: System::Void vehiculosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantVehicles^ mantvehiclesform = gcnew MantVehicles();
	mantvehiclesform->Show();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void RDEMasterMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void xdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void personasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantUser^ mantuser = gcnew MantUser();
	mantuser->Show();

}
};
}
