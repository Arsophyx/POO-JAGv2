//article.h
#include "CAD.h"
#pragma once
namespace NS_Comp_Mappage {
	ref class article{
	private:
		System::String^ sSql;
		System::String^ id_article;
		System::String^ nom_article;
		System::String^ ht_article;
		System::String^ tva_article;
		System::String^ seuilreaprovisionnement_article;
		System::String^ stock_article;

	public:
		
		System::String^ ajouter_article(void);
		System::String^ modifier_article(void);
		System::String^ supprimer_article(void);
		System::String^ afficher_article(void);

		void setid_article(System::String^);
		void setnom_article(System::String^);
		void setht_article(System::String^);
		void settva_article(System::String^);
		void setseuilreaprovisionnement_article(System::String^);
		void setstock_article(System::String^);

		System::String^ getid_article(void);
		System::String^ getnom_article(void);
		System::String^ getht_article(void);
		System::String^ gettva_article(void);
		System::String^ getseuilreaprovisionnement_article(void);
		System::String^ getstock_article(void);
	};
}