#include<stdio.h>

/**
 * Afficher le périmètre et l'aire de ce rectangle dans la console
 * @return
 */
int main(){
    //Declaration et initialisation
    float l, h, p, a;

    // Input
    printf("Rentrez la longueur : ");
    scanf("%f", &l);

    printf("Rentrez l'hauteur: ");
    scanf("%f", &h);

    //Calcul
    p = 2*l+2*h;
    a = l*h;

    // Sortie
    printf("L'aire est : %f, le perimetre est :%f", a, p);

    return 0;
}