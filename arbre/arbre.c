///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Written by Fenix ////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

Arbre *initialisation(int pValeur){
  Arbre *arbre = malloc(sizeof(*arbre));

  if(arbre==NULL){
    exit(EXIT_FAILURE);
  }

  arbre->racine = newNoeud(pValeur);
  (arbre->nbreNoeuds)=1;

  return arbre;
}

Noeud *newNoeud(int pValeur){
  Noeud *courant = malloc(sizeof(*courant));
  courant->value=pValeur;
  courant->left=courant->right=NULL;
  return courant;
}


Noeud *insertTreeBin(Noeud *pRacine,int pValue){
  if (pRacine == NULL)
    return newNoeud(pValue);

  if(pValue < (pRacine->value))
    pRacine->left = insertTreeBin(pRacine->left,pValue);

  else if(pValue > (pRacine->value))
    pRacine->right = insertTreeBin(pRacine->right,pValue);

  return pRacine;
}

Noeud *searchTreeBin(Noeud *pRoot,int pValue){
  if(pRoot == NULL || pRoot->value==pValue)
    return pRoot;

  if((pRoot->value) < pValue)
    return searchTreeBin(pRoot->right,pValue);

  else
    return searchTreeBin(pRoot->left,pValue);

}
//parcours infixe (en ordre)
void displayTreeInfixe(Noeud *pRoot){
  //printf("Voici les noeuds de cet arbre .............\n");
  if(pRoot != NULL){
    displayTreeInfixe(pRoot->left);
    printf("%d \n",pRoot->value);
    displayTreeInfixe(pRoot->right);
  }

}



void cleanTree(Noeud *pRacine){
  if(pRacine == NULL)
    return;

//Aide pour le developpeur.
  printf("Suppression de %d\n", pRacine->value);

  cleanTree(pRacine->left);
  cleanTree(pRacine->right);

  free(pRacine);

}

Noeud *joinTree(Noeud *treeLeft,Noeud *treeRight,int pRootValue){
  Noeud *root = newNoeud(pRoot);

  root->left=treeLeft;
  root->right=treeRight;

  return root;

}


// Fenix 
