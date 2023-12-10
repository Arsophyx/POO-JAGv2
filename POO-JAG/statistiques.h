#pragma once


namespace NS_Comp_Map_Stats{
	ref class statistiques
	{
	private:
		System::String^ sSql;
		System::String^ mois;
		System::String^ client;
		System::String^ commande;
	public:
		System::String^ panierMoyen(void);
		System::String^ chiffreAffairesMois(void);
		System::String^ articleReaprovisionnement(void);
		System::String^ montantTotalAchats(void);
		System::String^ topArticlesPlusVendus(void);
		System::String^ topArticlesMoinsVendus(void);
		System::String^ valeurCommercialeStock(void);
		System::String^ valeurAchatStock(void);
		System::String^ valeurCommande(void);

		void setMois(System::String^);
		void setClient(System::String^);
		void setCommande(System::String^);

		System::String^ getMois(void);
		System::String^ getClient(void);
		System::String^ getCommande(void);
	};
	class remise {
	public:
		static System::Double^ reduction(System::String^, System::String^);
		static System::Double^ augmentation(System::String^, System::String^);
	};
}