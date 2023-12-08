#pragma once
#include"ville.h"
using namespace System;
namespace NS_Comp_Mappage {
	ref class adresse {
	private:
		int^ id_adresse;
		String^ nom_adresse;
		int^ ptrid_ville;
	public:
		System::String^ selectID(void);
		System::String^ ajoutAdresse(void);
		System::String^ supprimer(void);
		System::String^ modifier(void);
		void setid_adresse(int^);
		void setnom_adresse(String^);
		void setptrid_ville(int^);
		int^ getid_adresse(void);
		String^ getnom_adresse(void);
		int^ getptrid_ville(void);
	};
}