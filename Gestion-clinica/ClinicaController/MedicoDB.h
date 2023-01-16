#pragma once

using namespace System::Collections::Generic;
using namespace ClinicaModel;

namespace ClinicaController {

	public ref class MedicoDB {

	public:
		List<Medico^>^ ListDB = gcnew List<Medico^>();
		void Persist();
		void Load();

	};

}

