#include "pch.h"
#include "serviceperso.h"

NS_Comp_Svc_Perso::serviceperso::serviceperso(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->perso = gcnew NS_Comp_Mappage::personnel();
}
void NS_Comp_Svc_Perso::serviceperso::creerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal_personnel, System::String^ id_superieur) {
	System::String^ sql;
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal_personnel(codepostal_personnel);
	this->perso->setid_superieur(id_superieur);
	sql = this->perso->ajouter_personnel();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_Perso::serviceperso::modifierPersonnel(System::String^ id_personnel, System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal_personnel, System::String^ id_superieur) {
	System::String^ sql;
	this->perso->setid_personnel(id_personnel);
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal_personnel(codepostal_personnel);
	this->perso->setid_superieur(id_superieur);
	sql = this->perso->modifier_personnel();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_Perso::serviceperso::supprimerPersonnel(System::String^ id_personnel) {
	System::String^ sql;
	this->perso->setid_personnel(id_personnel);
	sql = this->perso->supprimer_personnel();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_Perso::serviceperso::afficherpersonnel(System::String^ id_personnel, System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal_personnel, System::String^ id_superieur) {
	System::String^ sql;
	this->perso->setid_personnel(id_personnel);
	this->perso->setnom_personnel(nom_personnel);
	this->perso->setprenom_personnel(prenom_personnel);
	this->perso->setpriseposte_personnel(priseposte_personnel);
	this->perso->setadresse_personnel(adresse_personnel);
	this->perso->setcodepostal_personnel(codepostal_personnel);
	this->perso->setid_superieur(id_superieur);
	sql = this->perso->afficher_personnel();
	this->oCad->actionRows(sql);
	
}