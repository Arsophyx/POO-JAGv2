//CLservice.h********************************************************************************
#pragma once
#include "client.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::client^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ Afficherunpersonnel(System::String^);
	};
}
