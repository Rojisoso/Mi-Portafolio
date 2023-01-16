#pragma once

using namespace System::Collections::Generic;
using namespace ClinicaModel;

namespace ClinicaController{

		public ref class PersonaDB{

			public:
				List<Persona^>^ ListDB = gcnew List<Persona^>();
				void Persist();
				void LoadFromBinaryFile();
				void PersistCliente();
				void LoadCliente();
		};

}


