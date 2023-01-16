#pragma once
#include"Cita.h"


namespace ClinicaModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Clinica {

	public:
		property String^ fechaInauguracion;
		property String^ ruc;
		property String^ ubicacion;
		property String^ telefono;
		property List<Cita^>^ listaCitas;
		

	public:

		Clinica( String^ fechaInauguracion, String^ ruc, String^ ubicacion, String^ telefono, List<Cita^>^ listaCitas);

	};


}