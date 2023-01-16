#pragma once
#include "Empleados.h"

using namespace System;

namespace ClinicaModel {
	[Serializable]
	public ref class Recepcion : public Empleados {

	public:
		property int IDrecepcion;
		property String^ Tipo;
		property String^ HorarioAtencion;

	public:
		Recepcion();
		Recepcion(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDrecepcion, String^ Tipo, String^ HorarioAtencion);

	};


}

