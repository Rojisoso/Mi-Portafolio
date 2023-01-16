#include "pch.h"
#include "PersonaDB.h"

using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ClinicaController::PersonaDB::Persist()
{
	Stream^ stream = File::Open("personas.bin",FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::PersonaDB::LoadFromBinaryFile()
{
	if (File::Exists("personas.bin")) {
		Stream^ stream = File::Open("personas.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Persona^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}

void ClinicaController::PersonaDB::PersistCliente()
{
	Stream^ stream = File::Open("clientes.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::PersonaDB::LoadCliente()
{
	if (File::Exists("personas.bin")) {
		Stream^ stream = File::Open("personas.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Persona^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}
