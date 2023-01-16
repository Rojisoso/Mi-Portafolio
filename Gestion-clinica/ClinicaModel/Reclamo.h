#pragma once
#include "Cliente.h"

using namespace System;

namespace ClinicaModel {

	public ref class Reclamo {
	public:
		int codigoReclamo;
		String^ fecha;
		String^ descripcion;
		String^ estado;
		Cliente^ objpaciente;

	public:
		Reclamo();
		Reclamo(int codigoReclamo, String^ fecha, String^ descripcion, String^ estado, Cliente^ objpaciente);
	};
}