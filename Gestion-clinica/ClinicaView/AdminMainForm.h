#pragma once
#include "MedicamentosForm.h"
#include "PersonaForm.h"
#include "MedicoForm.h"
#include "RecepcionForm.h"

namespace ClinicaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ClinicaModel;
	using namespace ClinicaController;

	/// <summary>
	/// Resumen de AdminMainForm
	/// </summary>
	public ref class AdminMainForm : public System::Windows::Forms::Form
	{
	public:
		AdminMainForm(void)
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
		~AdminMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ m�dicosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicamentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recepci�nToolStripMenuItem;

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
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m�dicosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recepci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->mantenimientosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(730, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clientesToolStripMenuItem,
					this->m�dicosToolStripMenuItem, this->medicamentosToolStripMenuItem, this->recepci�nToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::clientesToolStripMenuItem_Click);
			// 
			// m�dicosToolStripMenuItem
			// 
			this->m�dicosToolStripMenuItem->Name = L"m�dicosToolStripMenuItem";
			this->m�dicosToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->m�dicosToolStripMenuItem->Text = L"M�dicos";
			this->m�dicosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::m�dicosToolStripMenuItem_Click);
			// 
			// medicamentosToolStripMenuItem
			// 
			this->medicamentosToolStripMenuItem->Name = L"medicamentosToolStripMenuItem";
			this->medicamentosToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->medicamentosToolStripMenuItem->Text = L"Medicamentos";
			this->medicamentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::medicamentosToolStripMenuItem_Click);
			// 
			// recepci�nToolStripMenuItem
			// 
			this->recepci�nToolStripMenuItem->Name = L"recepci�nToolStripMenuItem";
			this->recepci�nToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->recepci�nToolStripMenuItem->Text = L"Recepci�n";
			this->recepci�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::recepci�nToolStripMenuItem_Click);
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 147);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMainForm";
			this->Text = L"AdminMainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonaForm^ personaForm = gcnew PersonaForm();
	personaForm->Show();
}
private: System::Void medicamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MedicamentosForm^ medicamentosForm = gcnew MedicamentosForm();
	medicamentosForm->Show();
}
private: System::Void m�dicosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MedicoForm^ medicosForm = gcnew MedicoForm();
	medicosForm->Show();
}
private: System::Void recepci�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	RecepcionForm^ recepcionForm = gcnew RecepcionForm();
	recepcionForm->Show();
}
};
}
