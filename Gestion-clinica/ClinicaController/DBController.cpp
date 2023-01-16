#include "pch.h"
#include "DBController.h"

List<TipoMedico^>^ ClinicaController::DBController::QueryAllTipoMedicos()
{
    LoadTipoMedico();

    return tipomedicoDB->ListDB;
}

Persona^ ClinicaController::DBController::ValidateUser(String^ username, String^ password)
{
    personaDB->LoadCliente();
    for (int i = 0; i < personaDB->ListDB->Count; i++) {
        if (personaDB->ListDB[i]->DNI->Equals(username) &&
            personaDB->ListDB[i]->contrasenha->Equals(password))
            return personaDB->ListDB[i];
    }

    return nullptr;
}

Cliente^ ClinicaController::DBController::ValidateCliente(String^ username, String^ password) {
    clienteDB->Load();
    for (int i = 0; i < clienteDB->ListDB->Count; i++) {
        if (clienteDB->ListDB[i]->DNI->Equals(username) &&
            clienteDB->ListDB[i]->contrasenha->Equals(password))
            return clienteDB->ListDB[i];
    }
    return nullptr;
}

Medico^ ClinicaController::DBController::ValidateMedico(String^ username, String^ password)
{
    medicoDB->Load();
    for (int i = 0; i < medicoDB->ListDB->Count; i++) {
        if (medicoDB->ListDB[i]->DNI->Equals(username) &&
            medicoDB->ListDB[i]->contrasenha->Equals(password))
            return medicoDB->ListDB[i];
    }
    return nullptr;
}

void ClinicaController::DBController::AddPersona(Persona^ persona)
{
    personaDB->ListDB->Add(persona);
    personaDB->Persist();
}

void ClinicaController::DBController::UpdatePersona(Persona^ persona)
{
    for (int i = 0; i < personaDB->ListDB->Count; i++) {
        if (personaDB->ListDB[i]->codigo == persona->codigo) {
            personaDB->ListDB[i] = persona;
            return;
        }
    }
}



void ClinicaController::DBController::DeletePersona(int codigo)
{
    for (int i = 0; i < personaDB->ListDB->Count; i++) {
        if (personaDB->ListDB[i]->codigo == codigo) {
            personaDB->ListDB->RemoveAt(i);
            return;
        }
    }
}

List<Persona^>^ ClinicaController::DBController::QueryAllPersonas()
{
    personaDB->LoadFromBinaryFile();
    return personaDB->ListDB;

}

Persona^ ClinicaController::DBController::QueryPersonaByID(int codigo)
{
    for (int i = 0; i < personaDB->ListDB->Count; i++) {
        if (personaDB->ListDB[i]->codigo == codigo) {
            return personaDB->ListDB[i];
        }
    }
    return nullptr;
}

//**********************CLIENTES************************//
void ClinicaController::DBController::AddCliente(Cliente^ c)
{
    int nuevocodigo = (clienteDB->ListDB->Count) + 1;
    c->IDcliente = nuevocodigo;
    clienteDB->ListDB->Add(c);
    clienteDB->Persist();
}

void ClinicaController::DBController::UpdateCliente(Cliente^ c)
{
    clienteDB->Load();
    for (int i = 0; i < clienteDB->ListDB->Count; i++) {
        if (clienteDB->ListDB[i]->codigo == c->codigo) {
            clienteDB->ListDB[i] = c;
            clienteDB->Persist();
            return;
        }
    }
}

void ClinicaController::DBController::DeleteCliente(int codigo)
{
    clienteDB->Load();
    for (int i = 0; i < clienteDB->ListDB->Count; i++) {
        if (clienteDB->ListDB[i]->codigo == codigo) {
            clienteDB->ListDB->RemoveAt(i);
            clienteDB->Persist();
            return;
        }
    }
}

List<Cliente^>^ ClinicaController::DBController::QueryAllClientes()
{
    clienteDB->Load();
    return clienteDB->ListDB;
}

Cliente^ ClinicaController::DBController::QueryClienteByID(int IDcliente)
{
    clienteDB->Load();
    for (int i = 0; i < clienteDB->ListDB->Count; i++) {
        if (clienteDB->ListDB[i]->IDcliente  == IDcliente) {
            return clienteDB->ListDB[i];
        }
    }
    return nullptr;
}




//**********************MEDICAMENTOS************************//
void ClinicaController::DBController::AddMedicamento(Medicamentos^ medicamento)
{
    int nuevoID = medicamentoDB->ListDB->Count + 1;
    medicamento->IDmedicamento = nuevoID;
    medicamentoDB->ListDB->Add(medicamento);
    medicamentoDB->Persist();
}
void ClinicaController::DBController::UpdateMedicamento(Medicamentos^ medicamento)
{
    for (int i = 0; i < medicamentoDB->ListDB->Count; i++) {
        if (medicamentoDB->ListDB[i]->IDmedicamento == medicamento->IDmedicamento) {
            medicamentoDB->ListDB[i] = medicamento;
            medicamentoDB->Persist();
        }
    }
    medicamentoDB->Persist();
    return;
}
void ClinicaController::DBController::DeleteMedicamento(int IDmedicamento)
{
    for (int i = 0; i < medicamentoDB->ListDB->Count; i++) {
        if (medicamentoDB->ListDB[i]->IDmedicamento == IDmedicamento) {
            medicamentoDB->ListDB->RemoveAt(i);
            medicamentoDB->Persist();
        }
    }
    return;
}
List<Medicamentos^>^ ClinicaController::DBController::QueryAllMedicamentos()
{
    medicamentoDB->Load();
    return medicamentoDB->ListDB;
}
Medicamentos^ ClinicaController::DBController::QueryMedicamentoByID(int IDmedicamento)
{
    medicamentoDB->Load();
    for (int i = 0; i < medicamentoDB->ListDB->Count; i++) {
        if (medicamentoDB->ListDB[i]->IDmedicamento == IDmedicamento) {
            return medicamentoDB->ListDB[i];
        }
    }
    return nullptr;
}

