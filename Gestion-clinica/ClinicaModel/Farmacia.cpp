#include "pch.h"
#include "Farmacia.h"

using namespace ClinicaModel;

Farmacia::Farmacia() {

}
Farmacia::Farmacia(String^ encargado, String^ especialista, String^ inventario, String^ proveedor, int idEmpleado) {

	this->encargado = encargado;
	this->especialista = especialista;
	this->inventario = inventario;
	this->proveedor = proveedor;
	this->idEmpleado = idEmpleado;


}