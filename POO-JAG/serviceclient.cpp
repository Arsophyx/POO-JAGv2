#include "pch.h"
#include "serviceclient.h"

NS_Comp_Svc_client::serviceclient::serviceclient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->client = gcnew NS_Comp_Mappage::client();
	this->adresse = gcnew NS_Comp_Mappage::adresse();
	this->ville = gcnew NS_Comp_Mappage::ville();
	this->adresse_facturation = gcnew NS_Comp_Mappage::adresse_facturation();
	this->adresse_livraison = gcnew NS_Comp_Mappage::adresse_livraison();
}
void NS_Comp_Svc_client::serviceclient::creerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client, System::String^ adresse_facturation_client, System::String^ adresse_livraison_client, System::String^ ville_adresse_livraison, System::String^ ville_adresse_facturation) {
	//client
	System::String^ sql;
	this->client->setnom_client(nom_client);
	this->client->setprenom_client(prenom_client);
	this->client->setanniversaire_client(anniversaire_client);
	sql = this->client->ajouter();
	this->oCad->actionRows(sql);

	//adresse de facturation
	this->ville->setnom_ville(ville_adresse_facturation);
	sql = this->ville->SelectId();
	this->adresse->setptrid_ville(this->oCad->actionRowsID(sql));
	this->adresse->setnom_adresse(adresse_facturation_client);
	sql = this->adresse->ajoutAdresse();
	this->oCad->actionRows(sql);

	sql = this->adresse->selectID();
	this->adresse_facturation->setptrid_adresse(this->oCad->actionRowsID(sql));
	sql = this->client->selectId();
	this->adresse_facturation->setptrid_client(this->oCad->actionRowsID(sql));
	sql = this->adresse_facturation->ajout();
	this->oCad->actionRows(sql);

	//adresse de livraison
	if (adresse_facturation_client == adresse_livraison_client) {
		sql = this->adresse->selectID();
		this->adresse_livraison->setptrid_adresse(this->oCad->actionRowsID(sql));
		sql = this->client->selectId();
		this->adresse_livraison->setptrid_client(this->oCad->actionRowsID(sql));
	}
	else {
		this->ville->setnom_ville(ville_adresse_livraison);
		sql = this->ville->SelectId();
		this->adresse->setptrid_ville(this->oCad->actionRowsID(sql));
		this->adresse->setnom_adresse(adresse_livraison_client);
		sql = this->adresse->ajoutAdresse();
		this->oCad->actionRows(sql);

		sql = this->adresse->selectID();
		this->adresse_livraison->setptrid_adresse(this->oCad->actionRowsID(sql));
		sql = this->client->selectId();
		this->adresse_livraison->setptrid_client(this->oCad->actionRowsID(sql));
	}
	sql = this->adresse_livraison->ajout();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_client::serviceclient::modifierclient(System::String^ id_client, System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client, System::String^ adresse_facturation_client, System::String^ adresse_livraison_client, System::String^ ville_adresse_livraison, System::String^ ville_adresse_facturation) {
	//client
	System::String^ sql;
	this->client->setid_client(System::Convert::ToInt32(id_client));
	this->client->setnom_client(nom_client);
	this->client->setprenom_client(prenom_client);
	this->client->setanniversaire_client(anniversaire_client);
	sql = this->client->modifier();
	this->oCad->actionRows(sql);

	//adresse de facturation
	this->ville->setnom_ville(ville_adresse_facturation);
	sql = this->ville->SelectId();
	this->adresse->setptrid_ville(this->oCad->actionRowsID(sql));
	this->adresse->setnom_adresse(adresse_facturation_client);
	this->adresse_facturation->setptrid_client(System::Convert::ToInt32(id_client));
	sql = this->adresse_facturation->selectIdAdresse();
	this->adresse->setid_adresse(this->oCad->actionRowsID(sql));
	sql = this->adresse->modifier();
	this->oCad->actionRows(sql);

	//adresse de livraison
	this->ville->setnom_ville(ville_adresse_livraison);
	sql = this->ville->SelectId();
	this->adresse->setptrid_ville(this->oCad->actionRowsID(sql));
	this->adresse->setnom_adresse(adresse_livraison_client);
	this->adresse_livraison->setptrid_client(System::Convert::ToInt32(id_client));
	sql = this->adresse_livraison->selectIdAdresse();
	this->adresse->setid_adresse(this->oCad->actionRowsID(sql));
	sql = this->adresse->modifier();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_client::serviceclient::supprimerclient(System::String^ id_client) {
	System::String^ sql;

	//adresse facturation
	this->client->setid_client(System::Convert::ToInt32(id_client));
	this->adresse_facturation->setptrid_client(System::Convert::ToInt32(id_client));
	sql = this->adresse_facturation->selectIdAdresse();
	sql = this->adresse_facturation->supprimer();
	this->oCad->actionRows(sql);
	this->adresse->setid_adresse(this->oCad->actionRowsID(sql));
	sql = this->adresse->supprimer();
	this->oCad->actionRows(sql);

	//adresse livraison
	this->adresse_livraison->setptrid_client(System::Convert::ToInt32(id_client));
	sql = this->adresse_livraison->selectIdAdresse();
	sql = this->adresse_livraison->supprimer();
	this->oCad->actionRows(sql);
	this->adresse->setid_adresse(this->oCad->actionRowsID(sql));
	sql = this->adresse->supprimer();
	this->oCad->actionRows(sql);

	//client
	sql = this->client->supprimer();
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc_client::serviceclient::afficherclient(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ anniversaire, System::String^ anniversairePA, System::String^ datatablename){
	System::String^ sql = "SELECT * FROM [dbo].[client] WHERE ";
	if (!String::IsNullOrEmpty(id)) {
		sql += "(id_client LIKE '%" + id + "%') AND ";
	}

	if (!String::IsNullOrEmpty(nom)) {
		sql += "(nom_client LIKE '%" + nom + "%') AND ";
	}

	if (!String::IsNullOrEmpty(prenom)) {
		sql += "(prenom_client '%" + prenom + "%') AND ";
	}

	if (!String::IsNullOrEmpty(anniversaire)) {
		sql += "(anniversaire_client LIKE '%" + anniversaire + "%') AND ";
	}

	if (!String::IsNullOrEmpty(anniversairePA)) {
		sql += "(anniversairepa_client LIKE '%" + anniversairePA + "%') AND ";
	}



	sql = sql->Substring(0, sql->Length - 5);

	return this->oCad->getRows(sql, datatablename);
}


System::Data::DataSet^ NS_Comp_Svc_client::serviceclient::affichertable(System::String^ datatablename) {
	System::String^ sql;
	sql = this->client->afficherTable();
	return this->oCad->getRows(sql, datatablename);
}