#pragma once
#include"article.h"
#include"CAD.h"
using namespace System;
namespace NS_Comp_Svc_article {
	ref class servicearticle {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::article^ article;
	public:
		servicearticle(void);
		void creerarticle(System::String^ nom_article, System::String^ ht_article, System::String^ tva_article, System::String^ seuilreaprovisionnement_article, System::String^ stock_article);
		void modifierarticle(System::String^ id_article, System::String^ nom_article, System::String^ ht_article, System::String^ tva_article, System::String^ seuilreaprovisionnement_article, System::String^ stock_article);
		void supprimerarticle(System::String^ id_article);
		System::Data::DataSet^ afficherarticle(System::String^ id, System::String^ nom, System::String^ Prix, System::String^ TVA, System::String^ Seuil, System::String^ stock, System::String^ datatablename);
		System::Data::DataSet^ afficherallarticle(System::String^);
	};

}
