#include <stdio.h>

int main() {
    int quantidade;
    float custo;

    printf("Digite o n�mero de ma��s compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        custo = quantidade * 1.30;
    } else {
        custo = quantidade * 1.00;
    }

    printf("O custo total da compra �: R$%.2f\n", custo);

    return 0;
}
