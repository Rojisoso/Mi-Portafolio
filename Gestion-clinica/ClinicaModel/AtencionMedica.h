#pragma once
#include "Triaje.h"
namespace ClinicaModel {
	using namespace System;
	public ref class AtencionMedica {

		//atributos
	public:

		property String^ idEmpleado;
		property String^ idEspecialidad;
		property String^ fecha;
		property String^ obsPaciente;
		property String^ obsMedicas;
		property String^ tratamiento;
		property Triaje^ objTriaje;

		//funciones
	public:

		AtencionMedica();
		AtencionMedica(String^ idEmpleado, String^ idEspecialidad, String^ fecha, String^ obsPaciente, String^ obsMedicas, String^ tratamiento, Triaje^ objTriaje);


	};

}