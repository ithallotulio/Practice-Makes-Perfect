/*
    Faça um algoritmo que receba um número inteiro e imprima na tela o seu antecessor e o seu sucessor.
*/

#include <stdio.h>

int main(){
    int num;

    printf("Escreva um numero:");
    scanf("%d", &num);

    printf("Escreveu %d, sucessor: %d, antecessor %d", num, num+1, num-1);

    return 0;
}
