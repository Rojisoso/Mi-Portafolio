#pragma once
#include"Persona.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ClinicaModel {
	[Serializable]
	//herencia
	public ref class Empleados : public Persona {
		//atributos
	public:
		property String^ fechaInicio;
		property int salario;
		property String^ seguro;
		property String^ gradoAcademico;
		property String^ cargo;
		property String^ fechaFin;

		//metodos/funciones
	public:
		Empleados();
		Empleados(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña,String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin);
	};
}