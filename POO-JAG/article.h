//article.h
#include "CAD.h"
#pragma once
namespace NS_Comp_Mappage {
	ref class article
	{
	private:
		System::String^ sSql;
		int id_article;
		System::String^ nom_article;
		float ht_article;
		float tva_article;
		int seuilreaprovissionement_article;
		int stock_article;

	public:
		
		System::String^ ajouter_article(void);
		System::String^ modifier_article(void);
		System::String^ supprimer_article(void);
		System::String^ afficher_article(void);

		void setid_article(int);
		void setnom_article(System::String^);
		void setht_article(float);
		void settva_article(float);
		void setseuilreaprovissionement_article(int);
		void setstock_article(int);

		int getid_article(void);
		System::String^ getnom_article(void);
		float^ getht_article(void);
		float gettva_article(void);
		int getseuilreaprovissionement_article(void);
		int getstock_article(void);
	};
}