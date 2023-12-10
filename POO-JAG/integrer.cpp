#include "pch.h"
#include "integrer.h"

System::String^ NS_Comp_Mappage::integrer::ajouter(void) {
	return "INSERT INTO [dbo].[integrer] ([id_commande], [id_article], [nombre_article]) VALUES (" + this->id_commande + ", " + this->id_article + ", " + this->nombre_article + ");";
}

System::String^ NS_Comp_Mappage::integrer::supprimer(void) {
	return "DELETE FROM [dbo].[integrer] WHERE [id_commande] = " + this->id_commande;
}

void NS_Comp_Mappage::integrer::setptrid_commande(int^ id_commande) {
	this->id_commande = id_commande;
}
int^ NS_Comp_Mappage::integrer::getptrid_commande(void) {
	return this->id_commande;
}
void NS_Comp_Mappage::integrer::setptrid_article(int^ id_article) {
	this->id_article = id_article;
}
int^ NS_Comp_Mappage::integrer::getptrid_article(void) {
	return this->id_article;
}
void NS_Comp_Mappage::integrer::setnombre_article(int^ nombre_article) {
	this->nombre_article = nombre_article;
}
int^ NS_Comp_Mappage::integrer::getnombre_article(void) {
	return this->nombre_article;
}