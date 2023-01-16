#include "pch.h"
#include "MedioPago.h"

using namespace ClinicaModel;

MedioPago::MedioPago() {

}

MedioPago::MedioPago(int codigo, String^ tipo, double montoPago, String^ fechaPago) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->montoPago = montoPago;
	this->fechaPago = fechaPago;
}