#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade, idade2028;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idade2028 = 2030 - anoNascimento;

    printf("A ano da pessoa e: %d anos\n", idade);
    printf("Em 2030, a pessoa tera: %d anos\n", idade2028);

    return 0;
}
