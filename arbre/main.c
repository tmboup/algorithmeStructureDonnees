///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Written by Fenix ////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"


int main(){

  //Ce programme concerne l'utilisation des arbres binaires
  printf("\n..............Bienvenue sur le programme de maniement des arbres.............. \n");

  Arbre *monArbre = initialisation(50);

  Noeud *root = monArbre->racine;

  printf("La racine est %d \n", root->value);

  insertTreeBin(root,3);
  insertTreeBin(root,55);
  insertTreeBin(root,88);

  displayTreeInfixe(root);


  Noeud *result = searchTreeBin(root,808);
  if(result != NULL)
    printf("Le resultat de la recherche est : %d \n \n",result->value);
  else
    printf("La valeur cherche ne se trouve pas dans l'arbre \n \n");

  cleanTree(root);

  return 0;
}
