#include <stdio.h>

int main() {
    int totalEleitores, votosC1, votosC2, votosNulos;
    float percCand1, percCand2, percNulos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%d", &votosC1);

    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%d", &votosC2);

    votosNulos = totalEleitores - (votosC1 + votosC2);

    percCand1 = ((float)votosC1 / totalEleitores) * 100.0;
    percCand2 = ((float)votosC2 / totalEleitores) * 100.0;
    percNulos = ((float)votosNulos / totalEleitores) * 100.0;

    printf("\nPercentual de votos do primeiro candidato: %.2f%%\n", percCand1);
    printf("Percentual de votos do segundo candidato: %.2f%%\n", percCand2);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);

    return 0;
}
