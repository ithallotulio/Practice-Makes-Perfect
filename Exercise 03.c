/*
    Fa�a um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, dever� somar os dois valores,
    caso contr�rio devera multiplicar A por B. Ao final de qualquer um dos c�lculos deve-se atribuir o resultado a uma vari�vel
    C e imprimir seu valor na tela.
*/

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Escreva dois numeros inteiros, se for igual somarei, se for diferente vou multiplicar:");
    scanf("%d %d", &a, &b);

    if (a == b){
        c = a + b;
    } else {
        c = a * b;
    }

    printf("O valor e %d", c);

    return 0;
}
