#pragma once
#include "Empleados.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ClinicaModel {
	[Serializable]
	//herencia
	public ref class Medico : public Empleados {
		//atributos
	public:
		property int IDmedico;
		property String^ Especializacion;

		//metodos/funciones
	public:
		Medico();
	};
}
