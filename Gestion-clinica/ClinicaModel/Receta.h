#pragma once
using namespace System;

namespace ClinicaModel {

	public ref class Receta {
	public:
		property String^ examenesMedicos;
		property String^ analisis;
		property String^ descripcion;
		property int IDreceta;

	public:
		Receta();
		Receta( String^ examenesMedicos, String^ analisis, String^ descripcion, int IDreceta);
	};
}