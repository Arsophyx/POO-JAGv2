#include "pch.h"
#include "servicecommande.h"

NS_Comp_Svc_commande::servicecommande::servicecommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->commande = gcnew NS_Comp_Mappage::commande();
	this->client = gcnew NS_Comp_Mappage::client();
	this->integrer = gcnew NS_Comp_Mappage::integrer();
	this->article = gcnew NS_Comp_Mappage::article();
}

void NS_Comp_Svc_commande::servicecommande::creercommande(String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ ptrid_client) {
	// Création de la référence de la commande
	System::String^ sql;
	String^ reference_commande = "";
	this->client->setid_client(ptrid_client);
	sql = this->client->selectPrenom();
	reference_commande += this->oCad->actionRowsString(sql)->Substring(0, 2)->ToUpper();
	sql = this->client->selectNom();
	reference_commande += this->oCad->actionRowsString(sql)->Substring(0, 2)->ToUpper();
	reference_commande += datepayement_commande->Substring(6, 4);
	sql = this->client->selectVilleLivraison();
	reference_commande += this->oCad->actionRowsString(sql)->Substring(0, 3)->ToUpper();
	// numéro d'incrémention dans la référence commande (de manière automatique)
	this->commande->setptrid_client(ptrid_client);
	sql = this->commande->compteurCommande();
	String^ numeroc = this->oCad->actionRowsString(sql);
	if (numeroc->Length == 1) {
		numeroc = "000" + numeroc;
	}
	else if (numeroc->Length == 2) {
		numeroc = "00" + numeroc;
	}
	else if (numeroc->Length == 3) {
		numeroc = "0" + numeroc;
	}
	reference_commande += numeroc;
	this->commande->setreference_commande(reference_commande);

	//anniversaire premier achat
	if (numeroc == "0000") {
		this->client->setanniversairepa_client(datepayement_commande);
		sql = this->client->setAnniversairePA();
		this->oCad->actionRows(sql);
	}

	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	sql = this->commande->ajouter();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_commande::servicecommande::modifiercommande(String^ id_commande, String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ ptrid_client) {
	System::String^ sql;
	this->commande->setid_commande(System::Convert::ToInt32(id_commande));
	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	this->commande->setptrid_client(ptrid_client);
	sql = this->commande->modifier();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_commande::servicecommande::supprimercommande(System::String^ id_commande) {
	System::String^ sql;
	this->integrer->setptrid_commande(System::Convert::ToInt32(id_commande));
	sql = this->integrer->supprimer();
	this->oCad->actionRows(sql);
	this->commande->setid_commande(System::Convert::ToInt32(id_commande));
	sql = this->commande->supprimer();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_commande::servicecommande::ajouterArticle(String^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, int^ id_client, int^ id_article, int^ nombre_article) {
	// on récupère l'id de la commande
	System::String^ sql;
	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	this->commande->setptrid_client(id_client);
	sql = this->commande->selectId();
	this->integrer->setptrid_commande(this->oCad->actionRowsID(sql));

	// on remplit integrer
	this->integrer->setptrid_article(id_article);
	this->integrer->setnombre_article(nombre_article);
	sql = this->integrer->ajouter();
	this->oCad->actionRows(sql);

	// on met à jour stock article
	this->article->setid_article(System::Convert::ToString(id_article));
	sql = this->article->selectStock();
	int stock = this->oCad->actionRowsID(sql);
	stock = stock - System::Convert::ToInt32(nombre_article);
	this->article->setstock_article(System::Convert::ToString(stock));
	sql = this->article->updateStock();
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc_commande::servicecommande::affichercommande(System::String^ id, System::String^ reference, System::String^ soldereglement, System::String^ moyenpayement, System::String^ dateemmission, System::String^ datepayement, System::String^ datelivraison, System::String^ id_client, System::String^ datatablename) {
	System::String^ sql = "SELECT * FROM [dbo].[commande] WHERE ";
	if (!String::IsNullOrEmpty(id)) {
		sql += "(id_commande LIKE '%" + id + "%') AND ";
	}

	if (!String::IsNullOrEmpty(reference)) {
		sql += "(reference_commande LIKE '%" + reference + "%') AND ";
	}

	if (!String::IsNullOrEmpty(soldereglement)) {
		sql += "(soldereglement_commande LIKE '%" + soldereglement + "%') AND ";
	}

	if (!String::IsNullOrEmpty(moyenpayement)) {
		sql += "(moyenpayement_commande LIKE '%" + moyenpayement + "%') AND ";
	}

	if (!String::IsNullOrEmpty(dateemmission)) {
		sql += "(dateemmission_commande LIKE '%" + dateemmission + "%') AND ";
	}

	if (!String::IsNullOrEmpty(datepayement)) {
		sql += "(datepayement_commande LIKE '%" + datepayement + "%') AND ";
	}

	if (!String::IsNullOrEmpty(datelivraison)) {
		sql += "(datelivraison_commande LIKE '%" + datelivraison + "%') AND ";
	}

	if (!String::IsNullOrEmpty(id_client)) {
		sql += "(id_client LIKE '%" + id_client + "%') AND ";
	}
	

	sql = sql->Substring(0, sql->Length - 5);

	return this->oCad->getRows(sql, datatablename);
}

System::Data::DataSet^ NS_Comp_Svc_commande::servicecommande::afficherallcommande(System::String^ datatablename) {
	System::String^ sql;
	sql = this->commande->afficherTable();
	return this->oCad->getRows(sql, datatablename);
}

bool NS_Comp_Svc_commande::servicecommande::verifierStock(String^ id_article, System::String^ nombre_article) {
	System::String^ sql;
	this->article->setid_article(id_article);
	sql = this->article->selectStock();
	int stock = this->oCad->actionRowsID(sql);
	if (stock < System::Convert::ToInt32(nombre_article)) {
		return 0;  //le stock est insuffisant pour ce nombre d'articles
	}
	else {
		return 1;
	}
}
