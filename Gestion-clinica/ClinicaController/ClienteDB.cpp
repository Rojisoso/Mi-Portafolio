#include "pch.h"
#include "ClienteDB.h"
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ClinicaController::ClienteDB::Persist()
{
	Stream^ stream = File::Open("clientes.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::ClienteDB::Load()
{
	if (File::Exists("clientes.bin")) {
		Stream^ stream = File::Open("clientes.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Cliente^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}
