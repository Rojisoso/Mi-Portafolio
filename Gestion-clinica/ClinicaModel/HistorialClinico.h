#pragma once
#include "Cliente.h"

namespace ClinicaModel {

	using namespace System;
	using namespace System::Collections::Generic;
	public ref class HistorialClinico {

		//atributos
	public:
		int IDhistorial;
		String^ area;
		String^ fechaRegistro;
		String^ motivoConsulta;
		String^ IDdoctor;

		//metodos/funciones
	public:
		HistorialClinico();
		HistorialClinico(int IDhistorial, String^ area, String^ fechaRegistro, String^ motivoConsulta, String^ IDdoctor);
	};
}