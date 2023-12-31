#include "pch.h"
#include "servicestats.h"

typedef System::Double ^ (*event)(System::String^, System::String^);
event evt;

NS_Comp_Svc_Stats::servicestats::servicestats(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->mapStats = gcnew NS_Comp_Map_Stats::statistiques;
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherPanierMoyen(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->panierMoyen();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherChiffreAffairesMois(System::String^ mois, System::String^ dataTableName) {
	System::String^ sql;
	this->mapStats->setMois(mois);
	sql = this->mapStats->chiffreAffairesMois();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherArticleReapprovisionnement(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->articleReaprovisionnement();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherMontantTotalAchats(System::String^ id_client, System::String^ dataTableName) {
	System::String^ sql;
	this->mapStats->setClient(id_client);
	sql = this->mapStats->montantTotalAchats();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherTopArticlesPlusVendus(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->topArticlesPlusVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherTopArticlesMoinsVendus(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->topArticlesMoinsVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherValeurCommercialeStock(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->valeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::servicestats::afficherValeurAchatStock(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapStats->valeurAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::String^ NS_Comp_Svc_Stats::servicestats::afficherValeurCommande(System::String^ id_commande) {
	System::String^ sql;
	this->mapStats->setCommande(id_commande);
	sql = this->mapStats->valeurCommande();
	return this->oCad->actionRowsString(sql);
}

System::String^ NS_Comp_Svc_Stats::servicestats::afficherReduction(System::String^ val_commande, System::String^ taux) {
	evt = &NS_Comp_Map_Stats::remise::reduction;
	return System::Convert::ToString(evt(val_commande, taux));
}

System::String^ NS_Comp_Svc_Stats::servicestats::afficherAugmentation(System::String^ val_commande, System::String^ taux) {
	evt = &NS_Comp_Map_Stats::remise::augmentation;
	return System::Convert::ToString(evt(val_commande, taux));
}