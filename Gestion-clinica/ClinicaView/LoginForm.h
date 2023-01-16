#pragma once
#include "CrearUsuarioForm.h"

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
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		static property Persona^ user;
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btningresar;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ olvidarcontra;

	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtcontra;
	private: System::Windows::Forms::Label^ crearcuenta;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btningresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->olvidarcontra = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtcontra = (gcnew System::Windows::Forms::TextBox());
			this->crearcuenta = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btningresar
			// 
			this->btningresar->Location = System::Drawing::Point(121, 119);
			this->btningresar->Name = L"btningresar";
			this->btningresar->Size = System::Drawing::Size(75, 23);
			this->btningresar->TabIndex = 0;
			this->btningresar->Text = L"Ingresar";
			this->btningresar->UseVisualStyleBackColor = true;
			this->btningresar->Click += gcnew System::EventHandler(this, &LoginForm::btningresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña:";
			// 
			// olvidarcontra
			// 
			this->olvidarcontra->AutoSize = true;
			this->olvidarcontra->Location = System::Drawing::Point(54, 171);
			this->olvidarcontra->Name = L"olvidarcontra";
			this->olvidarcontra->Size = System::Drawing::Size(203, 13);
			this->olvidarcontra->TabIndex = 3;
			this->olvidarcontra->Text = L"¿Olvidaste tu contraseña\? Haz click aquí";
			this->olvidarcontra->Click += gcnew System::EventHandler(this, &LoginForm::olvidarcontra_Click);
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(121, 36);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(100, 20);
			this->txtusuario->TabIndex = 4;
			// 
			// txtcontra
			// 
			this->txtcontra->Location = System::Drawing::Point(121, 80);
			this->txtcontra->Name = L"txtcontra";
			this->txtcontra->PasswordChar = '*';
			this->txtcontra->Size = System::Drawing::Size(100, 20);
			this->txtcontra->TabIndex = 5;
			this->txtcontra->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtcontra_KeyDown);
			// 
			// crearcuenta
			// 
			this->crearcuenta->AutoSize = true;
			this->crearcuenta->Location = System::Drawing::Point(15, 206);
			this->crearcuenta->Name = L"crearcuenta";
			this->crearcuenta->Size = System::Drawing::Size(273, 13);
			this->crearcuenta->TabIndex = 6;
			this->crearcuenta->Text = L"¿No tienes una cuenta\? Create una haciendo click aquí";
			this->crearcuenta->Click += gcnew System::EventHandler(this, &LoginForm::crearcuenta_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(300, 250);
			this->Controls->Add(this->crearcuenta);
			this->Controls->Add(this->txtcontra);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->olvidarcontra);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btningresar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"                        CLINICA PUCP";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btningresar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void txtcontra_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
		if (e->KeyData == Keys::Enter)
			btningresar->PerformClick();

	}


	private: System::Void olvidarcontra_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Pronto");
	}
	private: System::Void crearcuenta_Click(System::Object^ sender, System::EventArgs^ e) {
		CrearUsuarioForm^ crearusuarioForm = gcnew CrearUsuarioForm();
		crearusuarioForm->Show();

	}
};
}
