#pragma once
using namespace System;
namespace NS_Comp_Mappage {
	ref class adresse {
	private:
		int id_adresse;
		String^ nom_adresse;
		int id_ville;
	public:
		void setid_adresse(int);
		void setnom_adresse(String^);
		void setid_ville(int);
		int getid_adresse(void);
		String^ getnom_adresse(void);
		int getid_ville(void);
	};
}