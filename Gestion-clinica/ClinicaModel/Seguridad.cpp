#include "pch.h"
#include "Seguridad.h"
using namespace ClinicaModel;

Seguridad::Seguridad() {

}
Seguridad::Seguridad(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona, String^ contraseña, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDseguridad) : Empleados(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero, fechaInicio, salario, seguro, gradoAcademico, cargo, fechaFin) {

	this->IDseguridad = IDseguridad;

}
