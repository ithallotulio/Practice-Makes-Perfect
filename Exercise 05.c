/*
    Fa�a um algoritmo que leia o valor do sal�rio de um usu�rio, calcule quantos sal�rios m�nimos esse
    usu�rio ganha e imprima na tela o resultado. (Base para o Sal�rio m�nimo R$ 1.293,20).
*/

#include <stdio.h>

int main(){
    float user_salario, xsalario;

    printf("Digite seu salario: ");
    scanf("%f", &user_salario);

    xsalario = user_salario / 1293.20;

    printf("Recebe o equivalente a %.2f salarios minimos", xsalario);

    return 0;
}
