#pragma once
#include "Medicamentos.h"


namespace ClinicaModel {

	using namespace System;


	public ref class Farmacia {

	public:
		property String^ encargado;
		property String^ especialista;
		property String^ inventario;
		property String^ proveedor;
		property int idEmpleado;



	public:
		Farmacia();
		Farmacia(String^ encargado, String^ especialista, String^ inventario, String^ proveedor, int idEmpleado);

	};


}