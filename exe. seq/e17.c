#include <stdio.h>

int main() {
    int quantidade1, quantidade2, quantidade3;
    float v1, v2, v3, total;

    printf("Digite a quantidade do primeiro produto: ");
    scanf("%d", &quantidade1);

    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &v1);

    printf("Digite a quantidade do segundo produto: ");
    scanf("%d", &quantidade2);

    printf("Digite o valor do segundo produto: ");
    scanf("%f", &v2);

    printf("Digite a quantidade do terceiro produto: ");
    scanf("%d", &quantidade3);

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &v3);

    total = (quantidade1 * v1) + (quantidade2 * v2) + (quantidade3 * v3);

    printf("\nO valor total e: %.2f\n", total);

    return 0;
}
