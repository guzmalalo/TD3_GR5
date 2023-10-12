// add standard library
#include<stdio.h>

/**
 * Saisir deux entiers au clavier
 * Afficher le plus grand des deux dans la console
 */
int main(void){
    // Declaration & initialisation
    int a=0, b=0;

    // Input
    printf("Donnez un 1ere valeur : ");
    scanf("%d", &a);
    printf("Donnez un 2eme valeur : ");
    scanf("%d", &b);

    printf("La valeur plus grande est %d", a>b?a:b);

    return 0;
}