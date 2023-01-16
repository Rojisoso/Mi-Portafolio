#include "pch.h"
#include "DisponibilidadMedico.h"


using namespace ClinicaModel;

DisponibilidadMedico::DisponibilidadMedico() {

}
DisponibilidadMedico::DisponibilidadMedico(String^ horaInicio, String^ horaFin) {
	this->horaInicio = horaInicio;
	this->horaFin = horaFin;

}