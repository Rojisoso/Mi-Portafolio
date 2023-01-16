#pragma once
#include "Empleados.h"

namespace ClinicaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	//herencia
	public ref class Seguridad : public Empleados {
		//atributos
	public:
		property int IDseguridad;


		//metodos/funciones
	public:
		Seguridad();
		Seguridad(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona, String^ contraseña, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDseguridad);
	};
}

