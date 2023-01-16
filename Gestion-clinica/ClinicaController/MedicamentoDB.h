#pragma once

using namespace System::Collections::Generic;
using namespace ClinicaModel;

namespace ClinicaController {

	public ref class MedicamentoDB {

	public:
		List<Medicamentos^>^ ListDB = gcnew List<Medicamentos^>();
		void Persist();
		void Load();

	};

}

