#include "pch.h"
#include "statistiques.h"

System::String^ NS_Comp_Map_Stats::statistiques::panierMoyen(void) {
	return "SELECT SUM(panier)/COUNT([test4].[id_commande]) AS [panier moyen] FROM(SELECT [id_commande] ,SUM([test3].[nombre_article]*[test3].[ht_article]*([test3].[tva_article]/100+1)) AS panier FROM (SELECT [integrer].[id_commande], [integrer].[id_article], [test1].[ht_article], [test1].[tva_article], [integrer].[nombre_article] FROM ([dbo].[integrer] INNER JOIN (SELECT [id_article], [ht_article] ,[tva_article] FROM [dbo].[article]) AS [test1] ON [integrer].[id_article] = [test1].[id_article]) INNER JOIN (SELECT [id_commande] FROM [dbo].[commande]) AS [test2] ON [integrer].[id_commande] = [test2].[id_commande]) AS [test3] GROUP BY [test3].[id_commande]) AS [test4]";
};

System::String^ NS_Comp_Map_Stats::statistiques::chiffreAffairesMois(void) {
	return "SELECT SUM([test3].[nombre_article]*[test3].[ht_article]*([test3].[tva_article]/100+1)) AS panier FROM (SELECT [integrer].[id_commande], [integrer].[id_article], [test1].[ht_article], [test1].[tva_article], [integrer].[nombre_article] FROM ([dbo].[integrer] INNER JOIN (SELECT [id_article], [ht_article] ,[tva_article] FROM [dbo].[article]) AS [test1] ON [integrer].[id_article] = [test1].[id_article]) INNER JOIN (SELECT [id_commande] FROM [dbo].[commande] WHERE [datepayement_commande] LIKE '___" + this->getMois() + "') AS [test2] ON [integrer].[id_commande] = [test2].[id_commande]) AS [test3]";
}

System::String^ NS_Comp_Map_Stats::statistiques::articleReaprovisionnement(void) {
	return "SELECT [nom_article], [seuilreaprovisionnement_article], [stock_article] FROM [dbo].[article] WHERE [stock_article] <= [seuilreaprovisionnement_article]";
}

System::String^ NS_Comp_Map_Stats::statistiques::montantTotalAchats(void) {
	return "SELECT SUM([test3].[nombre_article]*[test3].[ht_article]*([test3].[tva_article]/100+1)) AS [Montant total des achats] FROM (SELECT [integrer].[id_commande], [integrer].[id_article], [test1].[ht_article], [test1].[tva_article], [integrer].[nombre_article] FROM ([dbo].[integrer] INNER JOIN (SELECT [id_article], [ht_article] ,[tva_article] FROM [dbo].[article]) AS [test1]  ON [integrer].[id_article] = [test1].[id_article]) INNER JOIN (SELECT [id_commande] FROM [dbo].[commande] WHERE [id_client] LIKE " + this->getClient() + ") AS [test2] ON [integrer].[id_commande] = [test2].[id_commande]) AS [test3]";
}

System::String^ NS_Comp_Map_Stats::statistiques::topArticlesPlusVendus(void) {
	return "SELECT TOP 10 [join].[id_article], [join].[nom_article], SUM([join].[nombre_article]) AS [Total vendus] FROM (SELECT [article].[id_article], [nom_article], [nombre_article] FROM [dbo].[article] INNER JOIN [dbo].[integrer] ON [article].[id_article] = [integrer].[id_article]) AS [join] GROUP BY [id_article], [nom_article] ORDER BY [Total vendus] DESC";
}

System::String^ NS_Comp_Map_Stats::statistiques::topArticlesMoinsVendus(void) {
	return "SELECT TOP 10 [join].[id_article], [join].[nom_article], SUM([join].[nombre_article]) AS [Total vendus] FROM (SELECT [article].[id_article], [nom_article], [nombre_article] FROM [dbo].[article] INNER JOIN [dbo].[integrer] ON [article].[id_article] = [integrer].[id_article]) AS [join] GROUP BY [id_article], [nom_article] ORDER BY [Total vendus] ASC";
}

System::String^ NS_Comp_Map_Stats::statistiques::valeurCommercialeStock(void) {
	return "SELECT SUM([ht_article]*[stock_article]) AS [Valeur Commerciale Stock] FROM [dbo].[article]";
}

System::String^ NS_Comp_Map_Stats::statistiques::valeurAchatStock(void) {
	return "SELECT SUM(([tva_article]/100+1)*[ht_article]*[stock_article]) AS [Valeur d'Achat Stock] FROM [dbo].[article]";
}

float^ NS_Comp_Map_Stats::statistiques::reduction(float prix, float taux) {
	return (prix * (1 - taux));
}

float^ NS_Comp_Map_Stats::statistiques::augmentation(float prix, float taux) {
	return (prix * (1 + taux));
}

System::String^ NS_Comp_Map_Stats::statistiques::valeurCommande(void) {
	return "SELECT SUM([a].[ht_article]*[i].[nombre_article]) FROM (SELECT [id_commande] FROM [dbo].[commande] WHERE [id_commande] = " + this->commande + ") AS [c] INNER JOIN [integrer] AS [i] ON [c].[id_commande] = [i].[id_commande] INNER JOIN [article] AS [a] ON [i].[id_article] = [a].[id_article]";
}

void NS_Comp_Map_Stats::statistiques::setMois(System::String^ t_mois) {
	this->mois = t_mois;
}

void NS_Comp_Map_Stats::statistiques::setClient(System::String^ idclient) {
	this->client = idclient;
}

void NS_Comp_Map_Stats::statistiques::setCommande(System::String^ idcommande) {
	this->client = idcommande;
}

System::String^ NS_Comp_Map_Stats::statistiques::getMois(void) {
	return this->mois;
}

System::String^ NS_Comp_Map_Stats::statistiques::getClient(void) {
	return this->client;
}

System::String^ NS_Comp_Map_Stats::statistiques::getCommande(void) {
	return this->commande;
}