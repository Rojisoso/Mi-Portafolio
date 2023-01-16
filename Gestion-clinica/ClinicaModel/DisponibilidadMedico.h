#pragma once

namespace ClinicaModel {

	using namespace System;

	public ref class DisponibilidadMedico {

	public:

		String^ horaInicio;
		String^ horaFin;

	public:
		DisponibilidadMedico();
		DisponibilidadMedico(String^ horaInicio, String^ horaFin);


	};


}
