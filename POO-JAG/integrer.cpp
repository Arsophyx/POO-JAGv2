#include "pch.h"
#include "integrer.h"

void NS_Comp_Mappage::integrer::setptrid_commande(commande^ id_commande) {
	this->id_commande = id_commande;
}
NS_Comp_Mappage::commande^ NS_Comp_Mappage::integrer::getptrid_commande(void) {
	return this->id_commande;
}
void NS_Comp_Mappage::integrer::setptrid_article(article^ id_commande) {
	this->id_article = id_article;
}
NS_Comp_Mappage::article^ NS_Comp_Mappage::integrer::getptrid_article(void) {
	return this->id_article;
}
void NS_Comp_Mappage::integrer::setnombre_article(int^) {
	this->nombre_article = nombre_article;
}
int^ NS_Comp_Mappage::integrer::getnombre_article(void) {
	return this->nombre_article;
}