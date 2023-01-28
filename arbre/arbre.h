////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  Written by Fenix  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef liste_h
#define liste_h

typedef struct noeud Noeud;
typedef struct arbre Arbre;

struct noeud{
  int value;
  Noeud *right;
  Noeud *left;
};

struct arbre{
  Noeud *racine;
  int nbreNoeuds;
};


//Prototype des fonctions declarees sur le fichier arbre.c
Arbre *initialisation(int pValeur);
Noeud *newNoeud(int pValeur);
Noeud *insertTreeBin(Noeud *pRacine,int pValue);
void displayTreeInfixe(Noeud *pRoot);
Noeud *searchTreeBin(Noeud *pRoot,int pValue);
void cleanTree(Noeud *pRacine);
Noeud *joinTree(Noeud *treeLeft,Noeud *treeRight,int pRoot);


#endif



//Fenix
