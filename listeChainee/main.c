#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main() {
  Liste *maListe = initialisation(99);
  insertion(maListe,1);
  insertion(maListe,3);
  insertion(maListe,5);
  insertion(maListe,7);
  insertion(maListe,1);
  insertion(maListe,8);
  insertion(maListe,9);
  insertion(maListe,3);

  Liste *maListe2 = initialisation(33);
  insertion(maListe2,10);
  insertion(maListe2,8);
  insertion(maListe2,6);
  insertion(maListe2,4);
  insertion(maListe2,2);

//Cette etape permet de verifier si une liste est vide ou non
/*
Liste *maListeTest = initialisationDefault();
int result1 = isListeVide(maListeTest);
printf("voici la resultat de la liste est-elle vide : %d\n",result1);
*/

//debut du programme d'inversion d'une liste
//printf("Affichage de la liste avant inversion \n");
//afficher(maListe);
//reverse(maListe);
//printf("Voici le resultat apres inversion \n");
//afficher(maListe);


//Cette section concerne la suppression en queue
//suppressionQueue(maListe);
//printf("Affichage de la liste apres une suppression en queue \n");
//afficher(maListe);




/*
  printf("Affichage de la liste de valeur...\n");
  afficher(maListe);
  printf("Le nombre de noeud est : %d \n", maListe->nbreNoeuds);

  printf("\nRecherche de valeur\n");
  bool noeudRecher = rechercher(maListe,0);
  if(noeudRecher==1)
    printf("La valeur est trouve.....\n");
  else
    printf("La valeur n'est pas trouve\n");


printf("\nNous allons supprimer une occurence ....\n");
suppFirstOccur(maListe,3);
afficher(maListe);  }



printf("\nNous alllons supprimer toute occurence \n");
//suppToutOccur(maListe,1);
afficher(maListe);


printf("\nNous allons afficher le nombre de repetition d'un nombre \n");
int nbreRepet = nbreRepetition(maListe,7);
printf("Le nombre de repetition de 1 est : %d \n", nbreRepet);

printf("\nNous allons retourner la position d'une valeur \n");
int pos = retourPosition(maListe,0);
printf("La position de 0 est %d: \n",pos);


printf("Nous allons retourner les positions d'une valeur sous forme de tableau \n");
listePosition(maListe,0);

printf("Affichage de la premiere liste \n");
afficher(maListe);
printf("Affichage de la seconde liste \n");
afficher(maListe2);
//printf("Nous allons joindre deux listes \n");
//joinListe(maListe,maListe2);
//afficher(maListe);


printf("Ajouter une valeur a chaque membre de la liste \n");
additionListe(maListe,10);
afficher(maListe);
*/

//printf("Nous allons verifier si la liste est croissant ou pas \n");
//bool reponse = listeCroissant(maListe2);
//printf("la reponse sur la croissance est : %d\n",reponse);


printf("Affichage de la premiere liste \n");
afficher(maListe);
//printf("Affichage de la seconde liste \n");
//afficher(maListe2);

//printf("Nous allons joindre deux listes \n");
//joinListe(maListe,maListe2);
//afficher(maListe);
Noeud *noeud1 = malloc(sizeof(*noeud1));
Noeud *noeud2 = malloc(sizeof(*noeud2));
noeud1->valeur=3;
noeud1->suivant=NULL;
noeud2->valeur=7;
noeud2->suivant=NULL;

reverseParticu(maListe,noeud1,noeud2);
printf("Affichage de la premiere liste \n");
afficher(maListe);

printf("\n####### fin programme liste chainee ##############\n");
return 0;
}



//written by fenix
