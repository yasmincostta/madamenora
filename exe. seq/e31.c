#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novoSalario = salario * 2.56;

    printf("O novo salario com aumento de 37%% e: R$ %.2f\n", novoSalario);

    return 0;
}
