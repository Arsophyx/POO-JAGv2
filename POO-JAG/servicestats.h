#pragma once
#include "statistiques.h"
#include "CAD.h"

namespace NS_Comp_Svc_Stats {
	ref class servicestats{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Map_Stats::statistiques^ mapStats;
	public:
		servicestats(void);
		System::Data::DataSet^ afficherPanierMoyen(System::String^);
		System::Data::DataSet^ afficherChiffreAffairesMois(System::String^, System::String^);
		System::Data::DataSet^ afficherArticleReapprovisionnement(System::String^);
		System::Data::DataSet^ afficherMontantTotalAchats(System::String^, System::String^);
		System::Data::DataSet^ afficherTopArticlesPlusVendus(System::String^);
		System::Data::DataSet^ afficherTopArticlesMoinsVendus(System::String^);
		System::Data::DataSet^ afficherValeurCommercialeStock(System::String^);
		System::Data::DataSet^ afficherValeurAchatStock(System::String^);
		System::String^ afficherValeurCommande(System::String^);
		System::String^ afficherReduction(System::String^, System::String^);
		System::String^ afficherAugmentation(System::String^, System::String^);
	};
}
