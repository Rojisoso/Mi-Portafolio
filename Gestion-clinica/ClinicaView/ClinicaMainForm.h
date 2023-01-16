#pragma once
#include "PersonaForm.h"
#include "LoginForm.h"
#include "MedicamentosForm.h"
#include "CrearUsuarioForm.h"
#include "ClienteMainForm.h"
#include "MedicoMainForm.h"
#include "AdminMainForm.h"

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
	/// Resumen de ClinicaMainForm
	/// </summary>
	public ref class ClinicaMainForm : public System::Windows::Forms::Form
	{
	public:
		static property Cliente^ cliente;
		static property Medico^ medico;
		static property Persona^ user;
		ClinicaMainForm(void)
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
		~ClinicaMainForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// ClinicaMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 151);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->IsMdiContainer = true;
			this->Name = L"ClinicaMainForm";
			this->Text = L"                                                                                 "
				L"                                     CLINICA PUCP";
			this->Load += gcnew System::EventHandler(this, &ClinicaMainForm::ClinicaMainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Pronto");
	}
	private: System::Void personasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonaForm^ personaForm = gcnew PersonaForm();
		personaForm->MdiParent = this;
		personaForm -> Show();
	}
	private: System::Void ClinicaMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//DBController::Init();
		if (user == nullptr) {
			LoginForm^ loginForm = gcnew LoginForm();
			loginForm->ControlBox = false;
			loginForm->Text = "Autenticación de usuario";
			loginForm->ShowDialog();
		}

		if (user != nullptr) {
			
			AdminMainForm^ adminmainForm = gcnew AdminMainForm();
			adminmainForm->MdiParent = this;
			adminmainForm->Show();

		}
		else if (cliente != nullptr) {
			ClienteMainForm^ clientemainForm = gcnew ClienteMainForm();
			clientemainForm->MdiParent = this;
			clientemainForm->Show();
		}
		else if (medico != nullptr) {
			MedicoMainForm^ medicomainForm = gcnew MedicoMainForm();
			medicomainForm->MdiParent = this;
			medicomainForm->Show();
		}
		
	}

	private: System::Void medicamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MedicamentosForm^ medicamentosForm = gcnew MedicamentosForm();
		medicamentosForm->MdiParent = this;
		medicamentosForm->Show();
	}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
};
}
