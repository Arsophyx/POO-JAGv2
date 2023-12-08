//personnel.h
#include "CAD.h"
#pragma once
namespace NS_Comp_Mappage {
	ref class personnel
	{
	private:
		System::String^ sSql;
		System::String^ id_personnel ;
		System::String^ nom_personnel;
		System::String^ prenom_personnel;
		System::String^ priseposte_personnel;
		System::String^ adresse_personnel;
		System::String^ codepostal_personnel;
		System::String^ id_superieur;

	public:
		System::String^ ajouter_personnel(void);
		System::String^ modifier_personnel(void);
		System::String^ supprimer_personnel(void);
		System::String^ afficher_personnel(void);
		void setid_personnel(System::String^);
		void setnom_personnel(System::String^);
		void setprenom_personnel(System::String^);
		void setpriseposte_personnel(System::String^);
		void setadresse_personnel(System::String^);
		void setcodepostal_personnel(System::String^);
		void setid_superieur(System::String^);

		System::String^ getid_personnel(void);
		System::String^ getnom_personnel(void);
		System::String^ getprenom_personnel(void);
		System::String^ getpriseposte_personnel(void);
		System::String^ getadresse_personnel(void);
		System::String^ getcodepostal(void);
		System::String^ getid_superieur(void);
	};
}