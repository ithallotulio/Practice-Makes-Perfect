/*
    Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B,
    mostre se a soma é menor que C.

    Read the values of A, B, C, then print in the screen the sum between A and B, and show if the sum is less than C.
*/

#include <stdio.h>

int main(){
    int a, b, c, soma;

    scanf("%d %d %d", &a, &b, &c);

    soma = a + b;

    printf("%d + %d = %d\n", a, b, soma);

    if (soma < c){
        printf("Soma menor que C = %d", c);
    } else {
        printf("Soma maior ou igual a C = %d", c);
    }
    return 0;
}
