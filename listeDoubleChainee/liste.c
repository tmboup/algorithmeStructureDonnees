#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

ListeDouble *initialisation(){
  ListeDouble *listeDouble = malloc(sizeof(*listeDouble));

  if(listeDouble==NULL){
    exit(EXIT_FAILURE);
  }

  listeDouble->tete=NULL;
  listeDouble->queue=NULL;
  (listeDouble->nbreNoeuds)=0;

  return listeDouble;
}


void insertionQueue(ListeDouble *listeDouble,int nbreNouveau){
  Noeud *nouveau = malloc(sizeof(*nouveau));

  if(listeDouble==NULL || nouveau==NULL){
    exit(EXIT_FAILURE);
  }

  nouveau->valeur = nbreNouveau;
  nouveau->suivant = NULL;
  if(listeDouble->queue==NULL){
    nouveau->precedent=NULL;
    listeDouble->tete=nouveau;
    listeDouble->queue=nouveau;
  }else {
    listeDouble->queue->suivant=nouveau;
    nouveau->precedent=listeDouble->queue;
  }

  listeDouble->nbreNoeuds++;
}

void Affichage(ListeDouble *listeDouble){
  if(listeDouble==NULL)
    exit(EXIT_FAILURE);

    Noeud *actuel = listeDouble->tete;
    while(actuel != NULL){
      printf("%d -> \n",actuel->valeur);
      actuel=actuel->suivant;
    }

    printf("NULL \n");
}
