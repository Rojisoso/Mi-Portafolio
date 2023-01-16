#pragma once

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
	/// Resumen de CrearUsuarioForm
	/// </summary>
	public ref class CrearUsuarioForm : public System::Windows::Forms::Form
	{
	public:
		CrearUsuarioForm(void)
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
		~CrearUsuarioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtapellidopaterno;
	private: System::Windows::Forms::TextBox^ txtapellidomaterno;
	private: System::Windows::Forms::TextBox^ txtdni;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::TextBox^ txttelefono;
	private: System::Windows::Forms::TextBox^ txtcontra;
	private: System::Windows::Forms::Button^ btnregistrar;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dtpfechanacimiento;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cmbgenero;
	private: System::Windows::Forms::Button^ btncancelar;









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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidopaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidomaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->txttelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtcontra = (gcnew System::Windows::Forms::TextBox());
			this->btnregistrar = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dtpfechanacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cmbgenero = (gcnew System::Windows::Forms::ComboBox());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRARSE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña nueva:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Es rápido y fácil.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Nombres:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Apellido Paterno:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(217, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Apellido Materno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Correo:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 240);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Teléfono:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(153, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Fecha de nacimiento:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(281, 326);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Género:";
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(73, 96);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(143, 20);
			this->txtnombre->TabIndex = 11;
			// 
			// txtapellidopaterno
			// 
			this->txtapellidopaterno->Location = System::Drawing::Point(108, 135);
			this->txtapellidopaterno->Name = L"txtapellidopaterno";
			this->txtapellidopaterno->Size = System::Drawing::Size(100, 20);
			this->txtapellidopaterno->TabIndex = 12;
			// 
			// txtapellidomaterno
			// 
			this->txtapellidomaterno->Location = System::Drawing::Point(312, 135);
			this->txtapellidomaterno->Name = L"txtapellidomaterno";
			this->txtapellidomaterno->Size = System::Drawing::Size(100, 20);
			this->txtapellidomaterno->TabIndex = 13;
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(49, 168);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(86, 20);
			this->txtdni->TabIndex = 14;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(62, 203);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(300, 20);
			this->txtcorreo->TabIndex = 15;
			// 
			// txttelefono
			// 
			this->txttelefono->Location = System::Drawing::Point(73, 237);
			this->txttelefono->Name = L"txttelefono";
			this->txttelefono->Size = System::Drawing::Size(135, 20);
			this->txttelefono->TabIndex = 16;
			// 
			// txtcontra
			// 
			this->txtcontra->Location = System::Drawing::Point(117, 268);
			this->txtcontra->Name = L"txtcontra";
			this->txtcontra->PasswordChar = '*';
			this->txtcontra->Size = System::Drawing::Size(121, 20);
			this->txtcontra->TabIndex = 17;
			// 
			// btnregistrar
			// 
			this->btnregistrar->Location = System::Drawing::Point(133, 342);
			this->btnregistrar->Name = L"btnregistrar";
			this->btnregistrar->Size = System::Drawing::Size(75, 23);
			this->btnregistrar->TabIndex = 18;
			this->btnregistrar->Text = L"Registrarte";
			this->btnregistrar->UseVisualStyleBackColor = true;
			this->btnregistrar->Click += gcnew System::EventHandler(this, &CrearUsuarioForm::btnregistrar_Click);
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(12, 291);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(415, 48);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Al hacer clic en \"Registrarte\", aceptas nuestras Condiciones, la Política de dato"
				L"s y la Política de cookies. Es posible que te enviemos notificaciones por SMS, q"
				L"ue puedes desactivar cuando quieras.";
			// 
			// dtpfechanacimiento
			// 
			this->dtpfechanacimiento->Location = System::Drawing::Point(268, 168);
			this->dtpfechanacimiento->Name = L"dtpfechanacimiento";
			this->dtpfechanacimiento->Size = System::Drawing::Size(144, 20);
			this->dtpfechanacimiento->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(228, 240);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Género:";
			// 
			// cmbgenero
			// 
			this->cmbgenero->FormattingEnabled = true;
			this->cmbgenero->Location = System::Drawing::Point(279, 236);
			this->cmbgenero->Name = L"cmbgenero";
			this->cmbgenero->Size = System::Drawing::Size(109, 21);
			this->cmbgenero->TabIndex = 22;
			// 
			// btncancelar
			// 
			this->btncancelar->Location = System::Drawing::Point(231, 342);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(75, 23);
			this->btncancelar->TabIndex = 23;
			this->btncancelar->Text = L"Cancelar";
			this->btncancelar->UseVisualStyleBackColor = true;
			this->btncancelar->Click += gcnew System::EventHandler(this, &CrearUsuarioForm::btncancelar_Click);
			// 
			// CrearUsuarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 395);
			this->Controls->Add(this->btncancelar);
			this->Controls->Add(this->cmbgenero);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dtpfechanacimiento);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btnregistrar);
			this->Controls->Add(this->txtcontra);
			this->Controls->Add(this->txttelefono);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtdni);
			this->Controls->Add(this->txtapellidomaterno);
			this->Controls->Add(this->txtapellidopaterno);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CrearUsuarioForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnregistrar_Click(System::Object^ sender, System::EventArgs^ e) {

		Cliente^ p = gcnew Cliente();
		p->nombre = txtnombre->Text;
		p->apellidoPaterno = txtapellidopaterno->Text;
		p->apellidoMaterno = txtapellidomaterno->Text;
		p->correo = txtcorreo->Text;
		p->DNI = txtdni->Text;
		p->contrasenha = txtcontra->Text;
		ClinicaManager::AddCliente(p);
		//ClinicaManager::AddPersona(p);
		this->Close();

	}
private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
};
}
