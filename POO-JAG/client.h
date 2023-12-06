//client.h
#pragma once
#include "CAD.h"
using namespace System;
namespace NS_Comp_Mappage {
	ref class client
	{
	private:
		int id_client;
		String^ nom_client;
		String^ prenom_client;
		String^ anniversaire_client;
		String^ anniversairepa_client;

	public:
		String^ ajouter(void);
		String^ modifier(void);
		String^ supprimer(void);
		String^ afficher(void);
		void setid_client(int);
		void setnom_client(String^ nom_client);
		void setprenom_client(String^ prenom_client);
		void setanniversaire_client(String^ anniversaire_client);
		void setanniversairepa_client(String^ anniversairepa_client);
		int getid_client(void);
		String^ getnom_client(void);
		String^ getprenom_client(void);
		String^ getanniversaire_client(void);
		String^ getanniversairepa_client(void);

	};
}
