#include <stdio.h>

int main() {
    int a, d, p, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &d);
    printf("Digite o valor de C: ");

    scanf("%d", &p);

    printf("Valores originais: A=%d, B=%d, C=%d\n", a, d, p);

    // Troca de valores
    temp = a;
    a = d;
    d = p;
    p = temp;

    printf("Valores apos a troca: A=%d, B=%d, C=%d\n", a, d, p);

    return 0;
}
