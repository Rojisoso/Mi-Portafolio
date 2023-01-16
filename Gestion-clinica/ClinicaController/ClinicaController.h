#pragma once
#include "DBController.h"

using namespace ClinicaModel;
using namespace System;
using namespace System::Collections::Generic;

namespace ClinicaController {
	public ref class ClinicaManager{

	public:

		//**********PERSONA*********//
		static Persona^ ValidateUser(String^ username, String^ password);
		static Cliente^ ValidateCliente(String^ username, String^ password);
		static Medico^ ValidateMedico(String^ username, String^ password);
		
		static List<TipoMedico^>^ QueryAllTipoMedicos();
		static List<TipoGenero^>^ QueryAllTipoGeneros();

		//**********PERSONA*********//
		static void AddPersona(Persona^);
		static void UpdatePersona(Persona^);
		static void DeletePersona(int codigo);
		static List<Persona^>^ QueryAllPersonas();
		static Persona^ QueryPersonaByID(int codigo);

		//**********CLIENTE*********//
		static void AddCliente(Cliente^);
		static void UpdateCliente(Cliente^);
		static void DeleteCliente(int codigo);
		static List<Cliente^>^ QueryAllClientes();
		static Cliente^ QueryClienteByID(int codigo);

		//**********RECEPCION*********//
		static void AddRecepcion(Recepcion^);
		static void UpdateRecepcion(Recepcion^);
		static void DeleteRecepcion(int codigo);
		static List<Recepcion^>^ QueryAllRecepcions();
		static Recepcion^ QueryRecepcionByID(int codigo);
	
		//**********MEDICAMENTOS*********//
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
	};
}
