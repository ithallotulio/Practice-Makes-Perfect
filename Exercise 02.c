/*
    Fa�a um algoritmo para receber um n�mero qualquer e imprimir na tela se o n�mero � par ou �mpar, positivo ou negativo.
*/

#include <stdio.h>

int main(){
    int num;

    printf("Escreva um numero e direi se ele e impar ou par, positivo ou negativo: ");
    scanf("%d", &num);

    // Verifica se � par ou impar
    if (num%2 == 0){
        printf("O numero e par e ");
    } else {
        printf("O numero e impar e ");
    }

    // Verifica se � positivo ou negativo (ou neutro no caso do 0)
    if (0 < num){
        printf("positivo\n");
    } else if (num < 0){
        printf("negativo\n");
    } else {
        printf("neutro\n");
    }

    return 0;
}
