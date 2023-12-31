#include "pch.h"
#include "servicearticle.h"

NS_Comp_Svc_article::servicearticle::servicearticle(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->article = gcnew NS_Comp_Mappage::article();
}
void NS_Comp_Svc_article::servicearticle::creerarticle(System::String^ nom_article, System::String^ ht_article, System::String^ tva_article, System::String^ seuilreaprovisionnement_article, System::String^ stock_article) {
	System::String^ sql;
	this->article->setnom_article(nom_article);
	this->article->setht_article(ht_article);
	this->article->settva_article(tva_article);
	this->article->setseuilreaprovisionnement_article(seuilreaprovisionnement_article);
	this->article->setstock_article(stock_article);
	sql = this->article->ajouter_article();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_article::servicearticle::supprimerarticle(System::String^ id_article) {
	System::String^ sql;
	this->article->setid_article(id_article);
	sql = this->article->supprimer_article();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_article::servicearticle::modifierarticle(System::String^ id_article, System::String^ nom_article, System::String^ ht_article, System::String^ tva_article, System::String^ seuilreaprovisionnement_article, System::String^ stock_article) {
	System::String^ sql;
	this->article->setid_article(id_article);
	this->article->setnom_article(nom_article);
	this->article->setht_article(ht_article);
	this->article->settva_article(tva_article);
	this->article->setseuilreaprovisionnement_article(seuilreaprovisionnement_article);
	this->article->setstock_article(stock_article);
	sql = this->article->modifier_article();
	this->oCad->actionRows(sql);


}
System::Data::DataSet^ NS_Comp_Svc_article::servicearticle::afficherarticle(System::String^ id, System::String^ nom, System::String^ Prix, System::String^ TVA, System::String^ Seuil, System::String^ stock, System::String^ datatablename){
	System::String^ sql = "SELECT * FROM [dbo].[article] WHERE ";
	if (!String::IsNullOrEmpty(id)) {
		sql += "(id_article LIKE '%" + id + "%') AND ";
	}

	if (!String::IsNullOrEmpty(nom)) {
		sql += "(nom_article LIKE '%" + nom + "%') AND ";
	}

	if (!String::IsNullOrEmpty(Prix)) {
		sql += "(ht_article LIKE '%" + Prix + "%') AND ";
	}

	if (!String::IsNullOrEmpty(TVA)) {
		sql += "(tva_article LIKE '%" + TVA + "%') AND ";
	}

	if (!String::IsNullOrEmpty(Seuil)) {
		sql += "(seuilreaprovisionnement_article LIKE '%" + Seuil + "%') AND ";
	}

	if (!String::IsNullOrEmpty(stock)) {
		sql += "(stock_article LIKE '%" + stock + "%') AND ";
	}


	sql = sql->Substring(0, sql->Length - 5);

	return this->oCad->getRows(sql, datatablename);
}
System::Data::DataSet^ NS_Comp_Svc_article::servicearticle::afficherallarticle(System::String^ datatablename) {
	System::String^ sql;
	sql = this->article->afficherallarticle();
	return this->oCad->getRows(sql, datatablename);
}