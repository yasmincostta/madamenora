#include <stdio.h>

int main() {
    float a, b, c, d, e, f, j, k;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    printf("Digite o coeficiente d: ");
    scanf("%f", &d);

    printf("Digite o coeficiente e: ");
    scanf("%f", &e);

    printf("Digite o coeficiente f: ");
    scanf("%f", &f);

    j = (a * f - c * d) / (a * e - b * d);
    k = (c * e - b * f) / (a * e - b * d);

    printf("O valor de j e: %.2f\n", j);
    printf("O valor de k e: %.2f\n", k);

    return 0;
}
