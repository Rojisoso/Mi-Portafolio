#include "pch.h"
#include "ComprobanteCita.h"

using namespace ClinicaModel;

ComprobanteCita::ComprobanteCita() {

}
ComprobanteCita::ComprobanteCita(int numeroDocumento, String^ tipoDocumento, double montoTotal, String^ fechaRegistro, MedioPago^ objMedioPago, Cita^ fecha) {
	this->numeroDocumento = numeroDocumento;
	this->tipoDocumento = tipoDocumento;
	this->montoTotal = montoTotal;
	this->fechaRegistro = fechaRegistro;
	this->objMedioPago = objMedioPago;
}