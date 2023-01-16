#include "pch.h"
#include "ComprobanteServicio.h"

using namespace ClinicaModel;

ComprobanteServicio::ComprobanteServicio() {

}
ComprobanteServicio::ComprobanteServicio(int numeroDocumento, String^ tipoDocumento, double montoTotal, String^ fechaRegistro, MedioPago^ objMedioPago) {
	this->numeroDocumento = numeroDocumento;
	this->tipoDocumento = tipoDocumento;
	this->montoTotal = montoTotal;
	this->fechaRegistro = fechaRegistro;
	this->objMedioPago = objMedioPago;
}