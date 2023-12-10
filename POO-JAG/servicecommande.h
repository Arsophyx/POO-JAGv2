#pragma once
#include"commande.h"
#include"CAD.h"
using namespace System;
namespace NS_Comp_Svc_commande {
	ref class servicecommande {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::commande^ commande;
	public:
		servicecommande(void);
		void creercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande,NS_Comp_Mappage::client^ ptrid_client);
		void modifiercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, NS_Comp_Mappage::client^ ptrid_client);
		void supprimercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, NS_Comp_Mappage::client^ ptrid_client);
		System::Data::DataSet^ affichercommande(System::String^ id, System::String^ reference, System::String^ soldereglement, System::String^ moyenpayement, System::String^ dateemmission, System::String^ datepayement, System::String^ datelivraison, System::String^ id_client, System::String^ datatablename);
	};

}

