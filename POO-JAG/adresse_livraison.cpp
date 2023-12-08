#include "pch.h"
#include "adresse_livraison.h"

System::String^ NS_Comp_Mappage::adresse_livraison::ajout(void) {
	return "INSERT INTO [dbo].[adresse_livraison] ([id_client], [id_adresse]) VALUES (" + System::Convert::ToString(this->ptrid_client) + ", " + System::Convert::ToString(this->ptrid_adresse) + ")";
}

System::String^ NS_Comp_Mappage::adresse_livraison::selectIdAdresse(void) {
	return "SELECT [id_adresse] FROM [dbo].[adresse_livraison] WHERE [id_client] = " + this->ptrid_client;
}

System::String^ NS_Comp_Mappage::adresse_livraison::supprimer(void) {
	return "DELETE FROM [dbo].[adresse_livraison] WHERE [id_client] = " + System::Convert::ToInt32(this->ptrid_client);
}

void NS_Comp_Mappage::adresse_livraison::setptrid_client(int^ ptrid_client) {
	this->ptrid_client = ptrid_client;
}

int^ NS_Comp_Mappage::adresse_livraison::getptrid_client(void) {
	return this->ptrid_client;
}

void NS_Comp_Mappage::adresse_livraison::setptrid_adresse(int^ ptrid_adresse) {
	this->ptrid_adresse = ptrid_adresse;
}

int^ NS_Comp_Mappage::adresse_livraison::getptrid_adresse(void) {
	return this->ptrid_adresse;
}