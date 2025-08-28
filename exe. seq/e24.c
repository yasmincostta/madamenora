#include <stdio.h>
#include <math.h>

int main() {
    float aplicacaomensal, taxa, valoracumulado;
    int numeromeses;

    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &aplicacaomensal);

    printf("Digite a taxa de juros (i, ex: 0.01 para 1%%): ");
    scanf("%f", &taxa);

    printf("Digite o numero de meses (n): ");
    scanf("%d", &numeromeses);

    valoracumulado = (aplicacaomensal * pow(1 + taxa, numeromeses) - 1) / taxa;

    printf("O valor acumulado na poupanca e: R$ %.2f\n", valoracumulado);

    return 0;
}
