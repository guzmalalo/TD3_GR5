#include <stdio.h>

#define MAX_I 4
#define MAX_J 3

int main() {
    int varA = 0, varB = 0;
    int i = 0, j = 0, cpt = 0;
    for (i = 1; i < MAX_I; i++) {
        for (j = 1; j < MAX_J; j++) {
            // Mettre un point d'arrêt à la ligne suivante :
            varA = i * j;
            // Mettre un point d'arrêt à la ligne suivante :
            varB = i + j - i;
            // Mettre un point d'arrêt à la ligne suivante :
            printf("Ceci est le %dème printf !\n", ++cpt);
        }
    }
    return 0;
}
