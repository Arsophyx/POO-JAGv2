#pragma once
#include "article.h"
#include "commande.h"
namespace NS_Comp_Mappage {

    ref class integrer {
    private:
        int^ id_commande;
        int^ id_article;
        int^ nombre_article;

    public:
        System::String^ ajouter(void);
        System::String^ supprimer(void);
        void setptrid_commande(int^);
        int^ getptrid_commande(void);
        void setptrid_article(int^);
        int^ getptrid_article(void);
        void setnombre_article(int^ nombre_article);
        int^ getnombre_article(void);
    };
}