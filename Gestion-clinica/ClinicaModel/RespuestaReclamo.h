#pragma once
using namespace System;

namespace ClinicaModel {

	public ref class RespuestaReclamo {
	public:
		int idReclamo;
		String^ respuesta;


	public:
		RespuestaReclamo();
		RespuestaReclamo( int idReclamo, String^ respuesta);
	};
}