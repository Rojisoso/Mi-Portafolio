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
	/// Resumen de MedicoForm
	/// </summary>
	public ref class MedicoForm : public System::Windows::Forms::Form
	{
	public:
		MedicoForm(void)
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
		~MedicoForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::DataGridView^ DGVMedicos;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtcodigo;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtapellidopaterno;
	private: System::Windows::Forms::TextBox^ txtapellidomaterno;
	private: System::Windows::Forms::TextBox^ txtdni;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::TextBox^ txttelefono;
	private: System::Windows::Forms::TextBox^ txtsalario;








	private: System::Windows::Forms::DateTimePicker^ dtpfechanacimiento;

	private: System::Windows::Forms::ComboBox^ cmbgenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ especializacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ salario;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cmbespecializacion;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MedicoForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->DGVMedicos = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->especializacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtcodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidopaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidomaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->txttelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtsalario = (gcnew System::Windows::Forms::TextBox());
			this->dtpfechanacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbgenero = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cmbespecializacion = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMedicos))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(758, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicoForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicoForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicoForm::salirToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombres:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apellido Paterno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Apellido Materno:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Género:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Correo:";
			// 
			// btnagregar
			// 
			this->btnagregar->Location = System::Drawing::Point(303, 43);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(75, 23);
			this->btnagregar->TabIndex = 8;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &MedicoForm::btnagregar_Click);
			// 
			// btnmodificar
			// 
			this->btnmodificar->Location = System::Drawing::Point(417, 43);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(75, 23);
			this->btnmodificar->TabIndex = 9;
			this->btnmodificar->Text = L"Modificar";
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &MedicoForm::btnmodificar_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(528, 43);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(75, 23);
			this->btneliminar->TabIndex = 10;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &MedicoForm::btneliminar_Click);
			// 
			// DGVMedicos
			// 
			this->DGVMedicos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVMedicos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo, this->nombre,
					this->especializacion, this->salario
			});
			this->DGVMedicos->Location = System::Drawing::Point(303, 84);
			this->DGVMedicos->Name = L"DGVMedicos";
			this->DGVMedicos->Size = System::Drawing::Size(443, 288);
			this->DGVMedicos->TabIndex = 11;
			this->DGVMedicos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MedicoForm::DGVMedicos_CellContentClick);
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Código";
			this->codigo->Name = L"codigo";
			this->codigo->Width = 50;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->Name = L"nombre";
			this->nombre->Width = 200;
			// 
			// especializacion
			// 
			this->especializacion->HeaderText = L"Especialización";
			this->especializacion->Name = L"especializacion";
			// 
			// salario
			// 
			this->salario->HeaderText = L"Salario";
			this->salario->Name = L"salario";
			this->salario->Width = 50;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 264);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Fecha de nacimiento:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Teléfono:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 321);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Salario:";
			// 
			// txtcodigo
			// 
			this->txtcodigo->Location = System::Drawing::Point(139, 52);
			this->txtcodigo->Name = L"txtcodigo";
			this->txtcodigo->Size = System::Drawing::Size(100, 20);
			this->txtcodigo->TabIndex = 15;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(139, 81);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(138, 20);
			this->txtnombre->TabIndex = 16;
			// 
			// txtapellidopaterno
			// 
			this->txtapellidopaterno->Location = System::Drawing::Point(139, 111);
			this->txtapellidopaterno->Name = L"txtapellidopaterno";
			this->txtapellidopaterno->Size = System::Drawing::Size(138, 20);
			this->txtapellidopaterno->TabIndex = 17;
			// 
			// txtapellidomaterno
			// 
			this->txtapellidomaterno->Location = System::Drawing::Point(139, 143);
			this->txtapellidomaterno->Name = L"txtapellidomaterno";
			this->txtapellidomaterno->Size = System::Drawing::Size(138, 20);
			this->txtapellidomaterno->TabIndex = 18;
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(139, 175);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(138, 20);
			this->txtdni->TabIndex = 19;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(139, 233);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(138, 20);
			this->txtcorreo->TabIndex = 20;
			// 
			// txttelefono
			// 
			this->txttelefono->Location = System::Drawing::Point(139, 290);
			this->txttelefono->Name = L"txttelefono";
			this->txttelefono->Size = System::Drawing::Size(100, 20);
			this->txttelefono->TabIndex = 21;
			// 
			// txtsalario
			// 
			this->txtsalario->Location = System::Drawing::Point(139, 318);
			this->txtsalario->Name = L"txtsalario";
			this->txtsalario->Size = System::Drawing::Size(100, 20);
			this->txtsalario->TabIndex = 22;
			// 
			// dtpfechanacimiento
			// 
			this->dtpfechanacimiento->Location = System::Drawing::Point(139, 259);
			this->dtpfechanacimiento->Name = L"dtpfechanacimiento";
			this->dtpfechanacimiento->Size = System::Drawing::Size(138, 20);
			this->dtpfechanacimiento->TabIndex = 23;
			// 
			// cmbgenero
			// 
			this->cmbgenero->FormattingEnabled = true;
			this->cmbgenero->Location = System::Drawing::Point(139, 204);
			this->cmbgenero->Name = L"cmbgenero";
			this->cmbgenero->Size = System::Drawing::Size(138, 21);
			this->cmbgenero->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 354);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Especialización:";
			// 
			// cmbespecializacion
			// 
			this->cmbespecializacion->FormattingEnabled = true;
			this->cmbespecializacion->Location = System::Drawing::Point(139, 351);
			this->cmbespecializacion->Name = L"cmbespecializacion";
			this->cmbespecializacion->Size = System::Drawing::Size(138, 21);
			this->cmbespecializacion->TabIndex = 26;
			this->cmbespecializacion->SelectedIndexChanged += gcnew System::EventHandler(this, &MedicoForm::cmbespecializacion_SelectedIndexChanged);
			// 
			// MedicoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 401);
			this->Controls->Add(this->cmbespecializacion);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cmbgenero);
			this->Controls->Add(this->dtpfechanacimiento);
			this->Controls->Add(this->txtsalario);
			this->Controls->Add(this->txttelefono);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtdni);
			this->Controls->Add(this->txtapellidomaterno);
			this->Controls->Add(this->txtapellidopaterno);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->txtcodigo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->DGVMedicos);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->btnmodificar);
			this->Controls->Add(this->btnagregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MedicoForm";
			this->Text = L"                                                              Mantenimientos de M"
				L"édicos";
			this->Load += gcnew System::EventHandler(this, &MedicoForm::MedicoForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMedicos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void fillcombo() {
		cmbespecializacion->Items->Clear();
		List<TipoMedico^>^ list = DBController::QueryAllTipoMedicos();

		for (int i = 0; i < list->Count ; i++) {
			cmbespecializacion->Items->Add(list[i]->ID + " - " + list[i]->tipo);
		}
	}
	void RefreshDGVMedicos() {
			List <Medico^>^ my_medicos = ClinicaManager::QueryAllMedicos();
			DGVMedicos->Rows->Clear();
			for (int i = 0; i < my_medicos->Count; i++) {
				DGVMedicos->Rows->Add(gcnew array<String^> {
					"" + my_medicos[i]->IDmedico,
						my_medicos[i]->nombre+ " " + my_medicos[i]->apellidoPaterno + " " + my_medicos[i]->apellidoMaterno,
						"" + my_medicos[i]->Especializacion,
						"" + my_medicos[i]->salario
				});
			}
	}

	public: System::Void ClearControls() {
		txtcodigo->Clear();
		txtnombre->Clear();
		txtapellidopaterno->Clear();
		txtapellidomaterno->Clear();
		txtcorreo->Clear();
		txtdni->Clear();
		txtsalario->Clear();
		txttelefono->Clear();
	}

	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
		Medico^ M = gcnew Medico();
		//M->IDmedico = Int32::Parse(txtcodigo->Text);
		M->nombre = txtnombre->Text;
		M->apellidoPaterno = (txtapellidopaterno->Text);
		M->apellidoMaterno = (txtapellidomaterno->Text);
		M->correo = txtcorreo->Text;
		M->DNI = txtdni->Text;
		M->salario = Int32::Parse(txtsalario->Text);
		M->telefono = txttelefono->Text;
		ClinicaManager::AddMedico(M);

		RefreshDGVMedicos();
		ClearControls();
		MessageBox::Show("Médico agregado correctamente");

	}
private: System::Void DGVMedicos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (DGVMedicos->CurrentCell != nullptr &&
		DGVMedicos->CurrentCell->Value != nullptr &&
		DGVMedicos->CurrentCell->Value->ToString() != "") {

		int selectedRowIndex = DGVMedicos->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = DGVMedicos->Rows[selectedRowIndex];

		int productId = Int32::Parse(selectedRow->Cells[0]->Value->ToString());
		Medico^ M = ClinicaManager::QueryMedicoByID(productId);
		txtcodigo->Text = M->IDmedico.ToString();
		txtnombre->Text = M->nombre;
		txtapellidopaterno->Text = M->apellidoPaterno;
		txtapellidomaterno->Text = M->apellidoMaterno;
		txtcorreo->Text = M->correo;
		txtdni->Text = M->DNI;
		txtsalario->Text = M->salario.ToString();
		txttelefono->Text = M->telefono;
	}
}
private: System::Void MedicoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	fillcombo();
	RefreshDGVMedicos();
	txtcodigo->ReadOnly = true;
	btnagregar->Enabled = false;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
}
private: System::Void btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtcodigo->Text);
	String^ name = txtnombre->Text;
	String^ apellidopaterno = txtapellidopaterno->Text;
	String^ apellidomaterno = txtapellidomaterno->Text;
	String^ correo = txtcorreo->Text;
	String^ dni = txtdni->Text;
	int salario = Int32::Parse(txtsalario->Text);
	Medico^ M = gcnew Medico();
	M->IDmedico = productId;
	M->nombre = name;
	M->apellidoPaterno = apellidopaterno;
	M->apellidoMaterno = apellidomaterno;
	M->correo = correo;
	M->DNI = txtdni->Text;
	M->salario = Int32::Parse(txtsalario->Text);

	ClinicaManager::UpdateMedico(M);
	RefreshDGVMedicos();
	MessageBox::Show("Médico modificado correctamente");
}

private: System::Void btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtcodigo->Text);
	ClinicaManager::DeleteMedico(productId);
	RefreshDGVMedicos();
	ClearControls();
	MessageBox::Show("Médico eliminado correctamente");
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnagregar->Enabled = true;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = false;
	btnmodificar->Enabled = true;
	btneliminar->Enabled = true;
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void cmbespecializacion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Object^ tipomed = cmbespecializacion->Items[cmbespecializacion->SelectedIndex];
	MessageBox::Show("Datos de la especializacion seleccionada en el combo: " + tipomed);
}
};
}
