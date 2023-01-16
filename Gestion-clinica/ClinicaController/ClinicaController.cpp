#include "pch.h"
#include "ClinicaController.h"

Persona^ ClinicaController::ClinicaManager::ValidateUser(String^ username, String^ password)
{
	return DBController::ValidateUser( username, password);
}

Cliente^ ClinicaController::ClinicaManager::ValidateCliente(String^ username, String^ password)
{
	return DBController::ValidateCliente(username, password);
}

Medico^ ClinicaController::ClinicaManager::ValidateMedico(String^ username, String^ password)
{
	return DBController::ValidateMedico(username, password);
}

List<TipoMedico^>^ ClinicaController::ClinicaManager::QueryAllTipoMedicos()
{
	return DBController::QueryAllTipoMedicos();
}

List<TipoGenero^>^ ClinicaController::ClinicaManager::QueryAllTipoGeneros()
{
	return DBController::QueryAllTipoGeneros();
}

//**************** PERSONA *************//
void ClinicaController::ClinicaManager::AddPersona(Persona^ p)
{
    DBController::AddPersona(p);

}

void ClinicaController::ClinicaManager::UpdatePersona(Persona^ p)
{
    DBController::UpdatePersona(p);
}

void ClinicaController::ClinicaManager::DeletePersona(int codigo)
{
    DBController::DeletePersona(codigo);
}

List<Persona^>^ ClinicaController::ClinicaManager::QueryAllPersonas()
{
    return DBController::QueryAllPersonas();
}

Persona^ ClinicaController::ClinicaManager::QueryPersonaByID(int codigo)
{
    return DBController::QueryPersonaByID(codigo);
}

//**************** CLIENTE *************//
void ClinicaController::ClinicaManager::AddCliente(Cliente^ c)
{
	DBController::AddCliente(c);
}

void ClinicaController::ClinicaManager::UpdateCliente(Cliente^ c)
{
	DBController::UpdateCliente(c);
}

void ClinicaController::ClinicaManager::DeleteCliente(int codigo)
{
	DBController::DeleteCliente(codigo);
}

List<Cliente^>^ ClinicaController::ClinicaManager::QueryAllClientes()
{
	return DBController::QueryAllClientes();
}

Cliente^ ClinicaController::ClinicaManager::QueryClienteByID(int codigo)
{
	return DBController::QueryClienteByID(codigo);
}

//**************** RECEPCION *************//
void ClinicaController::ClinicaManager::AddRecepcion(Recepcion^ R)
{
	DBController::AddRecepcion(R);
}

void ClinicaController::ClinicaManager::UpdateRecepcion(Recepcion^ R)
{
	DBController::UpdateRecepcion(R);
}

void ClinicaController::ClinicaManager::DeleteRecepcion(int codigo)
{
	DBController::DeleteRecepcion(codigo);
}

List<Recepcion^>^ ClinicaController::ClinicaManager::QueryAllRecepcions()
{
	return DBController::QueryAllRecepcions();
}

Recepcion^ ClinicaController::ClinicaManager::QueryRecepcionByID(int codigo)
{
	return DBController::QueryRecepcionByID(codigo);
}

//**************** MEDICAMENTOS *************//
void ClinicaController::ClinicaManager::AddMedicamento(Medicamentos^ M)
{
	DBController::AddMedicamento(M);
}

void ClinicaController::ClinicaManager::UpdateMedicamento(Medicamentos^ M)
{
	DBController::UpdateMedicamento(M);
}

void ClinicaController::ClinicaManager::DeleteMedicamento(int IDmedicamento)
{
	DBController::DeleteMedicamento(IDmedicamento);
}

List<Medicamentos^>^ ClinicaController::ClinicaManager::QueryAllMedicamentos()
{
	return DBController::QueryAllMedicamentos();
}

Medicamentos^ ClinicaController::ClinicaManager::QueryMedicamentoByID(int IDmedicamento)
{
	return DBController::QueryMedicamentoByID(IDmedicamento);
}

void ClinicaController::ClinicaManager::AddMedico(Medico^ M)
{
	DBController::AddMedico(M);
}

void ClinicaController::ClinicaManager::UpdateMedico(Medico^ M)
{
	DBController::UpdateMedico(M);
}

void ClinicaController::ClinicaManager::DeleteMedico(int IDmedico)
{
	DBController::DeleteMedico(IDmedico);
}

List<Medico^>^ ClinicaController::ClinicaManager::QueryAllMedicos()
{
	return DBController::QueryAllMedicos();
}

Medico^ ClinicaController::ClinicaManager::QueryMedicoByID(int IDmedico)
{
	return DBController::QueryMedicoByID(IDmedico);
}
