#include "pch.h"
#include "adresse.h"

System::String^ NS_Comp_Mappage::adresse::selectID(void) {
	return "SELECT [id_adresse] FROM [dbo].[adresse] WHERE [nom_adresse] LIKE '" + this->nom_adresse + "'";
}

System::String^ NS_Comp_Mappage::adresse::ajoutAdresse(void) {
	return "INSERT INTO [dbo].[adresse] ([nom_adresse], [id_ville]) VALUES ('" + this->nom_adresse + "', " + System::Convert::ToString(this->ptrid_ville) + ")";
}

System::String^ NS_Comp_Mappage::adresse::supprimer(void) {
	return "DELETE FROM [dbo].[adresse] WHERE [id_adresse] = " + this->id_adresse;
}

System::String^ NS_Comp_Mappage::adresse::modifier(void) {
	return "UPDATE [dbo].[adresse] SET [nom_adresse] = '" + this->nom_adresse +"', [id_ville] = " + this->ptrid_ville;
}

void NS_Comp_Mappage::adresse::setid_adresse(int^ id_adresse) {
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage::adresse::setnom_adresse(String^ nom_adresse) {
	this->nom_adresse = nom_adresse;
}
void NS_Comp_Mappage::adresse::setptrid_ville(int^ ptrid_ville){
	this->ptrid_ville = ptrid_ville;
}
int^ NS_Comp_Mappage::adresse::getid_adresse(void) {
	return this->id_adresse;
}
String^ NS_Comp_Mappage::adresse::getnom_adresse(void) {
	return this->nom_adresse;
}
int^ NS_Comp_Mappage::adresse::getptrid_ville(void) {
	return this->ptrid_ville;
}
