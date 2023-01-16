#include "pch.h"
#include "Triaje.h"

using namespace ClinicaModel;

Triaje::Triaje() {
}

Triaje::Triaje(int idTriaje, String^ temperatura, String^ peso, String^ talla, String^ tipoSangre, String^ ritmoCardiaco, Cita^ objCita) {
	this->idTriaje = idTriaje;
	this->temperatura = temperatura;
	this->peso = peso;
	this->talla = talla;
	this->tipoSangre = tipoSangre;
	this->ritmoCardiaco = ritmoCardiaco;
	this->objCita = objCita;
}