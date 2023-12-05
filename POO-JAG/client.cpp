#include "pch.h"
#include "client.h"

String^ NS_Comp_Mappage::client::ajouter(void) {
	return "INSERT INTO TB_P6 (nom_du_client, prenom_du_client, anniversairedu_client, anniversaire_premier_achat) VALUES('" + this->nom_client + "','" + this->prenom_client + "','" + this->anniversaire_client + "','" + this->anniversairepa_client + "');";
}

String^ NS_Comp_Mappage::client::modifier(void) {
	return "UPDATE TB_P6 SET nom_client' " + this->nom_client + "',prenom_client='" + this->prenom_client + "', anniversaire_client='" + this->anniversaire_client + "'anniversairepa_client='" + this->anniversairepa_client + ";";
}

String^ NS_Comp_Mappage::client::supprimer(void) {
	return"DELETE FROM TB_P6 where id_client=" + this->id_client + ";";
}

String^ NS_Comp_Mappage::client::afficher(void) {
	return"SELECT * FROM TB_P6;";
}

void NS_Comp_Mappage::client::setid_client(int id_client) {
	this->id_client = id_client;
}

void NS_Comp_Mappage::client::setnom_client(String^ nom_client) {
	this->nom_client = nom_client;
}

void NS_Comp_Mappage::client::setprenom_client(String^ prenom_client) {
	this->prenom_client = prenom_client;
}

void NS_Comp_Mappage::client::setanniversaire_client(String^ anniversaire_client) {
	this->anniversaire_client = anniversaire_client;
}

void NS_Comp_Mappage::client::setanniversairepa_client(String^ anniversairepa_client) {
	this->anniversairepa_client = anniversairepa_client;
}

int NS_Comp_Mappage::client::getid_client(void) {
	return this->id_client;
}

String^ NS_Comp_Mappage::client::getnom_client(void) {
	return this->nom_client;
}

String^ NS_Comp_Mappage::client::getprenom_client(void) {
	return this->prenom_client;
}

String^ NS_Comp_Mappage::client::getanniversaire_client(void) {
	return this->anniversaire_client;
}

String^ NS_Comp_Mappage::client::getanniversairepa_client(void) {
	return this->anniversairepa_client;
}
