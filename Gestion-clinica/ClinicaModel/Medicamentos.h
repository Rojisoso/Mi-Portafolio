#pragma once

using namespace System;

namespace ClinicaModel {
	[Serializable]
	public ref class Medicamentos {

	public:
		property int IDmedicamento;
		property String^ nombre;
		property int stock;
		property int precio;

	public:
		Medicamentos();
		Medicamentos(int IDmedicamento, String^nombre, int stock, int precio);

	};


}

