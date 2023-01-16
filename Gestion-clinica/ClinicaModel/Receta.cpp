#include "pch.h"
#include "Receta.h"
using namespace ClinicaModel;

Receta::Receta() {

}
Receta::Receta(String^ examenesMedicos, String^ analisis, String^ descripcion, int IDreceta) {
	this->examenesMedicos = examenesMedicos;
	this->analisis = analisis;
	this->descripcion = descripcion;
	this->IDreceta = IDreceta;
}