#pragma once

namespace ClinicaModel {

	using namespace System;

	public ref class DetalleComprobante {

	public:
		property int precioUnitario;
		property String^ cantidad;

	public:
		DetalleComprobante();
		DetalleComprobante(int precioUnitario, String^ cantidad);


	};


}
