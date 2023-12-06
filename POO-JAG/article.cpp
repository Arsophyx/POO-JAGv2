//article.cpp
#include "pch.h"
#include "Article.h"



System::String^ NS_Comp_Mappage::article::ajouter_article(void)
{
	return "INSERT INTO TB_P6 (nom_article, ht_articl, tva_article, seuilreaprovissionement_article, stock_articl) VALUES('" + this->nom_article + "','" + this->ht_article + this->tva_article + "','" + this->seuilreaprovissionement_article + this->stock_article + "');";
}

System::String^ NS_Comp_Mappage::article::modifier_article(void)
{
	return "UPDATE TB_P6 SET nom_article='" + this->nom_article + "', ht_article='" + this->ht_article + "', tva_article='" + this->tva_article + "',seuilreaprovissionement_article='" + this->seuilreaprovissionement_article + "', stock_article='" + this->stock_article + "' WHERE id_article=" + this->id_article + ";";
}

System::String^ NS_Comp_Mappage::article::supprimer_article(void)
{
	return "DELETE FROM TB_P6 WHERE id_article=" + this->id_article + ";";
}

System::String^ NS_Comp_Mappage::article::afficher_article(void)
{
	return "SELECT [id_article], [nom_article], [ht_article], [tva_article], [seuilreaprovissionement_article], [stock_article] FROM [dbo].[TB_P6];";
}

void NS_Comp_Mappage::article::setid_article(int^ id_article)
{
	this->id_article = id_article;
}

void NS_Comp_Mappage::article::setnom_article(System::String^ nom_article)
{
	this->nom_article = nom_article;
}

void NS_Comp_Mappage::article::setht_article(float^ ht_article)
{
	this->ht_article = ht_article;
}

void NS_Comp_Mappage::article::settva_article(float^ tva_article)
{
	this->tva_article = tva_article;
}

void NS_Comp_Mappage::article::setseuilreaprovissionement_article(int^ seuilreaprovissionement_article)
{
	this->seuilreaprovissionement_article = seuilreaprovissionement_article;
}

void NS_Comp_Mappage::article::setstock_article(int^ stock_article)
{
	this->stock_article = stock_article;
}




int^ NS_Comp_Mappage::article::getid_article(void) { return this->id_article; }
System::String^ NS_Comp_Mappage::article::getnom_article(void) { return this->nom_article; }
float^ NS_Comp_Mappage::article::getht_article(void) { return this->ht_article; }
float^ NS_Comp_Mappage::article::gettva_article(void) { return this->tva_article; }
int^ NS_Comp_Mappage::article::getseuilreaprovissionement_article(void) { return this->seuilreaprovissionement_article; }
int^ NS_Comp_Mappage::article::getstock_article(void) { return this->stock_article; }