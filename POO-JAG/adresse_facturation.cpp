#include "pch.h"
#include "adresse_facturation.h"

System::String^ NS_Comp_Mappage::adresse_facturation::ajout(void) {
	return "INSERT INTO [dbo].[adresse_facturation] ([id_client], [id_adresse]) VALUES (" + System::Convert::ToString(this->ptrid_client) + ", " + System::Convert::ToString(this->ptrid_adresse) + ")";
}

System::String^ NS_Comp_Mappage::adresse_facturation::selectIdAdresse(void) {
	return "SELECT [id_adresse] FROM [dbo].[adresse_facturation] WHERE [id_client] = " + this->ptrid_client;
}

System::String^ NS_Comp_Mappage::adresse_facturation::supprimer(void) {
	return "DELETE FROM [dbo].[adresse_facturation] WHERE [id_client] = " + System::Convert::ToInt32(this->ptrid_client);
}

void NS_Comp_Mappage::adresse_facturation::setptrid_client(int^ ptrid_client) {
	this->ptrid_client = ptrid_client;
}

int^ NS_Comp_Mappage::adresse_facturation::getptrid_client(void) {
	return this->ptrid_client;
}

void NS_Comp_Mappage::adresse_facturation::setptrid_adresse(int^ ptrid_adresse) {
	this->ptrid_adresse = ptrid_adresse;
}

int^ NS_Comp_Mappage::adresse_facturation::getptrid_adresse(void) {
	return this->ptrid_adresse;
}