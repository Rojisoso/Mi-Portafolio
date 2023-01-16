#pragma once

using namespace System::Collections::Generic;
using namespace ClinicaModel;

namespace ClinicaController {

	public ref class ClienteDB {

	public:
		List<Cliente^>^ ListDB = gcnew List<Cliente^>();
		void Persist();
		void Load();

	};

}

