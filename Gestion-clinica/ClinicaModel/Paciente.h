#pragma once
#include"Persona.h"
#include"HistorialClinico.h"

namespace ClinicaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	//herencia
	public ref class Paciente : public Persona {
		//atributos
	public:
		String^ fechaRegistro;
		String^ seguro;


		//metodos/funciones
	public:
		Paciente();
		Paciente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona, String^ contrasenha,String^ genero, String^ fechaRegistro, String^ seguro);
	};
}