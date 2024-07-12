#pragma once

#include "InterfaceInscription.h"
#include "InterfaceProfile.h"
#include "InterfaceRDE.h"
#include "MantPerson.h"
#include "MantVehicles.h"
#include "MantUser.h"
#include "MantParkingSite.h"
#include "MantZone.h"
#include "MantCard.h"
#include "MantSensor.h"
#include "MantParkingLot.h"
#include "MantAdmin.h"
#include "EnrolamientoTarjeta.h"
#include "MantRequest.h"
#include "InterfaceSolUser.h"
#include "InterfaceSolAdmin.h"
#include "ReporteDoorRegisterxCard.h"
#include "ReportePlayaxEstacionamiento.h"
#include "ReporteDoorRegisterxDay.h"
#include "ReporteDoorRegisterxDoor.h"
#include "PruebaComSerial.h"
#include "ReporteParkingSitexZone.h"

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
	/// Resumen de RDEMasterMenu
	/// </summary>
	public ref class RDEMasterMenu : public System::Windows::Forms::Form
	{
	public:
		RDEMasterMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		RDEMasterMenu(user^ objUser)
//------------------------------------------------MODO USUARIO------------------------------------------------
		{
			InitializeComponent();
			this->objUser= objUser;
			this->MantToolStripMenuItem->Visible = false;
			this->reportesToolStripMenuItem->Visible = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: user^ objUser;
	private: System::Windows::Forms::ToolStripMenuItem^ InterfaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ MantToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilDeUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vehiculosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zonasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ playasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ registroDeEntradaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enrolamientoDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solicitudesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solicitudDeUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ revisiónDeSolicitudesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientosXPlayaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroDePuertaXDiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroDePuertaXPuertaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pruebaComSerialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientoXZonaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->InterfaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDeEntradaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enrolamientoDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitudDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revisiónDeSolicitudesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pruebaComSerialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MantToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitudesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vehiculosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zonasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientosXPlayaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDePuertaXDiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDePuertaXPuertaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientoXZonaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->InterfaceToolStripMenuItem,
					this->MantToolStripMenuItem, this->reportesToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1037, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// InterfaceToolStripMenuItem
			// 
			this->InterfaceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->perfilDeUsuarioToolStripMenuItem,
					this->registroDeEntradaToolStripMenuItem, this->enrolamientoDeToolStripMenuItem, this->solicitudDeUsuarioToolStripMenuItem, this->revisiónDeSolicitudesToolStripMenuItem,
					this->pruebaComSerialToolStripMenuItem
			});
			this->InterfaceToolStripMenuItem->Name = L"InterfaceToolStripMenuItem";
			this->InterfaceToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->InterfaceToolStripMenuItem->Text = L"Interfaces";
			this->InterfaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::xdToolStripMenuItem_Click);
			// 
			// perfilDeUsuarioToolStripMenuItem
			// 
			this->perfilDeUsuarioToolStripMenuItem->Name = L"perfilDeUsuarioToolStripMenuItem";
			this->perfilDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->perfilDeUsuarioToolStripMenuItem->Text = L"Perfil de Usuario";
			this->perfilDeUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::perfilDeUsuarioToolStripMenuItem_Click);
			// 
			// registroDeEntradaToolStripMenuItem
			// 
			this->registroDeEntradaToolStripMenuItem->Name = L"registroDeEntradaToolStripMenuItem";
			this->registroDeEntradaToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->registroDeEntradaToolStripMenuItem->Text = L"Registro de Entrada";
			this->registroDeEntradaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::registroDeEntradaToolStripMenuItem_Click);
			// 
			// enrolamientoDeToolStripMenuItem
			// 
			this->enrolamientoDeToolStripMenuItem->Name = L"enrolamientoDeToolStripMenuItem";
			this->enrolamientoDeToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->enrolamientoDeToolStripMenuItem->Text = L"Enrolamiento de Tarjeta";
			this->enrolamientoDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::enrolamientoDeToolStripMenuItem_Click);
			// 
			// solicitudDeUsuarioToolStripMenuItem
			// 
			this->solicitudDeUsuarioToolStripMenuItem->Name = L"solicitudDeUsuarioToolStripMenuItem";
			this->solicitudDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->solicitudDeUsuarioToolStripMenuItem->Text = L"Solicitud de Usuario";
			this->solicitudDeUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::solicitudDeUsuarioToolStripMenuItem_Click);
			// 
			// revisiónDeSolicitudesToolStripMenuItem
			// 
			this->revisiónDeSolicitudesToolStripMenuItem->Name = L"revisiónDeSolicitudesToolStripMenuItem";
			this->revisiónDeSolicitudesToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->revisiónDeSolicitudesToolStripMenuItem->Text = L"Revisión de Solicitudes";
			this->revisiónDeSolicitudesToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::revisiónDeSolicitudesToolStripMenuItem_Click);
			// 
			// pruebaComSerialToolStripMenuItem
			// 
			this->pruebaComSerialToolStripMenuItem->Name = L"pruebaComSerialToolStripMenuItem";
			this->pruebaComSerialToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->pruebaComSerialToolStripMenuItem->Text = L"Prueba Com Serial";
			this->pruebaComSerialToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::pruebaComSerialToolStripMenuItem_Click);
			// 
			// MantToolStripMenuItem
			// 
			this->MantToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->usuariosToolStripMenuItem,
					this->personasToolStripMenuItem, this->administradoresToolStripMenuItem, this->solicitudesToolStripMenuItem, this->tarjetasToolStripMenuItem,
					this->vehiculosToolStripMenuItem, this->estacionamientosToolStripMenuItem, this->playasToolStripMenuItem, this->zonasToolStripMenuItem,
					this->sensoresToolStripMenuItem
			});
			this->MantToolStripMenuItem->Name = L"MantToolStripMenuItem";
			this->MantToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->MantToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->usuariosToolStripMenuItem->Text = L"Personas";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::usuariosToolStripMenuItem_Click);
			// 
			// personasToolStripMenuItem
			// 
			this->personasToolStripMenuItem->Name = L"personasToolStripMenuItem";
			this->personasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->personasToolStripMenuItem->Text = L"Usuarios";
			this->personasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::personasToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::administradoresToolStripMenuItem_Click);
			// 
			// solicitudesToolStripMenuItem
			// 
			this->solicitudesToolStripMenuItem->Name = L"solicitudesToolStripMenuItem";
			this->solicitudesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->solicitudesToolStripMenuItem->Text = L"Solicitudes";
			this->solicitudesToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::solicitudesToolStripMenuItem_Click);
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			this->tarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::tarjetasToolStripMenuItem_Click);
			// 
			// vehiculosToolStripMenuItem
			// 
			this->vehiculosToolStripMenuItem->Name = L"vehiculosToolStripMenuItem";
			this->vehiculosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->vehiculosToolStripMenuItem->Text = L"Vehiculos";
			this->vehiculosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::vehiculosToolStripMenuItem_Click);
			// 
			// estacionamientosToolStripMenuItem
			// 
			this->estacionamientosToolStripMenuItem->Name = L"estacionamientosToolStripMenuItem";
			this->estacionamientosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->estacionamientosToolStripMenuItem->Text = L"Estacionamientos";
			this->estacionamientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::estacionamientosToolStripMenuItem_Click);
			// 
			// playasToolStripMenuItem
			// 
			this->playasToolStripMenuItem->Name = L"playasToolStripMenuItem";
			this->playasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->playasToolStripMenuItem->Text = L"Playas";
			this->playasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::playasToolStripMenuItem_Click);
			// 
			// zonasToolStripMenuItem
			// 
			this->zonasToolStripMenuItem->Name = L"zonasToolStripMenuItem";
			this->zonasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zonasToolStripMenuItem->Text = L"Zonas";
			this->zonasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::zonasToolStripMenuItem_Click);
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::sensoresToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->reportesToolStripMenuItem1,
					this->estacionamientosXPlayaToolStripMenuItem, this->registroDePuertaXDiaToolStripMenuItem, this->registroDePuertaXPuertaToolStripMenuItem,
					this->estacionamientoXZonaToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reportesToolStripMenuItem1
			// 
			this->reportesToolStripMenuItem1->Name = L"reportesToolStripMenuItem1";
			this->reportesToolStripMenuItem1->Size = System::Drawing::Size(274, 26);
			this->reportesToolStripMenuItem1->Text = L"Registro de puerta x Tarjeta";
			this->reportesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RDEMasterMenu::reportesToolStripMenuItem1_Click);
			// 
			// estacionamientosXPlayaToolStripMenuItem
			// 
			this->estacionamientosXPlayaToolStripMenuItem->Name = L"estacionamientosXPlayaToolStripMenuItem";
			this->estacionamientosXPlayaToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->estacionamientosXPlayaToolStripMenuItem->Text = L"Estacionamientos x Playa";
			this->estacionamientosXPlayaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::estacionamientosXPlayaToolStripMenuItem_Click);
			// 
			// registroDePuertaXDiaToolStripMenuItem
			// 
			this->registroDePuertaXDiaToolStripMenuItem->Name = L"registroDePuertaXDiaToolStripMenuItem";
			this->registroDePuertaXDiaToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->registroDePuertaXDiaToolStripMenuItem->Text = L"Registro de puerta x Dia";
			this->registroDePuertaXDiaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::registroDePuertaXDiaToolStripMenuItem_Click);
			// 
			// registroDePuertaXPuertaToolStripMenuItem
			// 
			this->registroDePuertaXPuertaToolStripMenuItem->Name = L"registroDePuertaXPuertaToolStripMenuItem";
			this->registroDePuertaXPuertaToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->registroDePuertaXPuertaToolStripMenuItem->Text = L"Registro de puerta x Puerta";
			this->registroDePuertaXPuertaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::registroDePuertaXPuertaToolStripMenuItem_Click);
			// 
			// estacionamientoXZonaToolStripMenuItem
			// 
			this->estacionamientoXZonaToolStripMenuItem->Name = L"estacionamientoXZonaToolStripMenuItem";
			this->estacionamientoXZonaToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->estacionamientoXZonaToolStripMenuItem->Text = L"Estacionamiento x Zona";
			this->estacionamientoXZonaToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::estacionamientoXZonaToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(52, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RDEMasterMenu::salirToolStripMenuItem_Click);
			// 
			// RDEMasterMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1037, 521);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
