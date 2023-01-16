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
	/// Resumen de MedicamentosForm
	/// </summary>
	public ref class MedicamentosForm : public System::Windows::Forms::Form
	{
	public:
		MedicamentosForm(void)
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
		~MedicamentosForm()
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
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtprecio;
	private: System::Windows::Forms::TextBox^ txtstock;
	private: System::Windows::Forms::DataGridView^ DGVmedicamentos;






	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDmedicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;

	private: System::Windows::Forms::Button^ btnfoto;
	private: System::Windows::Forms::PictureBox^ Foto;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MedicamentosForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtprecio = (gcnew System::Windows::Forms::TextBox());
			this->txtstock = (gcnew System::Windows::Forms::TextBox());
			this->DGVmedicamentos = (gcnew System::Windows::Forms::DataGridView());
			this->IDmedicamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btnfoto = (gcnew System::Windows::Forms::Button());
			this->Foto = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVmedicamentos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Foto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precio(S/.)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(187, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Stock(unidades)";
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(122, 36);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(44, 20);
			this->txtid->TabIndex = 4;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(122, 68);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(165, 20);
			this->txtnombre->TabIndex = 5;
			// 
			// txtprecio
			// 
			this->txtprecio->Location = System::Drawing::Point(127, 105);
			this->txtprecio->Name = L"txtprecio";
			this->txtprecio->Size = System::Drawing::Size(44, 20);
			this->txtprecio->TabIndex = 6;
			// 
			// txtstock
			// 
			this->txtstock->Location = System::Drawing::Point(277, 105);
			this->txtstock->Name = L"txtstock";
			this->txtstock->Size = System::Drawing::Size(44, 20);
			this->txtstock->TabIndex = 7;
			// 
			// DGVmedicamentos
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGVmedicamentos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->DGVmedicamentos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVmedicamentos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IDmedicamento,
					this->nombre, this->precio, this->stock
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGVmedicamentos->DefaultCellStyle = dataGridViewCellStyle6;
			this->DGVmedicamentos->Location = System::Drawing::Point(42, 178);
			this->DGVmedicamentos->Name = L"DGVmedicamentos";
			this->DGVmedicamentos->Size = System::Drawing::Size(493, 120);
			this->DGVmedicamentos->TabIndex = 8;
			this->DGVmedicamentos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MedicamentosForm::DGVmedicamentos_CellContentClick);
			// 
			// IDmedicamento
			// 
			this->IDmedicamento->HeaderText = L"ID";
			this->IDmedicamento->Name = L"IDmedicamento";
			this->IDmedicamento->Width = 50;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->Name = L"nombre";
			this->nombre->Width = 300;
			// 
			// precio
			// 
			this->precio->HeaderText = L"Precio";
			this->precio->Name = L"precio";
			this->precio->Width = 50;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			this->stock->Width = 50;
			// 
			// btnagregar
			// 
			this->btnagregar->Location = System::Drawing::Point(66, 140);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(75, 23);
			this->btnagregar->TabIndex = 10;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &MedicamentosForm::btnagregar_Click);
			// 
			// btnmodificar
			// 
			this->btnmodificar->Location = System::Drawing::Point(172, 140);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(75, 23);
			this->btnmodificar->TabIndex = 11;
			this->btnmodificar->Text = L"Modificar";
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &MedicamentosForm::btnmodificar_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(281, 140);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(75, 23);
			this->btneliminar->TabIndex = 12;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &MedicamentosForm::btneliminar_Click);
			// 
			// btnfoto
			// 
			this->btnfoto->Location = System::Drawing::Point(434, 140);
			this->btnfoto->Name = L"btnfoto";
			this->btnfoto->Size = System::Drawing::Size(75, 23);
			this->btnfoto->TabIndex = 14;
			this->btnfoto->Text = L"Agregar foto";
			this->btnfoto->UseVisualStyleBackColor = true;
			this->btnfoto->Click += gcnew System::EventHandler(this, &MedicamentosForm::btnfoto_Click);
			// 
			// Foto
			// 
			this->Foto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Foto->Location = System::Drawing::Point(408, 12);
			this->Foto->Name = L"Foto";
			this->Foto->Size = System::Drawing::Size(127, 113);
			this->Foto->TabIndex = 15;
			this->Foto->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->consultasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(586, 24);
			this->menuStrip1->TabIndex = 16;
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
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicamentosForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicamentosForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MedicamentosForm::salirToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// MedicamentosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(586, 319);
			this->Controls->Add(this->Foto);
			this->Controls->Add(this->btnfoto);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->btnmodificar);
			this->Controls->Add(this->btnagregar);
			this->Controls->Add(this->DGVmedicamentos);
			this->Controls->Add(this->txtstock);
			this->Controls->Add(this->txtprecio);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MedicamentosForm";
			this->Text = L"                                                                   MEDICAMENTOS";
			this->Load += gcnew System::EventHandler(this, &MedicamentosForm::MedicamentosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVmedicamentos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Foto))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void RefreshDGVMedicamentos() {
			List <Medicamentos^>^ my_medicamentos = ClinicaManager::QueryAllMedicamentos();
			DGVmedicamentos->Rows->Clear();
			for (int i = 0; i < my_medicamentos->Count; i++) {
				DGVmedicamentos->Rows->Add(gcnew array<String^> {
					"" + my_medicamentos[i]->IDmedicamento,
						my_medicamentos[i]->nombre,
						"" + my_medicamentos[i]->stock,
						"" + my_medicamentos[i]->precio
				});
			}
}
public: System::Void ClearControls() {
	txtid->Clear();
	txtnombre->Clear();
	txtprecio->Clear();
	txtstock->Clear();
}

