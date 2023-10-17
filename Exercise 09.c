/*
    Faça um algoritmo que leia três notas obtidas por um aluno, e imprima na tela a média das notas.
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite as 3 notas obitdas pelo aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1+nota2+nota3) / 3;

    printf("A media foi de %.2f", media);

    return 0;
}
