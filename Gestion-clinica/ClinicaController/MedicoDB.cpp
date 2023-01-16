#include "pch.h"
#include "MedicoDB.h"
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ClinicaController::MedicoDB::Persist()
{
	Stream^ stream = File::Open("medicos.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::MedicoDB::Load()
{
	if (File::Exists("medicos.bin")) {
		Stream^ stream = File::Open("medicos.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Medico^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}
