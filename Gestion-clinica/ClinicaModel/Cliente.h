#pragma once
#include"Persona.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ClinicaModel {
	[Serializable]

	//herencia
	public ref class Cliente : public Persona {
		//atributos
	public:
		property int IDcliente;
		property String^ FechaRegistro;
		property String^ Seguro;


		//metodos/funciones
	public:
		Cliente();
		Cliente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña, String^ genero, int IDcliente, String^ FechaRegistro, String^ Seguro);


	};
}