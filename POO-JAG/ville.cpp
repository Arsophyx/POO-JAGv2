//ville.cpp
#include "pch.h"
#include "ville.h"




void NS_Comp_Mappage::ville::setid_ville(int^ id_ville)
{
	this->id_ville = id_ville;
}

void NS_Comp_Mappage::ville::setnom_ville(System::String^ nom_ville)
{
	this->nom_ville = nom_ville;
}


void NS_Comp_Mappage::ville::setcodepostal_ville(System::String^ codepostal_ville)
{
	this->codepostal_ville = codepostal_ville;
}




int^  NS_Comp_Mappage::ville::getid_ville(void) { return this->id_ville; }
System::String^ NS_Comp_Mappage::ville::getnom_ville(void) { return this->nom_ville; }
System::String^ NS_Comp_Mappage::ville::getcodepostal_ville(void) { return this->codepostal_ville; }