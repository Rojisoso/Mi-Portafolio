#include "pch.h"
#include "Clinica.h"

using namespace ClinicaModel;

Clinica::Clinica( String^ fechaInauguracion, String^ ruc, String^ ubicacion, String^ telefono, List<Cita^>^ listaCitas) {

	this->fechaInauguracion = fechaInauguracion;
	this->ruc = ruc;
	this->ubicacion = ubicacion;
	this->telefono = telefono;
	this->listaCitas = listaCitas;

}