#include "pch.h"
#include "ServiciosClinica.h"

using namespace ClinicaModel;

ServiciosClinica::ServiciosClinica() {

}
ServiciosClinica::ServiciosClinica(int precio, int idServicio, Empleados^ objEmpleados) {
	this->precio = precio;
	this->idServicio = idServicio;
	this->objEmpleados = objEmpleados;
}
