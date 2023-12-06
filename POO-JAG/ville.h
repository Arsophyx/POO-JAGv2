//ville.h
#include "CAD.h"
#pragma once
namespace NS_Comp_Mappage {
	ref class ville
	{
	private:
		System::String^ sSql;
		int^ id_ville;
		System::String^ nom_ville;
		System::String^ codepostal_ville;

	public:

		void setid_ville(int^);
		void setnom_ville(System::String^);
		void setcodepostal_ville(System::String^);

		int^ getid_ville(void);
		System::String^ getnom_ville(void);
		System::String^ getcodepostal_ville(void);
	};
}