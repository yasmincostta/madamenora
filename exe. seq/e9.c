#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 3.0;

    printf("A area do triangulo e: %.2f\n", area);
    return 0;
}
