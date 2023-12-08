#pragma once
#include "client.h"
#include "adresse.h"

namespace NS_Comp_Mappage {

    ref class adresse_livraison  {
    private:
        int^ ptrid_adresse;
        int^ ptrid_client;

    public:
        System::String^ ajout(void);
        System::String^ selectIdAdresse(void);
        System::String^ supprimer(void);
        void setptrid_client(int^);
        int^ getptrid_client(void);
        void setptrid_adresse(int^);
        int^ getptrid_adresse(void);
    };
}
