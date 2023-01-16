#pragma once

using namespace System::Collections::Generic;
using namespace ClinicaModel;

namespace ClinicaController {

	public ref class RecepcionDB {

	public:
		List<Recepcion^>^ ListDB = gcnew List<Recepcion^>();
		void Persist();
		void Load();

	};

}
