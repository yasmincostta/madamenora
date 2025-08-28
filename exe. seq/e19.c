#include <stdio.h>

int main() {
    int n1, n2, n3, somatorio;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    somatorio = n1 + n2 + n3;
    media = (float)somatorio / 3;

    printf("Media: %.2f\n", media);
    printf("Somatorio: %d\n", somatorio);
    printf("Resto da divisao do somatorio por cada valor:\n");
    printf("Somatorio %% %d = %d\n", n1, somatorio % n1);
    printf("Somatorio %% %d = %d\n", n2, somatorio % n2);
    printf("Somatorio %% %d = %d\n", n3, somatorio % n3);

    return 0;
}
