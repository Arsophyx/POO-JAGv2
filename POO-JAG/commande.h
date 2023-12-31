//commande.h
#pragma once

#include "CAD.h"
#include"client.h"

using namespace System;
namespace NS_Comp_Mappage {
	ref class commande{
	private:
		int^ id_commande;
		String^ soldereglement_commande;
		int^ ptrid_client;
		String^ reference_commande;
		String^ moyenpayement_commande;
		String^ dateemmission_commande;
		String^ datepayement_commande;
		String^ datelivraison_commande;

	public:
		String^ ajouter(void);
		String^ modifier(void);
		String^ supprimer(void);
		String^ afficher(void);
		String^ compteurCommande(void);
		String^ selectId(void);
		String^ afficherTable(void);
		void setid_commande(int^);
		void setsoldereglement_commande(String^);
		void setptrid_client(int^);
		void setreference_commande(String^);
		void setmoyenpayement_commande(String^);
		void setdateemission_commande(String^);
		void setdatepayement_commande(String^);
		void setdatelivraison_commande(String^);;
		int^ getid_commande(void);
		String^ getsoldereglement_commande(void);
		int^ getptrid_client(void);
		String^ getreference_commande(void);
		String^ getmoyenpayement_commande(void);
		String^ getdatemission_commande(void);
		String^ getdatelivraison_commande(void);

	};
}