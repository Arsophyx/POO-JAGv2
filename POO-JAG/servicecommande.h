#pragma once
#include"commande.h"
#include"CAD.h"
#include "client.h"
#include "integrer.h"
using namespace System;
namespace NS_Comp_Svc_commande {
	ref class servicecommande {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::commande^ commande;
		NS_Comp_Mappage::client^ client;
		NS_Comp_Mappage::integrer^ integrer;
	public:
		servicecommande(void);
		void creercommande(String^ soldereglement_commande, String^ moyenpayement_commande, String^ dateemmission_commande, String^ datepayement_commande, String^ datelivraison_commande,int^ ptrid_client);
		void modifiercommande(String^ id_commande,String^ soldereglement_commande, String^ moyenpayement_commande, String^ dateemmission_commande, String^ datepayement_commande, String^ datelivraison_commande, int^ ptrid_client);
		void supprimercommande(String^ id_commande);
		void ajouterArticle(String^, String^, String^, String^, String^, int^, int^, int^);
		Data::DataSet^ affichercommande(String^);
	};

}

