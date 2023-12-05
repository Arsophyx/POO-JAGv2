//personnel.h

#pragma once
namespace NS_Comp_Mappage {
	ref class personnel
	{
	private:
		System::String^ sSql;
		int id_personnel;
		System::String^ nom_personnel;
		System::String^ prenom_personnel;
		System::String^ priseposte_personnel;
		System::String^ adresse_personnel;
		System::String^ codepostal;
		int id_superieur;

	public:
		System::String^ ajouter_personnel(void);
		System::String^ modifier_personnel(void);
		System::String^ supprimer_personnel(void);
		System::String^ afficher_personnel(void);
		void setid_personnel(int);
		void setnom_personnel(System::String^);
		void setprenom_personnel(System::String^);
		void setpriseposte_personnel(System::String^);
		void setadresse_personnel(System::String^);
		void setcodepostal(System::String^);
		void setid_superieur(int);

		int getid_personnel(void);
		System::String^ getnom_personnel(void);
		System::String^ getprenom_personnel(void);
		System::String^ getpriseposte_personnel(void);
		System::String^ getadresse_personnel(void);
		System::String^ getcodepostal(void);
		int getid_superieur(void);
	};
}