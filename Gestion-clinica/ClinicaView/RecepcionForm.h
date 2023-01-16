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
	/// Resumen de RecepcionForm
	/// </summary>
	public ref class RecepcionForm : public System::Windows::Forms::Form
	{
	public:
		RecepcionForm(void)
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
		~RecepcionForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::ComboBox^ cmbgenero;
	private: System::Windows::Forms::DateTimePicker^ dtpfechanacimiento;
	private: System::Windows::Forms::TextBox^ txtcodigo;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtapellidopaterno;
	private: System::Windows::Forms::TextBox^ txtapellidomaterno;
	private: System::Windows::Forms::TextBox^ txtdni;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::ComboBox^ cmbtipo;
	private: System::Windows::Forms::TextBox^ txtsalario;
	private: System::Windows::Forms::TextBox^ txthorario;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::DataGridView^ DGVRecepcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ salario;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txttelefono;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RecepcionForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->cmbgenero = (gcnew System::Windows::Forms::ComboBox());
			this->dtpfechanacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtcodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidopaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidomaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->cmbtipo = (gcnew System::Windows::Forms::ComboBox());
			this->txtsalario = (gcnew System::Windows::Forms::TextBox());
			this->txthorario = (gcnew System::Windows::Forms::TextBox());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->DGVRecepcion = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txttelefono = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVRecepcion))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(719, 24);
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
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &RecepcionForm::nuevoToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modificarToolStripMenuItem.Image")));
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &RecepcionForm::modificarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RecepcionForm::salirToolStripMenuItem_Click);
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
			this->label1->Location = System::Drawing::Point(23, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombres:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apellido paterno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Apellido materno:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Correo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Género:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 318);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Salario(S/):";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 225);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Fecha de nacimiento:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Tipo:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 349);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Horario de Atención:";
			// 
			// cmbgenero
			// 
			this->cmbgenero->FormattingEnabled = true;
			this->cmbgenero->Location = System::Drawing::Point(139, 192);
			this->cmbgenero->Name = L"cmbgenero";
			this->cmbgenero->Size = System::Drawing::Size(97, 21);
			this->cmbgenero->TabIndex = 12;
			// 
			// dtpfechanacimiento
			// 
			this->dtpfechanacimiento->Location = System::Drawing::Point(138, 219);
			this->dtpfechanacimiento->Name = L"dtpfechanacimiento";
			this->dtpfechanacimiento->Size = System::Drawing::Size(98, 20);
			this->dtpfechanacimiento->TabIndex = 13;
			// 
			// txtcodigo
			// 
			this->txtcodigo->Location = System::Drawing::Point(139, 44);
			this->txtcodigo->Name = L"txtcodigo";
			this->txtcodigo->Size = System::Drawing::Size(97, 20);
			this->txtcodigo->TabIndex = 14;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(112, 72);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(124, 20);
			this->txtnombre->TabIndex = 15;
			// 
			// txtapellidopaterno
			// 
			this->txtapellidopaterno->Location = System::Drawing::Point(112, 100);
			this->txtapellidopaterno->Name = L"txtapellidopaterno";
			this->txtapellidopaterno->Size = System::Drawing::Size(124, 20);
			this->txtapellidopaterno->TabIndex = 16;
			// 
			// txtapellidomaterno
			// 
			this->txtapellidomaterno->Location = System::Drawing::Point(112, 130);
			this->txtapellidomaterno->Name = L"txtapellidomaterno";
			this->txtapellidomaterno->Size = System::Drawing::Size(124, 20);
			this->txtapellidomaterno->TabIndex = 17;
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(139, 163);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(97, 20);
			this->txtdni->TabIndex = 18;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(70, 255);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(166, 20);
			this->txtcorreo->TabIndex = 19;
			// 
			// cmbtipo
			// 
			this->cmbtipo->FormattingEnabled = true;
			this->cmbtipo->Location = System::Drawing::Point(112, 285);
			this->cmbtipo->Name = L"cmbtipo";
			this->cmbtipo->Size = System::Drawing::Size(124, 21);
			this->cmbtipo->TabIndex = 20;
			// 
			// txtsalario
			// 
			this->txtsalario->Location = System::Drawing::Point(139, 315);
			this->txtsalario->Name = L"txtsalario";
			this->txtsalario->Size = System::Drawing::Size(97, 20);
			this->txtsalario->TabIndex = 21;
			// 
			// txthorario
			// 
			this->txthorario->Location = System::Drawing::Point(139, 346);
			this->txthorario->Name = L"txthorario";
			this->txthorario->Size = System::Drawing::Size(97, 20);
			this->txthorario->TabIndex = 22;
			// 
			// btnagregar
			// 
			this->btnagregar->Location = System::Drawing::Point(260, 47);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(84, 31);
			this->btnagregar->TabIndex = 23;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &RecepcionForm::btnagregar_Click);
			// 
			// btnmodificar
			// 
			this->btnmodificar->Location = System::Drawing::Point(366, 47);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(80, 31);
			this->btnmodificar->TabIndex = 24;
			this->btnmodificar->Text = L"Modificar";
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &RecepcionForm::btnmodificar_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(470, 47);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(81, 31);
			this->btneliminar->TabIndex = 25;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &RecepcionForm::btneliminar_Click);
			// 
			// DGVRecepcion
			// 
			this->DGVRecepcion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVRecepcion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->nombre, this->tipo, this->salario
			});
			this->DGVRecepcion->Location = System::Drawing::Point(260, 89);
			this->DGVRecepcion->Name = L"DGVRecepcion";
			this->DGVRecepcion->Size = System::Drawing::Size(444, 273);
			this->DGVRecepcion->TabIndex = 26;
			this->DGVRecepcion->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RecepcionForm::DGVRecepcion_CellContentClick);
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Código";
			this->codigo->Name = L"codigo";
			this->codigo->Width = 50;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre Completo";
			this->nombre->Name = L"nombre";
			this->nombre->Width = 200;
			// 
			// tipo
			// 
			this->tipo->HeaderText = L"Tipo";
			this->tipo->Name = L"tipo";
			// 
			// salario
			// 
			this->salario->HeaderText = L"Salario";
			this->salario->Name = L"salario";
			this->salario->Width = 50;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 375);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Teléfono:";
			// 
			// txttelefono
			// 
			this->txttelefono->Location = System::Drawing::Point(139, 372);
			this->txttelefono->Name = L"txttelefono";
			this->txttelefono->Size = System::Drawing::Size(97, 20);
			this->txttelefono->TabIndex = 28;
			// 
			// RecepcionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 400);
			this->Controls->Add(this->txttelefono);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->DGVRecepcion);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->btnmodificar);
			this->Controls->Add(this->btnagregar);
			this->Controls->Add(this->txthorario);
			this->Controls->Add(this->txtsalario);
			this->Controls->Add(this->cmbtipo);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtdni);
			this->Controls->Add(this->txtapellidomaterno);
			this->Controls->Add(this->txtapellidopaterno);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->txtcodigo);
			this->Controls->Add(this->dtpfechanacimiento);
			this->Controls->Add(this->cmbgenero);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RecepcionForm";
			this->Text = L"                                                                       Mantenimie"
				L"nto de Recepcionistas";
			this->Load += gcnew System::EventHandler(this, &RecepcionForm::RecepcionForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVRecepcion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void RefreshDGVRecepcion() {
			List <Recepcion^>^ my_recepcion = ClinicaManager::QueryAllRecepcions();
			DGVRecepcion->Rows->Clear();
			for (int i = 0; i < my_recepcion->Count; i++) {
				DGVRecepcion->Rows->Add(gcnew array<String^> {
					"" + my_recepcion[i]->IDrecepcion,
						my_recepcion[i]->nombre + my_recepcion[i]->apellidoPaterno + my_recepcion[i]->apellidoMaterno,
						"" + my_recepcion[i]->Tipo,
						"" + my_recepcion[i]->salario
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
		txthorario->Clear();
		txtsalario->Clear();
	}
	private: System::Void RecepcionForm_Load(System::Object^ sender, System::EventArgs^ e) {
		void RefreshDGVRecepcion();
		txtcodigo->ReadOnly = true;
		btnagregar->Enabled = true;
		btnmodificar->Enabled = false;
		btneliminar->Enabled = false;
	}
private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Recepcion^ R = gcnew Recepcion();
	//R->IDrecepcion = Int32::Parse(txtcodigo->Text);
	R->nombre = txtnombre->Text;
	R->apellidoPaterno = txtapellidopaterno->Text;
	R->apellidoMaterno = txtapellidomaterno->Text;
	R->correo = txtcorreo->Text;
	R->DNI = txtdni->Text;
	R->HorarioAtencion = txthorario->Text;
	R->salario = Int32::Parse(txtsalario->Text);
	R->telefono = txttelefono->Text;

	ClinicaManager::AddRecepcion(R);
	RefreshDGVRecepcion();
	ClearControls();
}
private: System::Void btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtcodigo->Text);
	String^ name = txtnombre->Text;
	String^ apellidopaterno = txtapellidopaterno->Text;
	String^ apellidomaterno = txtapellidomaterno->Text;
	String^ correo = txtcorreo->Text;
	String^ dni = txtdni->Text;
	int salario = Int32::Parse(txtsalario->Text);
	Recepcion^ R = gcnew Recepcion();
	R->IDrecepcion = productId;
	R->nombre = name;
	R->apellidoPaterno = apellidopaterno;
	R->apellidoMaterno = apellidomaterno;
	R->correo = correo;
	R->DNI = txtdni->Text;
	R->salario = Int32::Parse(txtsalario->Text);
	R->telefono = txttelefono->Text;

	ClinicaManager::UpdateRecepcion(R);
	RefreshDGVRecepcion();
}
private: System::Void DGVRecepcion_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (DGVRecepcion->CurrentCell != nullptr &&
		DGVRecepcion->CurrentCell->Value != nullptr &&
		DGVRecepcion->CurrentCell->Value->ToString() != "") {

		int selectedRowIndex = DGVRecepcion->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = DGVRecepcion->Rows[selectedRowIndex];

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
private: System::Void btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtcodigo->Text);
	ClinicaManager::DeleteRecepcion(productId);
	RefreshDGVRecepcion();
	ClearControls();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnagregar->Enabled = true;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = false;
	btnmodificar->Enabled = true;
	btneliminar->Enabled = true;
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
