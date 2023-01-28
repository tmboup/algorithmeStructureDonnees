///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Written by Fenix ////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef liste_h
#define liste_h


typedef struct Noeud Noeud;
typedef struct Liste Liste;

//definition de la boolean
#define bool unsigned int
#define true 1
#define false 0


struct Noeud{
  int valeur;
  Noeud* suivant;
};

struct Liste{
  Noeud* premier;
  int nbreNoeuds;
};


//Les fonctions
Liste* initialisation();
Liste* initialisationDefault();
void insertion(Liste *liste,int nbreNouveau);
void suppressionTete(Liste *liste);
void afficher(Liste *liste);
bool rechercher(Liste *pListe,int pValeur);
void suppFirstOccur(Liste *pListe,int nbreOcc);
void suppToutOccur(Liste *pListe,int pOccur);
int nbreRepetition(Liste *pListe,int pNombre);
int retourPosition(Liste *pListe,int pNombre);
void listePosition(Liste *pListe,int pNombre);
void joinListe(Liste *liste1,Liste *liste2);
void joinListe2(Liste *liste,Liste *liste2);
void joinListe(Liste *liste1,Liste *liste2);
void additionListe(Liste *liste,int pNombre);
bool listeCroissant(Liste *liste);
bool isListeVide(Liste *liste);
void suppressionQueue(Liste *liste);
void reverse(Liste *liste);
void reverseParticu(Liste *liste,Noeud *noeud1,Noeud *noeud2);


#endif



//written by fenix
