#pragma once

using namespace ClinicaController;
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
	/// Resumen de PersonaForm
	/// </summary>
	public ref class PersonaForm : public System::Windows::Forms::Form
	{
	public:
		PersonaForm(void)
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
		~PersonaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ DGVpersonas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::TextBox^ txtdni;
	private: System::Windows::Forms::TextBox^ txtapematerno;
	private: System::Windows::Forms::TextBox^ txtapepaterno;
	private: System::Windows::Forms::TextBox^ txtnombre;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cmbgenero;
	private: System::Windows::Forms::DateTimePicker^ dtpfechanacimiento;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txttelefono;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cmbseguro;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtcodigo;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;






















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonaForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DGVpersonas = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->txtapematerno = (gcnew System::Windows::Forms::TextBox());
			this->txtapepaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cmbgenero = (gcnew System::Windows::Forms::ComboBox());
			this->dtpfechanacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txttelefono = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cmbseguro = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtcodigo = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVpersonas))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->consultasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(631, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &PersonaForm::nuevoToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modificarToolStripMenuItem.Image")));
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &PersonaForm::modificarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &PersonaForm::salirToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// DGVpersonas
			// 
			this->DGVpersonas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVpersonas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Codigo, this->Nombre,
					this->DNI
			});
			this->DGVpersonas->Location = System::Drawing::Point(276, 90);
			this->DGVpersonas->Name = L"DGVpersonas";
			this->DGVpersonas->Size = System::Drawing::Size(343, 317);
			this->DGVpersonas->TabIndex = 33;
			this->DGVpersonas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonaForm::DGVpersonas_CellContentClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->Name = L"Codigo";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(544, 48);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(75, 23);
			this->btneliminar->TabIndex = 32;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			// 
			// btnmodificar
			// 
			this->btnmodificar->Location = System::Drawing::Point(413, 48);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(75, 23);
			this->btnmodificar->TabIndex = 31;
			this->btnmodificar->Text = L"Modificar";
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &PersonaForm::btnmodificar_Click_1);
			// 
			// btnagregar
			// 
			this->btnagregar->Location = System::Drawing::Point(276, 48);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(75, 23);
			this->btnagregar->TabIndex = 30;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &PersonaForm::btnagregar_Click);
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(77, 235);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(146, 20);
			this->txtcorreo->TabIndex = 29;
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(123, 199);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(100, 20);
			this->txtdni->TabIndex = 28;
			// 
			// txtapematerno
			// 
			this->txtapematerno->Location = System::Drawing::Point(123, 162);
			this->txtapematerno->Name = L"txtapematerno";
			this->txtapematerno->Size = System::Drawing::Size(100, 20);
			this->txtapematerno->TabIndex = 27;
			// 
			// txtapepaterno
			// 
			this->txtapepaterno->Location = System::Drawing::Point(123, 123);
			this->txtapepaterno->Name = L"txtapepaterno";
			this->txtapepaterno->Size = System::Drawing::Size(100, 20);
			this->txtapepaterno->TabIndex = 26;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(123, 90);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(100, 20);
			this->txtnombre->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"DNI:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Apellido Materno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Apellido Paterno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombres:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 270);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Género:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(33, 303);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 13);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Fecha de nacimiento:";
			// 
			// cmbgenero
			// 
			this->cmbgenero->FormattingEnabled = true;
			this->cmbgenero->Location = System::Drawing::Point(123, 267);
			this->cmbgenero->Name = L"cmbgenero";
			this->cmbgenero->Size = System::Drawing::Size(100, 21);
			this->cmbgenero->TabIndex = 36;
			// 
			// dtpfechanacimiento
			// 
			this->dtpfechanacimiento->Location = System::Drawing::Point(149, 297);
			this->dtpfechanacimiento->Name = L"dtpfechanacimiento";
			this->dtpfechanacimiento->Size = System::Drawing::Size(74, 20);
			this->dtpfechanacimiento->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(33, 338);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Teléfono:";
			// 
			// txttelefono
			// 
			this->txttelefono->Location = System::Drawing::Point(123, 335);
			this->txttelefono->Name = L"txttelefono";
			this->txttelefono->Size = System::Drawing::Size(100, 20);
			this->txttelefono->TabIndex = 39;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(33, 372);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Seguro:";
			// 
			// cmbseguro
			// 
			this->cmbseguro->FormattingEnabled = true;
			this->cmbseguro->Location = System::Drawing::Point(123, 369);
			this->cmbseguro->Name = L"cmbseguro";
			this->cmbseguro->Size = System::Drawing::Size(100, 21);
			this->cmbseguro->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"ID:";
			// 
			// txtcodigo
			// 
			this->txtcodigo->Location = System::Drawing::Point(123, 55);
			this->txtcodigo->Name = L"txtcodigo";
			this->txtcodigo->Size = System::Drawing::Size(100, 20);
			this->txtcodigo->TabIndex = 43;
			// 
			// PersonaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 419);
			this->Controls->Add(this->txtcodigo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbseguro);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txttelefono);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dtpfechanacimiento);
			this->Controls->Add(this->cmbgenero);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->DGVpersonas);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->btnmodificar);
			this->Controls->Add(this->btnagregar);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtdni);
			this->Controls->Add(this->txtapematerno);
			this->Controls->Add(this->txtapepaterno);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PersonaForm";
			this->Text = L"                                                               Mantenimientos de "
				L"Clientes";
			this->Load += gcnew System::EventHandler(this, &PersonaForm::PersonaForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVpersonas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:System::Void ClearControls() {
		txtcodigo->Clear();
		txtnombre->Clear();
		txtapepaterno->Clear();
		txtapematerno->Clear();
		txtcorreo->Clear();
		txtdni->Clear();
		txttelefono->Clear();

	}

	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Cliente^ p = gcnew Cliente();
		p->nombre = txtnombre->Text;
		p->apellidoPaterno = txtapepaterno->Text;
		p->apellidoMaterno = txtapematerno->Text;
		p->DNI = txtdni->Text;
		p->correo = txtcorreo->Text;
		p->telefono = txttelefono->Text;

		ClinicaManager::AddCliente(p);
		
		RefreshDGVPersonas();
		ClearControls();
	}
	private: System::Void btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombre = txtnombre->Text;
		String^ apellidoPaterno = txtapepaterno->Text;
		String^ apellidoMaterno = txtapematerno->Text;
		String^ DNI = txtdni->Text;
		String^ correo = txtcorreo->Text;
		String^ telefono = txttelefono->Text;
		Cliente^ p = gcnew Cliente();

		p->nombre = nombre;
		p->apellidoPaterno = apellidoPaterno;
		p->apellidoMaterno = apellidoMaterno;
		p->DNI = DNI;
		p->correo = correo;
		p->telefono = telefono;

		ClinicaManager::UpdateCliente(p);
		RefreshDGVPersonas();

	}
	void RefreshDGVPersonas() {
			   List <Cliente^>^ my_personas = ClinicaManager::QueryAllClientes();
			   DGVpersonas->Rows->Clear();
			   for (int i = 0; i < my_personas->Count; i++) {
				  DGVpersonas->Rows->Add(gcnew array<String^> {
					   "" + my_personas[i]->IDcliente,
						   my_personas[i]->nombre,
						   "" + my_personas[i]->DNI
				   });
			   }
	}

	private: System::Void DGVpersonas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (DGVpersonas->CurrentCell != nullptr &&
			DGVpersonas->CurrentCell->Value != nullptr &&
			DGVpersonas->CurrentCell->Value->ToString() != "") {

			int selectedrowindex = DGVpersonas->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = DGVpersonas->Rows[selectedrowindex];

			int personaID = Int32::Parse(selectedRow->Cells[0]->Value->ToString());

			Cliente^ p = ClinicaManager::QueryClienteByID(personaID);
			txtcodigo->Text = p->IDcliente.ToString();
			txtnombre->Text = p->nombre;
			txtapepaterno->Text = p->apellidoPaterno;
			txtapematerno->Text = p->apellidoMaterno;
			txtdni->Text = p->DNI;
			txtcorreo->Text = p->correo;
			txttelefono->Text = p->telefono;
		}

	}
	private: System::Void btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		int personaID = Int32::Parse(txtcodigo->Text);
		ClinicaManager::DeleteCliente(personaID);
		RefreshDGVPersonas();
		ClearControls();
	}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = true;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
	ClearControls();
}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = false;
	btnmodificar->Enabled = true;
	btneliminar->Enabled = true;
}
private: System::Void PersonaForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVPersonas();
	txtcodigo->ReadOnly = true;
	btnagregar->Enabled = false;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
}

private: System::Void btnmodificar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = txtnombre->Text;
	String^ apellidoPaterno = txtapepaterno->Text;
	String^ apellidoMaterno = txtapematerno->Text;
	String^ DNI = txtdni->Text;
	String^ correo = txtcorreo->Text;
	String^ telefono = txttelefono->Text;
	Cliente^ p = gcnew Cliente();

	p->nombre = nombre;
	p->apellidoPaterno = apellidoPaterno;
	p->apellidoMaterno = apellidoMaterno;
	p->DNI = DNI;
	p->correo = correo;
	p->telefono = telefono;

	ClinicaManager::UpdateCliente(p);
	RefreshDGVPersonas();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
