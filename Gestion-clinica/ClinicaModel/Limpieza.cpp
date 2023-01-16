#include "pch.h"
#include "Limpieza.h"
using namespace ClinicaModel;

Limpieza::Limpieza() {

}
Limpieza::Limpieza(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, String^ idPersona, String^ contraseña, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDlimpieza) : Empleados(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero, fechaInicio, salario, seguro, gradoAcademico, cargo, fechaFin) {

	this->IDlimpieza = IDlimpieza;

}
