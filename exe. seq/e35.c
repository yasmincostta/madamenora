#include <stdio.h>

int main() {
    int numapartamentos;
    float valordiaria, valorpromocional, total1, total280, valorperdido;

    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &numapartamentos);
    printf("Digite o valor da diaria por apartamento: ");
    scanf("%f", &valordiaria);

    // Valor promocional da diária (75% de desconto)

    valorpromocional = valordiaria * 0.75;

    // Valor total arrecadado com 100% de ocupação (sem promoção)

    total1 = numapartamentos * valordiaria;


    // Valor total arrecadado com 100% de ocupação (com promoção)

    float totalCompromocao = numapartamentos * valorpromocional;

    // Valor total arrecadado com 70% de ocupação (com promoção)

    total280 = (numapartamentos * 0.70) * valorpromocional;


    // Valor que o hotel deixará de arrecadar (100% de ocupação)

    valorperdido = total1 - totalcompromocao;

    printf("\nValor promocional da diaria: R$ %.2f\n", valorpromocional);
    printf("Valor total a ser arrecadado com 100%% de ocupacao: R$ %.2f\n", totalCompromocao);
    printf("Valor total a ser arrecadado com 70%% de ocupacao: R$ %.2f\n", total1);
    printf("Valor que o hotel deixara de arrecadar (100%% de ocupacao): R$ %.2f\n", valorperdido);

    return 0;
}
