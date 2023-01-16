#pragma once
#include "Cita.h"

namespace ClinicaModel {

	using namespace System;
	public ref class Triaje {
		//atributos
	public:
		int idTriaje;
		String^ temperatura;
		String^ peso;
		String^ talla;
		String^ tipoSangre;
		String^ ritmoCardiaco;
		Cita^ objCita;

		//metodos/funciones
	public:
		Triaje();
		Triaje(int idTriaje, String^ temperatura, String^ peso, String^ talla, String^ tipoSangre, String^ ritmoCardiaco, Cita^ objCita);
	};
}