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
		void creerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal);
		void modifierPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal);
		void supprimerPersonnel(System::String^ nom_personnel, System::String^ prenom_personnel, System::String^ priseposte_personnel, System::String^ adresse_personnel, System::String^ codepostal);
		System::Data::DataSet^ afficherpersonnel(System::String^ );
	};

}