#include "pch.h"
#include "Cita.h"

using namespace ClinicaModel;

Cita::Cita(int codigoCita, String^ fecha, String^ precio, int codigoDoctor, int codigoPaciente, String^ horario) {

	this->codigoCita = codigoCita;
	this->fecha = fecha;
	this->precio = precio;
	this->codigoDoctor = codigoDoctor;
	this->codigoPaciente = codigoPaciente;
	this->horario = horario;


}