#pragma once

using namespace System;

namespace ClinicaModel {
	
	[Serializable]
	public ref class Persona {

		//atributos
	public:
		
		property int codigo;
		property String^ nombre;
		property String^ apellidoPaterno;
		property String^ apellidoMaterno;
		property String^ DNI;
		property String^ correo;
		property String^ telefono;
		property String^ fechaNacimiento;
		property int idPersona;
		property String^ contrasenha;
		property String^ genero;

		//metodos/funciones
	public:
		Persona();
		Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contrasenha, String^ genero);
	};
}