
#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novoSalario = salario * 1.35;

    printf("O novo salario e: %.2f\n", novoSalario);

    return 0;
}
