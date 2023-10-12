// Lib
#include <stdio.h>

/**
 * Saisir un entier au clavier
 * Indiquer dans la console si cet entier est un multiple de 3
 * et s'ilest supérieur ou égal à 10.
 */
int main(void){
    // declaration et init
    int n;
    const int t = 3;

    //input
    printf("Saisir un entier au clavier : ");
    scanf("%d", &n);

    // multiple de 3
    // code
    printf("%d multiple de 3 ? : %c \n", n , n%t== 0 ? 'O': 'N');
    printf("%d > 10 ? : %c \n", n ,n > 10 ? 'O':'N');

    return 0;
}