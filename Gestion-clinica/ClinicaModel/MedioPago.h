#pragma once
namespace ClinicaModel {

	using namespace System;
	public ref class MedioPago {

		//atributos
	public:
		int codigo;
		String^ tipo;
		double montoPago;
		String^ fechaPago;

		//metodos
	public:
		MedioPago();
		MedioPago(int codigo, String^ tipo, double montoPago, String^ fechaPago);
	};
}