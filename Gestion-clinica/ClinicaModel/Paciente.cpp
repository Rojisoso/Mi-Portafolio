#include "pch.h"
#include "Paciente.h"

using namespace ClinicaModel;

Paciente::Paciente() : Persona() {

}
Paciente::Paciente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona,String^ contrasenha,String^ genero, String^ fechaRegistro, String^ seguro) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero) {
	this->fechaRegistro = fechaRegistro;
	this->seguro = seguro;

}