#pragma once
#include "PersonaDB.h"
#include "MedicamentoDB.h"
#include "MedicoDB.h"
#include "RecepcionDB.h"
#include "ClienteDB.h"
#include "TipoMedicoDB.h"
#include "TipoGeneroDB.h"

using namespace System; // 

namespace ClinicaController {

	public ref class DBController
	{
		private:
			//Variable de clase

			static PersonaDB^ personaDB = gcnew PersonaDB();
			static MedicamentoDB^ medicamentoDB = gcnew MedicamentoDB();
			static MedicoDB^ medicoDB = gcnew MedicoDB();
			static RecepcionDB^ recepcionDB = gcnew RecepcionDB();
			static ClienteDB^ clienteDB = gcnew ClienteDB();

			//Metodos de clase
			static TipoMedicoDB^ tipomedicoDB = gcnew TipoMedicoDB();
			static TipoGeneroDB^ tipogeneroDB = gcnew TipoGeneroDB();

		public: //Metodos de clase

		static Persona^ ValidateUser(String^ username, String^ password);
		static Cliente^ ValidateCliente(String^ username, String^ password);
		static Medico^ ValidateMedico(String^ username, String^ password);


		//**************PERSONA**************//
		static void AddPersona(Persona^);
		static void UpdatePersona(Persona^);
		static void DeletePersona(int codigo);
		static List<Persona^>^ QueryAllPersonas();
		static Persona^ QueryPersonaByID(int codigo);

		//**************CLIENTE**************//
		static void AddCliente(Cliente^);
		static void UpdateCliente(Cliente^);
		static void DeleteCliente(int codigo);
		static List<Cliente^>^ QueryAllClientes();
		static Cliente^ QueryClienteByID(int IDcliente);

		//**************MEDICAMENTOS**************//
		static void AddMedicamento(Medicamentos^);
		static void UpdateMedicamento(Medicamentos^);
		static void DeleteMedicamento(int IDmedicamento);
		static List<Medicamentos^>^ QueryAllMedicamentos();
		static Medicamentos^ QueryMedicamentoByID(int IDmedicamento);

		//**********MEDICOS*********//
		static void AddMedico(Medico^);
		static void UpdateMedico(Medico^);
		static void DeleteMedico(int IDmedico);
		static List<Medico^>^ QueryAllMedicos();
		static Medico^ QueryMedicoByID(int IDmedico);

		//**************RECEPCIONES**************//
		static void AddRecepcion(Recepcion^);
		static void UpdateRecepcion(Recepcion^);
		static void DeleteRecepcion(int IDrecepcion);
		static List<Recepcion^>^ QueryAllRecepcions();
		static Recepcion^ QueryRecepcionByID(int IDrecepcion);

		//Metodos de clase para tipo de medicos
		static void LoadTipoMedico();
		static List<TipoMedico^>^ QueryAllTipoMedicos();
		static void SaveTipoMedico();

		//Metodos de clase para tipo de genero
		static void LoadTipoGenero();
		static List<TipoGenero^>^ QueryAllTipoGeneros();
		static void SaveTipoGenero();

		static void Init();
		
	};

}
