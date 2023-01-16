#include "pch.h"
#include "Recepcion.h"

ClinicaModel::Recepcion::Recepcion()
{
}

ClinicaModel::Recepcion::Recepcion(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña, String^ genero, String^ fechaInicio, int salario, String^ seguro, String^ gradoAcademico, String^ cargo, String^ fechaFin, int IDrecepcion, String^ Tipo, String^ HorarioAtencion) : Empleados(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero, fechaInicio, salario, seguro, gradoAcademico, cargo, fechaFin)
{
    this->IDrecepcion = IDrecepcion;
    this->Tipo = Tipo;
    this->HorarioAtencion = HorarioAtencion;

}