private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Medicamentos^ M = gcnew Medicamentos();
	//M->IDmedicamento = Int32::Parse(txtid->Text);
	M->nombre = txtnombre->Text;
	M->stock = Int32::Parse(txtstock->Text);
	M->precio = Int32::Parse(txtprecio->Text);
	
	ClinicaManager::AddMedicamento(M);

	RefreshDGVMedicamentos();
	ClearControls();
}
private: System::Void btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IDmedicamento = Int32::Parse(txtid->Text);
	String^ nombre = txtnombre->Text;
	int stock = Int32::Parse(txtstock->Text);
	int precio = Int32::Parse(txtprecio->Text);

	Medicamentos^ M = gcnew Medicamentos();
	M->IDmedicamento = IDmedicamento;
	M->nombre = nombre;
	M->stock = stock;
	M->precio = precio;
	ClinicaManager::UpdateMedicamento(M);
	RefreshDGVMedicamentos();
	ClearControls();
}
private: System::Void btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IDmedicamento = Int32::Parse(txtid->Text);
	ClinicaManager::DeleteMedicamento(IDmedicamento);
	RefreshDGVMedicamentos();
	ClearControls();
	
}
private: System::Void DGVmedicamentos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedrowindex = DGVmedicamentos->SelectedCells[0]->RowIndex;
	DataGridViewRow^ selectedRow = DGVmedicamentos->Rows[selectedrowindex];

	int IDmedicamento = Int32::Parse(selectedRow->Cells[0]->Value->ToString());

	Medicamentos^ M = ClinicaManager::QueryMedicamentoByID(IDmedicamento);
	txtid->Text = M->IDmedicamento.ToString();
	txtnombre->Text = M->nombre;
	txtstock->Text = M->stock.ToString();
	txtprecio->Text = M->precio.ToString();

}


private: System::Void MedicamentosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVMedicamentos();
	txtid->ReadOnly = true;
	btnagregar->Enabled = false;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
}
private: System::Void btnfoto_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = true;
	btnmodificar->Enabled = false;
	btneliminar->Enabled = false;
	ClearControls();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnagregar->Enabled = false;
	btnmodificar->Enabled = true;
	btneliminar->Enabled = true;
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
