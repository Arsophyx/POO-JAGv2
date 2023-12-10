#pragma once
#include"client.h"
#include "adresse.h"
#include "adresse_facturation.h"
#include "adresse_livraison.h"
#include "ville.h"
#include"CAD.h"
using namespace System;
namespace NS_Comp_Svc_client {
	ref class serviceclient {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::client^ client;
		NS_Comp_Mappage::adresse^ adresse;
		NS_Comp_Mappage::ville^ ville;
		NS_Comp_Mappage::adresse_facturation^ adresse_facturation;
		NS_Comp_Mappage::adresse_livraison^ adresse_livraison;
	public:
		serviceclient(void);
		void creerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client, System::String^ adresse_facturation_client, System::String^ adresse_livraison_client, System::String^ ville_adresse_livraison, System::String^ ville_adresse_facturation);
		void modifierclient(System::String^ id_client, System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client, System::String^ adresse_facturation_client, System::String^ adresse_livraison_client, System::String^ ville_adresse_livraison, System::String^ ville_adresse_facturation);
		void supprimerclient(System::String^ id_client);
		System::Data::DataSet^ afficherclient(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ anniversaire, System::String^ anniversairePA, System::String^ datatablename);
		System::Data::DataSet^ affichertable(System::String^);
	};

}