private: System::Void menúDeInscripciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceInscription^ inscriptionform = gcnew InterfaceInscription();
	inscriptionform->Show();
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

private: System::Void xdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void personasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantUser^ mantuser = gcnew MantUser();
	mantuser->Show();
}
private: System::Void estacionamientosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantParkingSite^ mantestaform = gcnew MantParkingSite();
	mantestaform-> ShowDialog();
}
private: System::Void zonasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantZone^ mantzonaform = gcnew MantZone();
	mantzonaform->Show();
}
private: System::Void administradoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantAdmin^ mantadminform = gcnew MantAdmin();
	mantadminform->Show();
}
private: System::Void playasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantParkingLot^ mantparkinglotform = gcnew MantParkingLot();
	mantparkinglotform->Show();
}
private: System::Void tarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantCard^ mantcardform = gcnew MantCard();
	mantcardform->Show();
}
private: System::Void enrolamientoDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnrolamientoTarjeta^ EnrTarjetaForm = gcnew EnrolamientoTarjeta();
	EnrTarjetaForm->Show();
}
private: System::Void solicitudesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MantRequest^ mantrequestform = gcnew MantRequest();
	mantrequestform->Show();
}
private: System::Void solicitudDeUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceSolUser^ interfaceSolUser = gcnew InterfaceSolUser();
	interfaceSolUser->Show();
}
private: System::Void reportesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	ReporteDoorRegisterxCard^ reportedoorregisterxcard = gcnew ReporteDoorRegisterxCard();
	reportedoorregisterxcard->Show();
}
private: System::Void revisiónDeSolicitudesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceSolAdmin^ interfaceSolAdmin = gcnew InterfaceSolAdmin();
	interfaceSolAdmin->Show();
}
private: System::Void estacionamientosXPlayaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportePlayaxEstacionamiento^ reporteSitexLot = gcnew ReportePlayaxEstacionamiento();
	reporteSitexLot->MdiParent=this;
	reporteSitexLot->Show();

}
private: System::Void registroDePuertaXDiaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteDoorRegisterxDay^ graficoDoorRegxDay = gcnew ReporteDoorRegisterxDay();
	graficoDoorRegxDay->MdiParent = this;
	graficoDoorRegxDay->Show();
}
private: System::Void registroDePuertaXPuertaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	ReporteDoorRegisterxDoor^ reporteRegistroPuertaxPuerta = gcnew ReporteDoorRegisterxDoor();
	reporteRegistroPuertaxPuerta->Show();
}
private: System::Void pruebaComSerialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PruebaComSerial^ formPruebaComSerial = gcnew PruebaComSerial();
	formPruebaComSerial->Show();
}
private: System::Void estacionamientoXZonaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteParkingSitexZone^ reportezonaxEstacionamiento = gcnew ReporteParkingSitexZone();
	reportezonaxEstacionamiento->MdiParent = this;
	reportezonaxEstacionamiento->Show();
}
private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MantSensor^ mantsensorform = gcnew MantSensor();
	mantsensorform->Show();
}
private: System::Void RDEMasterMenu_Load(System::Object^ sender, System::EventArgs^ e) {//EVENTO LOAD
	if (this->objUser != nullptr) {
		InterfaceProfile^ perfilUsuario = gcnew InterfaceProfile(this->objUser);
		perfilUsuario->MdiParent = this;
		perfilUsuario->Show();
	}
}
};
}
