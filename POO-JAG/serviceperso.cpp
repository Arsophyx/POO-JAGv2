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
System::Data::DataSet^ NS_Comp_Svc_Perso::serviceperso::afficherpersonnel(System::String^ id,System::String^ nom, System::String^ prenom, System::String^ priseposte, System::String^ adresse, System::String^ codepostal, System::String^ id_superieur, System::String^ datatablename) {
	System::String^ sql = "SELECT * FROM [dbo].[personnel] WHERE ";
	if (!String::IsNullOrEmpty(id)) {
		sql += "(id_personnel LIKE '%" + id + "%') AND ";
	}

	if (!String::IsNullOrEmpty(nom)) {
		sql += "(nom_personnel LIKE '%" + nom + "%') AND ";
	}

	if (!String::IsNullOrEmpty(prenom)) {
		sql += "(prenom_personnel LIKE '%" + prenom + "%') AND ";
	}

	if (!String::IsNullOrEmpty(priseposte)) {
		sql += "(priseposte_personnel LIKE '%" + priseposte + "%') AND ";
	}

	if (!String::IsNullOrEmpty(adresse)) {
		sql += "(adresse_personnel LIKE '%" + adresse + "%') AND ";
	}

	if (!String::IsNullOrEmpty(codepostal)) {
		sql += "(codepostal_personnel LIKE '%" + codepostal + "%') AND ";
	}

	if (!String::IsNullOrEmpty(id_superieur)) {
		sql += "(id_superieur LIKE '%" + id_superieur + "%') AND ";
	}

	sql = sql->Substring(0, sql->Length - 5);

	return this->oCad->getRows(sql, datatablename);
}
System::Data::DataSet^ NS_Comp_Svc_Perso::serviceperso::afficherallpersonnel(System::String^ datatablename) {
	System::String^ sql;
	sql = this->perso->afficherallpersonnel();
	return this->oCad->getRows(sql, datatablename);
}