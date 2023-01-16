#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace ClinicaModel {
	[Serializable]
	public ref class TipoGenero {

	public:
		property int ID;
		property String^ tipo;
	};
}

