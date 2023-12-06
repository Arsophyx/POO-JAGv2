#pragma once
#include "article.h"
#include "commande.h"
namespace NS_Comp_Mappage {

    ref class integrer {
    private:
        commande^ id_commande;
        article^ id_article;
        int^ nombre_article;

    public:
        void setptrid_commande(commande^);
        commande^ getptrid_commande(void);
        void setptrid_article(article^);
        article^ getptrid_article(void);
        void setnombre_article(int^ nombre_article);
        int^ getnombre_article(void);
    };
}