#pragma once
#include"client.h"
#include"CAD.h"
using namespace System;
namespace NS_Comp_Svc_client {
	ref class serviceclient {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::client^ client;
	public:
		serviceclient(void);
		void creerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client);
		void modifierclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client);
		void supprimerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client);
		System::Data::DataSet^ afficherclient(System::String^);
	};

}
