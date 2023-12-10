#include "pch.h"
#include "client.h"

String^ NS_Comp_Mappage::client::ajouter(void) {
	return "INSERT INTO [dbo].[client] (nom_client, prenom_client, anniversaire_client, anniversairepa_client) VALUES('" + this->nom_client + "','" + this->prenom_client + "','" + this->anniversaire_client + "', '');";
}

String^ NS_Comp_Mappage::client::modifier(void) {
	return "UPDATE [dbo].[client] SET nom_client = '" + this->nom_client + "', prenom_client = '" + this->prenom_client + "', anniversaire_client = '" + this->anniversaire_client + "' WHERE [id_client] = " + this->id_client;
}

String^ NS_Comp_Mappage::client::supprimer(void) {
	return"DELETE FROM [dbo].[client] where id_client=" + this->id_client + ";";
}

String^ NS_Comp_Mappage::client::afficher(void) {
	return "SELECT * FROM [dbo].[client];";
}

String^ NS_Comp_Mappage::client::selectId(void) {
	return "SELECT [id_client] FROM [dbo].[client] WHERE [nom_client] LIKE '" + this->nom_client + "' AND [prenom_client] LIKE '" + this->prenom_client + "' AND [anniversaire_client] LIKE '" + this->anniversaire_client + "'";
}

String^ NS_Comp_Mappage::client::afficherTable(void) {
	return "SELECT [c].[id_client], [c].[nom_client], [c].[prenom_client] ,[c].[anniversaire_client], [c].[anniversairepa_client], [a1].[nom_adresse] AS [adresse de facturation], [v1].[nom_ville] AS [ville de facturation], [a1].[nom_adresse] AS [adresse de livraison], [v1].[nom_ville] AS [ville de livraison] FROM (SELECT [id_client], [nom_client], [prenom_client], [anniversaire_client], [anniversairepa_client] FROM [dbo].[client]) AS [c] INNER JOIN [dbo].[adresse_facturation] AS [af] ON [c].[id_client] = [af].[id_client] INNER JOIN [dbo].[adresse] AS [a1] ON [af].[id_adresse] = [a1].[id_adresse] INNER JOIN [dbo].[ville] AS [v1] ON [a1].[id_ville] = [v1].[id_ville] INNER JOIN [dbo].[adresse_livraison] AS [al] ON [c].id_client = [al].id_client INNER JOIN [dbo].[adresse] AS [a2] ON [al].[id_adresse] = [a2].[id_adresse] INNER JOIN [dbo].[ville] AS [v2] ON [a2].[id_ville] = [v2].[id_ville]";
}

void NS_Comp_Mappage::client::setid_client(int^ id_client) {
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

int^ NS_Comp_Mappage::client::getid_client(void) {
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