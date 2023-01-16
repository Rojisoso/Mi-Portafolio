#include "pch.h"
#include "LoginForm.h"
#include "ClinicaMainForm.h"

System::Void ClinicaView::LoginForm::btningresar_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	
	Persona^ user = ClinicaManager::ValidateUser(txtusuario->Text, txtcontra->Text);
	Cliente^ cliente = ClinicaManager::ValidateCliente(txtusuario->Text, txtcontra->Text);
	Medico^ medico = ClinicaManager::ValidateMedico(txtusuario->Text, txtcontra->Text);
	if (user != nullptr && cliente ==  nullptr && medico ==nullptr) {
		MessageBox::Show("Bienvenido " + user->nombre + " " + user->apellidoPaterno);
		this->Hide();
		ClinicaMainForm::user = user;
	}
	
	else if (cliente != nullptr && user == nullptr && medico == nullptr) {
		MessageBox::Show("Bienvenido " + cliente->nombre + " " + cliente->apellidoPaterno);
		this->Hide();
		ClinicaMainForm::cliente = cliente;
	}
	
	else if (medico != nullptr && user == nullptr && cliente == nullptr) {
		MessageBox::Show("Bienvenido Dr(a)." + medico->nombre + " " + medico->apellidoPaterno);
		this->Hide();
		ClinicaMainForm::medico = medico;
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
	return System::Void();
}
