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
System::Data::DataSet^ NS_Comp_Svc_commande::servicecommande::affichercommande(System::String^ datatablename) {
	System::String^ sql;
	sql = this->commande->afficher();
	return this->oCad->getRows(sql, datatablename);
}