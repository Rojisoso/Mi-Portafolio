#include "pch.h"
#include "RespuestaReclamo.h"

using namespace ClinicaModel;

RespuestaReclamo::RespuestaReclamo() {
}

RespuestaReclamo::RespuestaReclamo(int idReclamo, String^ respuesta) {

	this->idReclamo = idReclamo;
	this->respuesta = respuesta;

}