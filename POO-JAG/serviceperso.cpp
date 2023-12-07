#include "pch.h"
#include "serviceperso.h"

NS_Comp_Svc_Perso::serviceperso::serviceperso(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->perso = gcnew NS_Comp_Mappage::personnel();
}
void NS_Comp_Svc_Perso::serviceperso::creerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal) {
	System::String^ sql;
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal(codepostal);
	sql = this->perso->ajouter_personnel();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_Perso::serviceperso::modifierPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal) {
	System::String^ sql;
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal(codepostal);
	sql = this->perso->modifier_personnel();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_Perso::serviceperso::supprimerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal) {
	System::String^ sql;
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal(codepostal);
	sql = this->perso->supprimer_personnel();
	this->oCad->actionRows(sql);


}
System::Data::DataSet^ NS_Comp_Svc_Perso::serviceperso::afficherpersonnel(System::String^ datatablename) {
	System::String^ sql;
	sql = this->perso->afficher_personnel();
	return this->oCad->getRows(sql, datatablename);
}