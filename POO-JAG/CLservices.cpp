//CLservice.CPP***************************************************************************************
#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::client();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::Afficherunpersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->afficher();
	return this->oCad->getRows(sql, dataTableName);
}
