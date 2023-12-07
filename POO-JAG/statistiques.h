#pragma once


namespace NS_Comp_Map_Stats{
	ref class statistiques
	{
	private:
		System::String^ sSql;
		System::String^ mois;
		System::String^ client;
	public:
		System::String^ panierMoyen(void);
		System::String^ chiffreAffairesMois(void);
		System::String^ articleReaprovisionnement(void);
		System::String^ montantTotalAchats(void);
		System::String^ topArticlesPlusVendus(void);
		System::String^ topArticlesMoinsVendus(void);
		System::String^ valeurCommercialeStock(void);
		System::String^ valeurAchatStock(void);

		void setMois(System::String^);
		void setClient(System::String^);

		System::String^ getMois(void);
		System::String^ getClient(void);
	};
}