#include "pch.h"
#include "commande.h"

String^ NS_Comp_Mappage::commande::ajouter(void) {
	return "INSERT INTO [dbo].[commande] (reference_commande, soldereglement_commande, moyenpayement_commande, dateemmission_commande, datepayement_commande, datelivraison_commande, id_client) VALUES('" + this->reference_commande + "','" + this->soldereglement_commande + "', '" + this->moyenpayement_commande + "', '" + this->dateemmission_commande + "', '" + this->datepayement_commande + "', '" + this->datelivraison_commande + "', " + this->ptrid_client +");";
}

String^ NS_Comp_Mappage::commande::modifier(void) {
	return "UPDATE [dbo].[commande] SET soldereglement_commande = '" + this->soldereglement_commande + "', moyenpayement_commande = '" + this->moyenpayement_commande + "', dateemmission_commande = '" + this->dateemmission_commande + "', datepayement_commande = '" + this->datepayement_commande + "', datelivraison_commande = '" + this->datelivraison_commande + "' WHERE [id_commande] = " + this->id_commande +";";
}

String^ NS_Comp_Mappage::commande::supprimer(void) {
	return"DELETE FROM [dbo].[commande] WHERE id_commande = " + this->id_commande + ";";
}

String^ NS_Comp_Mappage::commande::afficher(void) {
	return"SELECT * FROM TB_P6;";
}

String^ NS_Comp_Mappage::commande::compteurCommande(void) {
	return "SELECT COUNT(*) FROM [dbo].[commande] WHERE [id_client] = " + this->ptrid_client;
}


String^ NS_Comp_Mappage::commande::selectId(void) {
	return "SELECT [id_commande] FROM [dbo].[commande] WHERE [soldereglement_commande] = " + this->soldereglement_commande + " AND [moyenpayement_commande] LIKE '" + this->moyenpayement_commande + "' AND [dateemmission_commande] LIKE '" + this->dateemmission_commande + "' AND [datepayement_commande] LIKE '" + this->datepayement_commande + "' AND [datelivraison_commande] LIKE '" + this->datelivraison_commande + "' AND [id_client] = " + this->ptrid_client;
}

void NS_Comp_Mappage::commande::setid_commande(int^ id_commande) {
	this->id_commande = id_commande;
}

void NS_Comp_Mappage::commande::setsoldereglement_commande(String^ soldereglement_commande) {
	this->soldereglement_commande = soldereglement_commande;
}

void NS_Comp_Mappage::commande::setptrid_client(int^ ptrid_client) {
	this->ptrid_client = ptrid_client;
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

int^ NS_Comp_Mappage::commande::getid_commande(void) {
	return this->id_commande;
}

String^ NS_Comp_Mappage::commande::getsoldereglement_commande(void) {
	return this->soldereglement_commande;
}

int^ NS_Comp_Mappage::commande::getptrid_client(void) {
	return this->ptrid_client;
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