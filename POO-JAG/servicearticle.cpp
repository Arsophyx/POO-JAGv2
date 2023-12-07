#include "pch.h"
#include "servicearticle.h"

NS_Comp_Svc_article::servicearticle::servicearticle(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->article = gcnew NS_Comp_Mappage::article();
}
void NS_Comp_Svc_article::servicearticle::creerarticle(System::String^ nom_article, float^ ht_article,float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article) {
	System::String^ sql;
	this->article->setnom_article(nom_article);
	this->article->setht_article(ht_article);
	this->article->settva_article(tva_article);
	this->article->setseuilreaprovissionement_article(seuilReaprovissionnement);
	this->article->setstock_article(stock_article);
	sql = this->article->ajouter_article();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_article::servicearticle::modifierarticle(System::String^ nom_article, float^ ht_article, float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article) {
	System::String^ sql;
	this->article->setnom_article(nom_article);
	this->article->setht_article(ht_article);
	this->article->settva_article(tva_article);
	this->article->setseuilreaprovissionement_article(seuilReaprovissionnement);
	this->article->setstock_article(stock_article);
	sql = this->article->ajouter_article();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_article::servicearticle::supprimerarticle(System::String^ nom_article, float^ ht_article, float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article) {
	System::String^ sql;
	this->article->setnom_article(nom_article);
	this->article->setht_article(ht_article);
	this->article->settva_article(tva_article);
	this->article->setseuilreaprovissionement_article(seuilReaprovissionnement);
	this->article->setstock_article(stock_article);
	sql = this->article->ajouter_article();
	this->oCad->actionRows(sql);

}
System::Data::DataSet^ NS_Comp_Svc_article::servicearticle::afficherarticle(System::String^ datatablename) {
	System::String^ sql;
	sql = this->article->afficher_article();
	return this->oCad->getRows(sql, datatablename);
}