//**********************MEDICOS************************//
void ClinicaController::DBController::AddMedico(Medico^ medico)
{
    int nuevocodigo = (medicoDB->ListDB->Count) + 1;
    medico->IDmedico = nuevocodigo;
    medicoDB->ListDB->Add(medico);
    medicoDB->Persist();
}

void ClinicaController::DBController::UpdateMedico(Medico^ medico)
{
    medicoDB->Load();
    for (int i = 0; i < medicoDB->ListDB->Count; i++) {
        if (medicoDB->ListDB[i]->IDmedico == medico->IDmedico) {
            medicoDB->ListDB[i] = medico;
            medicoDB->Persist();
            return;
            
        }
    }
}

void ClinicaController::DBController::DeleteMedico(int IDmedico)
{
    medicoDB->Load();
    for (int i = 0; i < medicoDB->ListDB->Count; i++) {
        if (medicoDB->ListDB[i]->IDmedico == IDmedico) {
            medicoDB->ListDB->RemoveAt(i);
            medicoDB->Persist();
            return;
        }
    }
}

List<Medico^>^ ClinicaController::DBController::QueryAllMedicos()
{
    medicoDB->Load();
    return medicoDB->ListDB;
}

Medico^ ClinicaController::DBController::QueryMedicoByID(int IDmedico)
{
    medicoDB->Load();
    for (int i = 0; i < medicoDB->ListDB->Count; i++) {
        if (medicoDB->ListDB[i]->IDmedico == IDmedico) {
            return medicoDB->ListDB[i];
        }
    }
    return nullptr;
}

//**********************RECEPCIONISTAS************************//
void ClinicaController::DBController::AddRecepcion(Recepcion^ R)
{
    int nuevoID = recepcionDB->ListDB->Count + 1;
    R->IDrecepcion = nuevoID;
    recepcionDB->ListDB->Add(R);
    recepcionDB->Persist();
}

void ClinicaController::DBController::UpdateRecepcion(Recepcion^ R)
{
    recepcionDB->Load();
    for (int i = 0; i < recepcionDB->ListDB->Count; i++) {
        if (recepcionDB->ListDB[i]->IDrecepcion == R->IDrecepcion) {
            recepcionDB->ListDB[i] = R;
            recepcionDB->Persist();
            return;

        }
    }
}

void ClinicaController::DBController::DeleteRecepcion(int IDrecepcion)
{
    recepcionDB->Load();
    for (int i = 0; i < recepcionDB->ListDB->Count; i++) {
        if (recepcionDB->ListDB[i]->IDrecepcion == IDrecepcion) {
            recepcionDB->ListDB->RemoveAt(i);
            recepcionDB->Persist();
            return;
        }
    }
}

List<Recepcion^>^ ClinicaController::DBController::QueryAllRecepcions()
{
    recepcionDB->Load();
    return recepcionDB->ListDB;
}

Recepcion^ ClinicaController::DBController::QueryRecepcionByID(int IDrecepcion)
{
    recepcionDB->Load();
    for (int i = 0; i < recepcionDB->ListDB->Count; i++) {
        if (recepcionDB->ListDB[i]->IDrecepcion == IDrecepcion) {
            return recepcionDB->ListDB[i];
        }
    }
    return nullptr;
}

void ClinicaController::DBController::LoadTipoMedico()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(TipoMedicoDB::typeid);
    System::IO::StreamReader^ file = gcnew System::IO::StreamReader("tipomedico.xml");
    tipomedicoDB = (TipoMedicoDB^)reader->Deserialize(file);
    file->Close();
}

void ClinicaController::DBController::SaveTipoMedico()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(TipoMedicoDB::typeid);
    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("tipomedico.xml");
    writer->Serialize(file, tipomedicoDB);
    file->Close();
}

void ClinicaController::DBController::LoadTipoGenero()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(TipoGeneroDB::typeid);
    System::IO::StreamReader^ file = gcnew System::IO::StreamReader("tipogenero.xml");
    tipogeneroDB = (TipoGeneroDB^)reader->Deserialize(file);
    file->Close();
}

List<TipoGenero^>^ ClinicaController::DBController::QueryAllTipoGeneros()
{
    LoadTipoGenero();

    return tipogeneroDB->ListDB;
}

void ClinicaController::DBController::SaveTipoGenero()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(TipoGeneroDB::typeid);
    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("tipogenero.xml");
    writer->Serialize(file, tipogeneroDB);
    file->Close();
}

void ClinicaController::DBController::Init()
{
    /*
    TipoMedico^ tp1 = gcnew TipoMedico();
    tp1->ID = 1;
    tp1->tipo = "Cardiólogo";
    TipoMedico^ tp2 = gcnew TipoMedico();
    tp2->ID = 2;
    tp2->tipo = "Neurólogo";
    tipomedicoDB->ListDB->Add(tp1);
    tipomedicoDB->ListDB->Add(tp2);
    SaveTipoMedico();

    TipoGenero^ tg1 = gcnew TipoGenero();
    tg1->ID = 1;
    tg1->tipo = "Masculino";
    TipoGenero^ tg2 = gcnew TipoGenero();
    tg2->ID = 2;
    tg2->tipo = "Femenino";
    tipogeneroDB->ListDB->Add(tg1);
    tipogeneroDB->ListDB->Add(tg2);
    SaveTipoGenero();
    */
}
