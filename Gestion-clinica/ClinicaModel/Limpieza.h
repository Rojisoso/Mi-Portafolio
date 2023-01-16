#pragma once
#include "Empleados.h"

namespace ClinicaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	//herencia
	public ref class Limpieza : public Empleados {
		//atributos
	public:
		property int IDlimpieza;


		//metodos/funciones
	public:
		Limpieza();
		Limpieza(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona, String^ contrase�a, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDlimpieza);
	};
}
