#include "pch.h"
#include "adresse_livraison.h"

void NS_Comp_Mappage::adresse_livraison::setptrid_client(client^ ptrid_client) {
	this->ptrid_client = ptrid_client;
}

NS_Comp_Mappage::client^ NS_Comp_Mappage::adresse_livraison::getptrid_client(void) {
	return this->ptrid_client;
}

void NS_Comp_Mappage::adresse_livraison::setptrid_adresse(adresse^ ptrid_adresse) {
	this->ptrid_adresse = ptrid_adresse;
}

NS_Comp_Mappage::adresse^ NS_Comp_Mappage::adresse_livraison::getptrid_adresse(void) {
	return this->ptrid_adresse;
}