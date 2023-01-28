#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


int main(int argc, char const *argv[]) {
  printf("Bienvenue sur le programme sur les listes double chainee ....\n");

  ListeDouble *maListeD = initialisation();
  insertionQueue(maListeD,3);
  insertionQueue(maListeD,8);
  Affichage(maListeD);




  return 0;
}
