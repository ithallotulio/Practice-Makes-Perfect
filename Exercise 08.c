/*
    Faça um algoritmo que calcule o IMC (Índice de Massa Corporal) de uma pessoa, leia o seu peso e sua altura e imprima na tela sua condição de acordo com a tabela abaixo:

Fórmula do IMC = peso / (altura)²

    Tabela Condições IMC

 Abaixo de 18,5   | Abaixo do peso
 Entre 18,6 e 24,9 | Peso ideal (parabéns)
 Entre 25,0 e 29,9 | Levemente acima do peso
 Entre 30,0 e 34,9 | Obesidade grau I
 Entre 35,0 e 39,9 | Obesidade grau II (severa)
 Maior ou igual a 40 | Obesidade grau III (mórbida)
*/

#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if (imc < 18.5) {
        printf("Abaixo do peso");
    } else if (imc < 24.9) {
        printf("Peso ideal (parabens)");
    } else if (imc < 29.9) {
        printf("Levemente acima do peso");
    } else if (imc < 34.9) {
        printf("Obesidade grau I");
    } else if (imc < 39.9) {
        printf("Obesidade grau II (severa)");
    } else {
        printf("Obesidade grau III (morbida)");
    }

    return 0;
}
