#include "pch.h"
#include "Medicamentos.h"


using namespace ClinicaModel;

Medicamentos::Medicamentos() {

}
Medicamentos::Medicamentos(int IDmedicamento, String^ nombre, int stock, int precio) {

	this->IDmedicamento = IDmedicamento;
	this->nombre = nombre;
	this->stock = stock;
	this->precio = precio;



}