//CAD.CPP**
#include "pch.h"
#include "CAD.h"


NS_Comp_Data::CLcad::CLcad(void)
{
    this->sCnx = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True;Connect Timeout=30;Encrypt=False";

    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oDA->Fill(this->oDs, sDataTableName);

    return this->oDs;
}
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}

int NS_Comp_Data::CLcad::actionRowsID(System::String^ sSql){
    int id;
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oCnx->Open();
    id = System::Convert::ToInt32(this->oCmd->ExecuteScalar());
    this->oCnx->Close();
    return id;
}

System::String^ NS_Comp_Data::CLcad::actionRowsString(System::String^ sSql) {
    System::String^ chaine;
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oCnx->Open();
    chaine = System::Convert::ToString(this->oCmd->ExecuteScalar());
    this->oCnx->Close();
    return chaine;
}