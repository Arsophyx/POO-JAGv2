#include "pch.h"
#include "adresse_facturation.h"

void NS_Comp_Mappage::adresse::setid_adresse(int^ id_adresse) {
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage::adresse::setnom_adresse(String^) {
	this->nom_adresse = nom_adresse;
}
void NS_Comp_Mappage::adresse::setid_ville(int^ id_ville) {
	this->id_ville = id_ville;
}
int^ NS_Comp_Mappage::adresse::getid_adresse(void) {
	return this->id_adresse;
}
String^ NS_Comp_Mappage::adresse::getnom_adresse(void) {
	return this->nom_adresse;
}
int^ NS_Comp_Mappage::adresse::getid_ville(void) {
	return this->id_ville;
}