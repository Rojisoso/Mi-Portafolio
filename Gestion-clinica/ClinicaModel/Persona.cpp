#include "pch.h"
#include "Persona.h"

using namespace ClinicaModel;

Persona::Persona() {

}
Persona::Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contrasenha, String^ genero) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->DNI = DNI;
	this->correo = correo;
	this->telefono = telefono;
	this->fechaNacimiento = fechaNacimiento;
	this->idPersona = idPersona;
	this->contrasenha = contrasenha;
	this->genero = genero;
}