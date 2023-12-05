#include "pch.h"
#include "client.h"

String^ NS_Comp_Mappage::commande::ajouter(void) {
	return "INSERT INTO TB_P6 (soldereglement_commande, moyen_de_payement, dateemission_commande, datepayement_commande, datelivraison_commande) VALUES('" + this->soldereglement_commande + "','" + this->moyenpayement_commande + "','" + this->dateemmission_commande + "','" + this->datepayement_commande + "','" + this->datelivraison_commande + "');";
}

String^ NS_Comp_Mappage::commande::modifier(void) {
	return "UPDATE TB_P6 SET soldereglement_commande' " + this->soldereglement_commande + "',moyenpayement_commande='" + this->moyenpayement_commande + "', dateemission_commande='" + this->dateemmission_commande + "'datepayement_commande='" + this->datepayement_commande + "'datelivraison_commande='" + this->datelivraison_commande + ";";
}

String^ NS_Comp_Mappage::commande::supprimer(void) {
	return"DELETE FROM TB_P6 where id_commande=" + this->id_commande + ";";
}

String^ NS_Comp_Mappage::commande::afficher(void) {
	return"SELECT * FROM TB_P6;";
}

void NS_Comp_Mappage::commande::setid_commande(int) {
	this->id_commande = id_commande;
}

void NS_Comp_Mappage::commande::setsoldereglement_commande(int) {
	this->soldereglement_commande = soldereglement_commande;
}

void NS_Comp_Mappage::commande::setid_client(int id_client) {
	this->id_client = id_client;
}

void NS_Comp_Mappage::commande::setreference_commande(String^ reference_commande) {
	this->reference_commande = reference_commande;
}

void NS_Comp_Mappage::commande::setmoyenpayement_commande(String^ moyenpayement_commande) {
	this->moyenpayement_commande = moyenpayement_commande;
}

void NS_Comp_Mappage::commande::setdateemission_commande(String^ dateemmission_commande) {
	this->dateemmission_commande = dateemmission_commande;
}

void NS_Comp_Mappage::commande::setdatepayement_commande(String^ datepayement_commande) {
	this->datepayement_commande = datepayement_commande;
}

void NS_Comp_Mappage::commande::setdatelivraison_commande(String^ datelivraison_commande) {
	this->datelivraison_commande = datelivraison_commande;
}

int NS_Comp_Mappage::commande::getid_commande(void) {
	return this->id_commande;
}

int NS_Comp_Mappage::commande::getsoldereglement_commande(void) {
	return this->soldereglement_commande;
}

int NS_Comp_Mappage::commande::getid_client(void) {
	return this->id_client;
}

String^ NS_Comp_Mappage::commande::getreference_commande(void) {
	return this->reference_commande;
}

String^ NS_Comp_Mappage::commande::getmoyenpayement_commande(void) {
	return this->moyenpayement_commande;
}

String^ NS_Comp_Mappage::commande::getdatemission_commande(void) {
	return this->dateemmission_commande;
}

String^ NS_Comp_Mappage::commande::getdatelivraison_commande(void) {
	return this->datelivraison_commande;
}