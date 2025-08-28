#include <stdio.h>

int main() {

    char n1[10], n2[10], n3[10];

    printf("Digite o primeiro nome: ");
    scanf("%s", n1);

    printf("Digite o segundo nome: ");
    scanf("%s", n2);

    printf("Digite o terceiro nome: ");
    scanf("%s", n3);

    printf("Nomes impressos:\n");
    printf("%s %s\n", n1, n3);
    printf("%s\n", n2);

    return 0;
}
