#pragma once

namespace ClinicaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClienteMainForm
	/// </summary>
	public ref class ClienteMainForm : public System::Windows::Forms::Form
	{
	public:
		ClienteMainForm(void)
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
		~ClienteMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ miPerfilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialClínicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentosDePagosToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miPerfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialClínicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentosDePagosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->historialClínicoToolStripMenuItem, this->citasToolStripMenuItem, this->documentosDePagosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(714, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->miPerfilToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// miPerfilToolStripMenuItem
			// 
			this->miPerfilToolStripMenuItem->Name = L"miPerfilToolStripMenuItem";
			this->miPerfilToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->miPerfilToolStripMenuItem->Text = L"Mi Perfil";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// historialClínicoToolStripMenuItem
			// 
			this->historialClínicoToolStripMenuItem->Name = L"historialClínicoToolStripMenuItem";
			this->historialClínicoToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->historialClínicoToolStripMenuItem->Text = L"Historial Clínico";
			// 
			// citasToolStripMenuItem
			// 
			this->citasToolStripMenuItem->Name = L"citasToolStripMenuItem";
			this->citasToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->citasToolStripMenuItem->Text = L"Citas";
			// 
			// documentosDePagosToolStripMenuItem
			// 
			this->documentosDePagosToolStripMenuItem->Name = L"documentosDePagosToolStripMenuItem";
			this->documentosDePagosToolStripMenuItem->Size = System::Drawing::Size(138, 20);
			this->documentosDePagosToolStripMenuItem->Text = L"Documentos de Pagos";
			// 
			// ClienteMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 108);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ClienteMainForm";
			this->Text = L"ClienteMainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
