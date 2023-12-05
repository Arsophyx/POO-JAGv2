#pragma once
using namespace System;

ref class commande
{
private:
	int id_commande;
	int soldereglement_commande;
	int id_client;
	String reference_commande;
	String moyenpayement_commande;
	String dateemmission_commande;
	String datepayement_commande;
	String datelivraison_commande;

public:
	String ajouter(void);
	String modifier(void);
	String supprimer(void);
	String afficher(void);
	void setid_commande(int);
	void setsoldereglement_commande(int);
	void setid_client(int);
	void setreference_commande(String);
	void setmoyenpayement_commande(String);
	void setdateemission_commande(String);
	void setdatepayement_commande(String);
	void setdatelivraison_commande(String);
	int getid_commande(void);
	int getsoldereglement_commande(void);
	int getid_client(void);
	String getreference_commande(void);
	String getmoyenpayement_commande(void);
	String getdatemission_commande(void);
	String getdatelivraison_commande(void);

};