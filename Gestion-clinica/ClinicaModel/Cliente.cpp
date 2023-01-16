#include "pch.h"
#include "Cliente.h"

ClinicaModel::Cliente::Cliente()
{
}

ClinicaModel::Cliente::Cliente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ correo, String^ telefono, String^ fechaNacimiento, int idPersona, String^ contraseña, String^ genero, int IDcliente, String^ FechaRegistro, String^ Seguro) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, DNI, correo, telefono, fechaNacimiento, idPersona, contrasenha, genero) {

    this->IDcliente = IDcliente;
    this->FechaRegistro = FechaRegistro;
    this->Seguro = Seguro;
}
