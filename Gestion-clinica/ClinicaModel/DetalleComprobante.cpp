#include "pch.h"
#include "DetalleComprobante.h"

using namespace ClinicaModel;

DetalleComprobante::DetalleComprobante() {

}
DetalleComprobante::DetalleComprobante(int precioUnitario, String^ cantidad) {
	this->precioUnitario = precioUnitario;
	this->cantidad = cantidad;

}