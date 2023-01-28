#ifndef liste_h
#define liste_h

typedef struct noeud Noeud;
typedef struct listeDouble ListeDouble;


struct noeud{
  int valeur;
  Noeud *precedent;
  Noeud *suivant;
};

struct listeDouble{
  int nbreNoeuds;
  Noeud *tete;
  Noeud *queue;
};



//Les fonctions
ListeDouble *initialisation();
void insertionQueue(ListeDouble *listeDouble,int nbreNouveau);
void Affichage(ListeDouble *listeDouble);



#endif
