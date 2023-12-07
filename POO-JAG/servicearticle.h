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
		void creerarticle(System::String^ nom_article, float^ ht_article, float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article);
		void modifierarticle(System::String^ nom_article, float^ ht_article, float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article);
		void supprimerarticle(System::String^ nom_article, float^ ht_article, float^ tva_article, int^ seuilReaprovissionnement, int^ stock_article);
		System::Data::DataSet^ afficherarticle(System::String^);
	};

}
