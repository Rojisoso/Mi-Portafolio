#include "pch.h"
#include "MedicamentoDB.h"
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ClinicaController::MedicamentoDB::Persist()
{
	Stream^ stream = File::Open("medicamentos.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::MedicamentoDB::Load()
{
	if (File::Exists("medicamentos.bin")) {
		Stream^ stream = File::Open("medicamentos.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Medicamentos^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}
