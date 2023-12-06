#include "pch.h"
#include "adresse.h"

void NS_Comp_Mappage::adresse::setid_adresse(int^ id_adresse) {
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage::adresse::setnom_adresse(String^ nom_adresse) {
	this->nom_adresse = nom_adresse;
}
void NS_Comp_Mappage::adresse::setptrid_ville(ville^ptrid_ville){
	this->ptrid_ville = ptrid_ville;
}
int^ NS_Comp_Mappage::adresse::getid_adresse(void) {
	return this->id_adresse;
}
String^ NS_Comp_Mappage::adresse::getnom_adresse(void) {
	return this->nom_adresse;
}
NS_Comp_Mappage::ville^ NS_Comp_Mappage::adresse::getptrid_ville(void) {
	return this->ptrid_ville;
}
