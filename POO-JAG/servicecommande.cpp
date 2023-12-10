#include "pch.h"
#include "servicecommande.h"

NS_Comp_Svc_commande::servicecommande::servicecommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->commande = gcnew NS_Comp_Mappage::commande();
}
void NS_Comp_Svc_commande::servicecommande::creercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, NS_Comp_Mappage::client^ ptrid_client) {
	System::String^ sql;
	this->commande->setreference_commande(reference_commande);
	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	this->commande->setptrid_client(ptrid_client);
	sql = this->commande->ajouter();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_commande::servicecommande::modifiercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, NS_Comp_Mappage::client^ ptrid_client) {
	System::String^ sql;
	this->commande->setreference_commande(reference_commande);
	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	this->commande->setptrid_client(ptrid_client);
	sql = this->commande->modifier();
	this->oCad->actionRows(sql);

}
void NS_Comp_Svc_commande::servicecommande::supprimercommande(System::String^ reference_commande, int^ soldereglement_commande, System::String^ moyenpayement_commande, System::String^ dateemmission_commande, System::String^ datepayement_commande, System::String^ datelivraison_commande, NS_Comp_Mappage::client^ ptrid_client) {
	System::String^ sql;
	this->commande->setreference_commande(reference_commande);
	this->commande->setsoldereglement_commande(soldereglement_commande);
	this->commande->setmoyenpayement_commande(moyenpayement_commande);
	this->commande->setdateemission_commande(dateemmission_commande);
	this->commande->setdatepayement_commande(datepayement_commande);
	this->commande->setdatelivraison_commande(datelivraison_commande);
	this->commande->setptrid_client(ptrid_client);
	sql = this->commande->supprimer();
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
