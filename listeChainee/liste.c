///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Written by Fenix ////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

Liste* initialisation(int pvaleur){
  Liste *liste = malloc(sizeof(*liste));
  Noeud *noeud = malloc(sizeof(*noeud));

  if(liste == NULL || noeud == NULL){
    exit(EXIT_FAILURE);
  }

  noeud->valeur =pvaleur;
  noeud->suivant = NULL;
  liste->premier=noeud;
  (liste->nbreNoeuds)=1;

  return liste;
}

//cette fonction cree une initialisation de la liste avec une valeur nulle.
Liste* initialisationDefault(){
  Liste *liste = malloc(sizeof(*liste));
  Noeud *noeud = malloc(sizeof(*liste));

  if(liste == NULL || noeud == NULL){
    exit(EXIT_FAILURE);
  }
  noeud = NULL;
  liste->premier=noeud;
  (liste->nbreNoeuds)=1;

  return liste;
}

//insertion en tete d'une liste
void insertion(Liste* liste,int nbreNouveau){
  Noeud *nouveau = malloc(sizeof(*nouveau));
  if(liste==NULL || nouveau==NULL){
    exit(EXIT_FAILURE);
  }
  nouveau->valeur=nbreNouveau;
  //Insertion de l'element au debut de la liste.
  nouveau->suivant=liste->premier;
  liste->premier=nouveau;
  (liste->nbreNoeuds)++;
}


//suppression de la tete d'une liste
void suppressionTete(Liste *liste){
  if(liste==NULL){
    exit(EXIT_FAILURE);
  }

  if(liste->premier !=NULL){
    Noeud *aSupprimer = malloc(sizeof(*aSupprimer));
    aSupprimer = liste->premier;
    liste->premier = liste->premier->suivant;
    free(aSupprimer);
  }

}

//affiche une liste
void afficher(Liste *liste){
  if(liste == NULL){
    exit(EXIT_FAILURE);
  }
  Noeud *actuel = liste->premier;
  while (actuel != NULL) {
    printf("%d -> \n",actuel->valeur);
    actuel=actuel->suivant;
  }
  printf("NULL \n");
}

//recherche une valeur dans une liste
bool rechercher(Liste *pListe,int pValeur){
  Noeud *courant = malloc(sizeof(*courant));
  courant = pListe->premier;
  while (pValeur != (courant->valeur)) {
    if(courant->suivant == NULL)
      return false;
    else
      courant=courant->suivant;
  }
  return true;
}

//Suppression de la premiere occurence dans une liste
void suppFirstOccur(Liste *pListe,int pOccur){
  Noeud *courant = malloc(sizeof(*courant));
  Noeud *precedent = malloc(sizeof(*precedent));
  courant = pListe->premier;

  while(courant->valeur != pOccur){
    if(courant->suivant == NULL)
      printf("Pas d'occurence dans cette liste \n");
    else{
      precedent = courant;
      courant = courant->suivant;
    }
  }
  if(pListe->premier->valeur == pOccur){
    pListe->premier = pListe->premier->suivant;
    free(courant);
  }else if  (courant->valeur == pOccur){
    precedent->suivant = courant->suivant;
    free(courant);
  }
}



//Nombre de repetition d'un nombre dans une liste
int nbreRepetition(Liste *pListe,int pNombre){
  Noeud *courant = malloc(sizeof(*courant));
  courant = pListe->premier;
  int count = 0;
  while(courant != NULL){
    if(courant->valeur == pNombre)
      count++;
    courant = courant->suivant;
  }
  return count;
}


//Retour la position de la premiere occurence
int retourPosition(Liste *pListe,int pNombre){
  Noeud *courant = malloc(sizeof(*courant));
  courant = pListe->premier;
  int count = 0;
  while(courant != NULL){
    if(courant->valeur == pNombre)
      return count;
    courant = courant->suivant;
    count++;
  }
  return count;
}


//Joindre deux listes chainees pour en former un
//Nous utilisons l'insertion en tete.
void joinListe(Liste *liste1,Liste *liste2){
  Noeud *courant2 = malloc(sizeof(*courant2));

  if(liste1==NULL || liste2==NULL || courant2==NULL)
    exit(EXIT_FAILURE);

  courant2 = liste2->premier;
  while(courant2 != NULL){
    Noeud *nouveau = malloc(sizeof(*nouveau));
    nouveau->valeur = courant2->valeur;
    nouveau->suivant=liste1->premier;
    liste1->premier = nouveau;
    courant2 = courant2->suivant;
  }
  }

  
//Nouvelle methode permet de relier deux listes en parcourant le premier jusqu'a etre proche de la fin
//Pour le relier a la seconde liste
void joinListe2(Liste *liste1,Liste *liste2){
  Noeud *courant1 = malloc(sizeof(Noeud));
  if(liste1==NULL || liste2 == NULL || courant1 == NULL)
    exit(EXIT_FAILURE);

  courant1 = liste1->premier;

  while(courant1->suivant !=NULL){
    courant1 = courant1->suivant;
  }

  courant1->suivant = liste2->premier;
}


//cette methode permet d'ajouter une valeur a la valeur de chaque noeud qu'il rencontre.
void additionListe(Liste *liste,int pNombre){
  Noeud *courant = malloc(sizeof(*courant));
  if(liste==NULL || courant==NULL)
    exit(EXIT_FAILURE);

  courant = liste->premier;
  while(courant!=NULL){
    courant->valeur +=pNombre;
    courant = courant->suivant;
  }
}

//Verifie si une liste est croissant ou pas
bool listeCroissant(Liste *liste){
  Noeud *courant = malloc(sizeof(*courant));
  if(liste==NULL || courant==NULL)
    exit(EXIT_FAILURE);

  courant=liste->premier;
  while (courant->suivant !=NULL) {
    if((courant->valeur)>(courant->suivant->valeur)){
      return false;
      courant->suivant==NULL;
    }else
      courant = courant->suivant;
  }
  return true;
}



//Verification d'une liste vide
bool isListeVide(Liste *liste){
    if(liste->premier != NULL)
      return true;

    return false;
}


//Suppression en queue
void suppressionQueue(Liste *liste){
  Noeud *courant = malloc(sizeof(*courant));
  courant = liste->premier;

  if(liste->premier->suivant == NULL){
    free(liste->premier);
  }

  while(courant->suivant->suivant != NULL){
    courant = courant->suivant;
  }

  free(courant->suivant);
  courant->suivant == NULL;


}

//Cette fonction permet de renverser une liste
void reverse(Liste *liste){
  Noeud *first = liste->premier;
  Noeud *second = liste->premier->suivant;
  Noeud *temp = second->suivant;

  second->suivant = first;
  first->suivant = NULL;

  while(temp != NULL){
    first = second;
    second=temp;
    temp=second->suivant;
    second->suivant = first;
  }
  liste->premier = second;
}

//cette fonction presente une autre maniere de renverser les listes
void reverseParticu(Liste *liste,Noeud *noeud1,Noeud *noeud2){
  Noeud *actuel = liste->premier;
  while(actuel != NULL){
    if(actuel->valeur == noeud1->valeur)
      actuel->valeur = noeud2->valeur;
    else if(actuel->valeur == noeud2->valeur)
      actuel->valeur = noeud1->valeur;

    actuel=actuel->suivant;
  }

}




//written by fenix
