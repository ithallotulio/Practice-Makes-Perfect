/*
    Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.
*/

#include <stdio.h>

int main(){
    int num;

    printf("Escreva um numero e direi se ele e impar ou par, positivo ou negativo: ");
    scanf("%d", &num);

    // Verifica se é par ou impar
    if (num%2 == 0){
        printf("O numero e par e ");
    } else {
        printf("O numero e impar e ");
    }

    // Verifica se é positivo ou negativo (ou neutro no caso do 0)
    if (0 < num){
        printf("positivo\n");
    } else if (num < 0){
        printf("negativo\n");
    } else {
        printf("neutro\n");
    }

    return 0;
}
