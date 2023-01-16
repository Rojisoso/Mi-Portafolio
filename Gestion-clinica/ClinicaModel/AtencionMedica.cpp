#include "pch.h"
#include "AtencionMedica.h"

using namespace ClinicaModel;

AtencionMedica::AtencionMedica() {


}

AtencionMedica::AtencionMedica(String^ idEmpleado, String^ idEspecialidad, String^ fecha, String^ obsPaciente, String^ obsMedicas, String^ tratamiento, Triaje^ objTriaje) {
	this->idEmpleado = idEmpleado;
	this->idEspecialidad = idEspecialidad;
	this->fecha = fecha;
	this->obsPaciente = obsPaciente;
	this->obsMedicas = obsMedicas;
	this->tratamiento = tratamiento;
	this->objTriaje = objTriaje;

}