/*
    Faça um algoritmo que leia um valor qualquer e imprima na tela com um reajuste de 5%
*/

#include <stdio.h>

int main(){
    float valor, reajuste;

    printf("Digite um valor e reajustarei 5 porcento: ");
    scanf("%f", &valor);

    reajuste = valor * (1 + 5.00/100);

    printf("O valor reajustado com 5 porcento e de R$%.2f\n", reajuste);

    return 0;
}
