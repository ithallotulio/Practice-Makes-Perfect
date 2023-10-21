/*
    Faça um algoritmo que leia o valor de um produto e determine o valor que deve ser pago, conforme a escolha da forma de pagamento pelo comprador
    e imprima na tela o valor final do produto a ser pago.

    Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo adequado.

    Tabela:
    1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto
    2 - À Vista no cartão de crédito, recebe 10% de desconto
    3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros
    4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valorProd, valorFinal, parcela;
    int formaPag;

    printf("Qual o valor do produto? ");
    scanf("%f", &valorProd);

    printf("\nFormas de Pagamento:\n");
    printf("1 - À Vista em Dinheiro ou Pix, recebe 15%% de desconto\n");
    printf("2 - À Vista no cartão de credito, recebe 10%% de desconto\n");
    printf("3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros\n");
    printf("4 - Parcelado no cartão em tres vezes ou mais, preço normal do produto mais juros de 10%%\n");

    printf("\nDigite a o número que corresponde a forma de pagamento escolhida: ");
    scanf("%d", &formaPag);

    switch(formaPag){
        case 1: // 15% de desconto
            valorFinal = valorProd * (1 - 15.00/100);
            break;
        case 2: // 10% de desconto
            valorFinal = valorProd * (1 - 10.00/100);
            break;
        case 3: // 2x parcelas s/juros
            valorFinal = valorProd;
            parcela = valorFinal/2;
            printf("\n2 parcelas no valor de R$%.2f totalizando R$%.2f\n", parcela, valorFinal);
            return 0;
        case 4: // 3x parcelas c/juros de 10%
            valorFinal = valorProd * (1 + 10.00/100);
            parcela = valorFinal/3;
            printf("\n3 parcelas no valor de R$%.2f totalizando R$%.2f\n", parcela, valorFinal);
            return 0;
        default:
            printf("\nValor digitado inválido\n");
            return 0;
    }
    printf("\nValor total a ser pago: R$%.2f", valorFinal);
    return 0;
}
