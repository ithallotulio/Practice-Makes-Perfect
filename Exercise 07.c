/*
    Faça um algoritmo que leia três valores inteiros diferentes e imprima na tela os valores em ordem decrescente.
*/

#include <stdio.h>

int main(){
    int a, b, c, menor, meio, maior;

    scanf("%d %d %d", &a, &b, &c);

    if (b < a) {
        if (c < a){
            maior = a;
            if (b < c){
                meio = c;
                menor = b;
            } else{
                meio = b;
                menor = c;
            }
        } else {
            maior = c;
            meio = a;
            menor = b;
        }
    } else {
        if (c < b){
            maior = b;
            if (c < a){
                meio = a;
                menor = c;
            } else {
                meio = c;
                menor = a;
            }
        } else {
            maior = c;
            meio = b;
            menor = a;
        }
    }

    printf("Os numeros em ordem decrescente sao %d %d %d", maior, meio, menor);
    return 0;
}
