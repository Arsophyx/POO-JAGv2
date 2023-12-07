#include "pch.h"
#include "serviceclient.h"

NS_Comp_Svc_client::serviceclient::serviceclient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->client = gcnew NS_Comp_Mappage::client();
}
void NS_Comp_Svc_client::serviceclient::creerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client) {
	System::String^ sql;
	this->client->setnom_client(nom_client);
	this->client->setprenom_client(prenom_client);
	this->client->setanniversaire_client(anniversaire_client);
	sql = this->client->ajouter();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_client::serviceclient::modifierclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client) {
	System::String^ sql;
	this->client->setnom_client(nom_client);
	this->client->setprenom_client(prenom_client);
	this->client->setanniversaire_client(anniversaire_client);
	sql = this->client->modifier();
	this->oCad->actionRows(sql);


}
void NS_Comp_Svc_client::serviceclient::supprimerclient(System::String^ nom_client, System::String^ prenom_client, System::String^ anniversaire_client) {
	System::String^ sql;
	this->client->setnom_client(nom_client);
	this->client->setprenom_client(prenom_client);
	this->client->setanniversaire_client(anniversaire_client);
	sql = this->client->supprimer();
	this->oCad->actionRows(sql);


}
System::Data::DataSet^ NS_Comp_Svc_client::serviceclient::afficherclient(System::String^ datatablename) {
	System::String^ sql;
	sql = this->client->afficher();
	return this->oCad->getRows(sql, datatablename);
}