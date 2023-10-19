/*
    Faça um algoritmo que leia quatro notas obtidas por um aluno, calcule a média das nota obtidas, imprima na tela
    se o aluno foi aprovado ou reprovado. Para o aluno ser considerado aprovado sua média final deve ser maior ou igual a 7.
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Digite as 4 notas obitdas pelo aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1+nota2+nota3+nota4) / 4;

    if (7 <= media){
        printf("Aprovado, media: %.2f", media);
    } else {
        printf("Reprovado, media: %.2f", media);
    }

    return 0;
}
