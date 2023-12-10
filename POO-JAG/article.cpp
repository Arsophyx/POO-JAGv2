//article.cpp
#include "pch.h"
#include "Article.h"



System::String^ NS_Comp_Mappage::article::ajouter_article(void)
{
	return "INSERT INTO [dbo].[article] (nom_article, ht_article, tva_article, seuilreaprovisionnement_article, stock_article) VALUES('" + this->nom_article + "','" + this->ht_article->Replace(",", ".") + "','" + this->tva_article->Replace(",", ".") + "','" + this->seuilreaprovisionnement_article + "','" + this->stock_article + "');";
}

System::String^ NS_Comp_Mappage::article::modifier_article(void)
{
	return "UPDATE [dbo].[article] SET nom_article='" + this->nom_article + "', ht_article='" + this->ht_article->Replace(",", ".") + "', tva_article='" + this->tva_article->Replace(",", ".") + "',seuilreaprovisionnement_article='" + this->seuilreaprovisionnement_article + "', stock_article='" + this->stock_article + "' WHERE id_article=" + this->id_article + ";";
}

System::String^ NS_Comp_Mappage::article::supprimer_article(void)
{
	return "DELETE FROM [dbo].[article] WHERE id_article=" + this->id_article + ";";
}

System::String^ NS_Comp_Mappage::article::afficher_article(void)
{
	return "SELECT * FROM [dbo].[article];";
}

System::String^ NS_Comp_Mappage::article::afficherallarticle(void)
{
	return "SELECT * FROM [dbo].[article];";
}

System::String^ NS_Comp_Mappage::article::selectStock(void) {
	return "SELECT [stock_article] FROM [dbo].[article] WHERE [id_article] = " + this->id_article;
}

System::String^ NS_Comp_Mappage::article::updateStock(void) {
	return "UPDATE [dbo].[article] SET stock_article = " + this->stock_article;
}

void NS_Comp_Mappage::article::setid_article(System::String^ id_article)
{
	this->id_article = id_article;
}

void NS_Comp_Mappage::article::setnom_article(System::String^ nom_article)
{
	this->nom_article = nom_article;
}

void NS_Comp_Mappage::article::setht_article(System::String^ ht_article)
{
	this->ht_article = ht_article;
}

void NS_Comp_Mappage::article::settva_article(System::String^ tva_article)
{
	this->tva_article = tva_article;
}

void NS_Comp_Mappage::article::setseuilreaprovisionnement_article(System::String^ seuilreaprovisionnement_article)
{
	this->seuilreaprovisionnement_article = seuilreaprovisionnement_article;
}

void NS_Comp_Mappage::article::setstock_article(System::String^ stock_article)
{
	this->stock_article = stock_article;
}




System::String^ NS_Comp_Mappage::article::getid_article(void) { return this->id_article; }
System::String^ NS_Comp_Mappage::article::getnom_article(void) { return this->nom_article; }
System::String^ NS_Comp_Mappage::article::getht_article(void) { return this->ht_article; }
System::String^ NS_Comp_Mappage::article::gettva_article(void) { return this->tva_article; }
System::String^ NS_Comp_Mappage::article::getseuilreaprovisionnement_article(void) { return this->seuilreaprovisionnement_article; }
System::String^ NS_Comp_Mappage::article::getstock_article(void) { return this->stock_article; }