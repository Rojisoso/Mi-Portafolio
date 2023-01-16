#include "pch.h"
#include "HistorialClinico.h"

using namespace ClinicaModel;
using namespace System;


HistorialClinico::HistorialClinico() {

}

HistorialClinico::HistorialClinico(int IDhistorial, String^ area, String^ fechaRegistro, String^ motivoConsulta, String^ IDdoctor) {
	this->IDhistorial = IDhistorial;
	this->area = area;
	this->fechaRegistro = fechaRegistro;
	this->motivoConsulta = motivoConsulta;
	this->IDdoctor = IDdoctor;
}