#pragma once
#include"ville.h"
using namespace System;
namespace NS_Comp_Mappage {
	ref class adresse {
	private:
		int^ id_adresse;
		String^ nom_adresse;
		ville^ ptrid_ville;
	public:
		void setid_adresse(int^);
		void setnom_adresse(String^);
		void setptrid_ville(ville^);
		int^ getid_adresse(void);
		String^ getnom_adresse(void);
		ville^ getptrid_ville(void);
	};
}