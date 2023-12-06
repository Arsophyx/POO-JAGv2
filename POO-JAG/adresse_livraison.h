#pragma once
#include "client.h"
#include "adresse.h"

namespace NS_Comp_Mappage {

    ref class adresse_livraison  {
    private:
        adresse^ ptrid_adresse;
        client^ ptrid_client;

    public:
        void setptrid_client(client^);
        client^ getptrid_client(void);
        void setptrid_adresse(adresse^);
        adresse^ getptrid_adresse(void);
    };
}
