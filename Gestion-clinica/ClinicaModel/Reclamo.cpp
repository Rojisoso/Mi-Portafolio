#include "pch.h"
#include "Reclamo.h"

using namespace ClinicaModel;

Reclamo::Reclamo() {

}
Reclamo::Reclamo(int codigoReclamo, String^ fecha, String^ descripcion, String^ estado, Cliente^ objpaciente) {
	this->codigoReclamo = codigoReclamo;
	this->fecha = fecha;
	this->descripcion = descripcion;
	this->estado = estado;
	this->objpaciente = objpaciente;

}