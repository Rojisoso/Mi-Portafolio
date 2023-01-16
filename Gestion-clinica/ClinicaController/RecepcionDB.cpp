#include "pch.h"
#include "RecepcionDB.h"
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ClinicaController::RecepcionDB::Persist()
{
	Stream^ stream = File::Open("recepcion.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void ClinicaController::RecepcionDB::Load()
{
	if (File::Exists("recepcion.bin")) {
		Stream^ stream = File::Open("recepcion.bin", FileMode::Open);
		BinaryFormatter^ binFormatter = gcnew BinaryFormatter();
		ListDB = (List<Recepcion^>^)binFormatter->Deserialize(stream);
		stream->Close();
	}
}
