#pragma once
#include"Personnel.h"
#include"CAD.h"
using namespace System;
namespace NS_Comp_Svc_Perso {
	ref class serviceperso{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::personnel^ perso;
	public :
		serviceperso(void);
		void creerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal_personnel, System::String^ id_superieur);
		void modifierPersonnel(System::String^ id_personnel, System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal_personnel, System::String^ id_superieur);
		void supprimerPersonnel(System::String^ id_personnel);
		System::Data::DataSet^ afficherpersonnel(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ priseposte, System::String^ adresse, System::String^ codepostal, System::String^ id_superieur, System::String^ datatablename);
		System::Data::DataSet^ afficherallpersonnel(System::String^);
	};

}