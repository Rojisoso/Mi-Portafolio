#pragma once
#include "Empleados.h"
namespace ClinicaModel {

	using namespace System;
	public ref class ServiciosClinica {
		//atributos
	public:
		int precio;
		int idServicio;
		Empleados^ objEmpleados;
		//metodos
	public:
		ServiciosClinica();
		ServiciosClinica(int precio, int idServicio, Empleados^ objEmpleados);
	};
}