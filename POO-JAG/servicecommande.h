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
		void creercommande(String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ ptrid_client);
		void modifiercommande(String^ id_commande, String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ ptrid_client);
		void supprimercommande(System::String^ id_commande);
		void ajouterArticle(String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ id_client, int^ id_article, int^ nombre_article);
		System::Data::DataSet^ affichercommande(System::String^ id, System::String^ reference, System::String^ soldereglement, System::String^ moyenpayement, System::String^ dateemmission, System::String^ datepayement, System::String^ datelivraison, System::String^ id_client, System::String^ datatablename);
	};

}

