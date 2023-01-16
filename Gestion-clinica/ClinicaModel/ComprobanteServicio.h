#pragma once
#include "MedioPago.h"
#include "Cita.h"

namespace ClinicaModel {
	using namespace System;
	//herencia
	public ref class ComprobanteServicio {
		//atributos
	public:
		property int numeroDocumento;
		property String^ tipoDocumento;
		property double montoTotal;
		property String^ fechaRegistro;
		property MedioPago^ objMedioPago;
		property Cita^ fecha;
		//metodos
	public:
		ComprobanteServicio();
		ComprobanteServicio(int numeroDocumento, String^ tipoDocumento, double montoTotal, String^ fechaRegistro, MedioPago^ objMedioPago);
	};
}