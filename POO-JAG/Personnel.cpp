//Personnel.cpp
#include "pch.h"
#include "personnel.h"


System::String^ NS_Comp_Mappage::personnel::ajouter_personnel(void)
{
	return "INSERT INTO [dbo].[personnel] (nom_personnel, prenom_personnel, priseposte_personnel, adresse_personnel, codepostal_personnel, id_superieur) VALUES('" + this->nom_personnel + "','" + this->prenom_personnel + "','" + this->priseposte_personnel + "','" + this->adresse_personnel + "','" + this->codepostal_personnel + "','" + this->id_superieur + "');";
}

System::String^ NS_Comp_Mappage::personnel::modifier_personnel(void)
{
	return "UPDATE [dbo].[personnel] SET nom_personnel='" + this->nom_personnel + "', prenom_personnel='" + this->prenom_personnel + "', priseposte_personnel='" + this->priseposte_personnel + "',adresse_personnel='" + this->adresse_personnel + "', codepostal_personnel='" + this->codepostal_personnel + "', id_superieur='" + this->id_superieur + "' WHERE id_personnel=" + this->id_personnel + ";";

}

System::String^ NS_Comp_Mappage::personnel::supprimer_personnel(void)
{
	return "DELETE FROM [dbo].[personnel] WHERE id_personnel=" + this->id_personnel + ";";
}

System::String^ NS_Comp_Mappage::personnel::afficher_personnel(void)
{
	return "SELECT * FROM [dbo].[personnel];";
}
System::String^ NS_Comp_Mappage::personnel::afficherallpersonnel(void)
{
	return "SELECT * FROM [dbo].[personnel];";
}

void NS_Comp_Mappage::personnel::setid_personnel(System::String^ id_personnel)
{
	this->id_personnel = id_personnel;
}

void NS_Comp_Mappage::personnel::setnom_personnel(System::String^ nom_personnel)
{
	this->nom_personnel = nom_personnel;
}

void NS_Comp_Mappage::personnel::setprenom_personnel(System::String^ prenom_personnel)
{
	this->prenom_personnel = prenom_personnel;
}

void NS_Comp_Mappage::personnel::setpriseposte_personnel(System::String^ priseposte_personnel)
{
	this->priseposte_personnel = priseposte_personnel;
}

void NS_Comp_Mappage::personnel::setadresse_personnel(System::String^ adresse_personnel)
{
	this->adresse_personnel = adresse_personnel;
}

void NS_Comp_Mappage::personnel::setcodepostal_personnel(System::String^ codepostal)
{
	this->codepostal_personnel = codepostal;
}

void NS_Comp_Mappage::personnel::setid_superieur(System::String^ id_superieur)
{
	this->id_superieur = id_superieur;
}


System::String^  NS_Comp_Mappage::personnel::getid_personnel(void) { return this->id_personnel; }
System::String^ NS_Comp_Mappage::personnel::getnom_personnel(void) { return this->nom_personnel; }
System::String^ NS_Comp_Mappage::personnel::getprenom_personnel(void) { return this->prenom_personnel; }
System::String^ NS_Comp_Mappage::personnel::getpriseposte_personnel(void) { return this->priseposte_personnel; }
System::String^ NS_Comp_Mappage::personnel::getadresse_personnel(void) { return this->adresse_personnel; }
System::String^ NS_Comp_Mappage::personnel::getcodepostal(void) { return this->codepostal_personnel; }
System::String^ NS_Comp_Mappage::personnel::getid_superieur(void) { return this->id_superieur; }