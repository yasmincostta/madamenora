#include <stdio.h>

int main() {
    float n1, p1, n2, p2, mediaPonderada;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite o peso da primeira nota: ");
    scanf("%f", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite o peso da segunda nota: ");
    scanf("%f", &p2);

    mediaPonderada = ((n1 * p1) + (n2 * p2)) / (p1 + p2);
    printf("A media ponderada das notas e: %.2f\n", mediaPonderada);
    return 0;
}
