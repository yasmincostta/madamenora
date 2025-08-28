#include <stdio.h>

int main() {
    float p1, p2, p3, p4, p5, total, pagamento, troco;

    printf("Digite o valor do produto 1: ");
    scanf("%f", &p1);
    printf("Digite o valor do produto 2: ");
    scanf("%f", &p2);
    printf("Digite o valor do produto 3: ");
    scanf("%f", &p3);
    printf("Digite o valor do produto 4: ");
    scanf("%f", &p4);
    printf("Digite o valor do produto 5: ");
    scanf("%f", &p5);

    total = p1 + p2 + p3 + p4 + p5;

    printf("Total da compra: R$ %.2f\n", total);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    troco = pagamento - total;

    printf("O troco a ser devolvido e: R$ %.2f\n", troco);

    return 0;
}
