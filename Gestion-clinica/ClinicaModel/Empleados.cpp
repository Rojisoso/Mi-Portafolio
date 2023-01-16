#include "pch.h"
#include "Empleados.h"
using namespace ClinicaModel;

Empleados::Empleados() {

}
Empleados::Empleados(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña,String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero) {
	this->fechaInicio = fechaInicio;
	this->salario = salario;
	this->seguro = seguro;
	this->gradoAcademico = gradoAcademico;
	this->cargo = cargo;
	this->fechaFin = fechaFin;
}
