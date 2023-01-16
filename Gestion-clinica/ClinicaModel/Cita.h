#pragma once


namespace ClinicaModel {

	using namespace System;


	public ref class Cita {

	public:

		property int codigoCita;
		property String^ fecha;
		property String^ precio;
		property int codigoDoctor;
		property int codigoPaciente;
		property String^ horario;

	public:
		Cita(int codigoCita, String^ fecha, String^ precio, int codigoDoctor, int codigoPaciente, String^ horario);


	};


}
