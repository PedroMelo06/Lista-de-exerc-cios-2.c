#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao;

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &vendas);

    if (vendas <= 1500) {
        comissao = vendas * 0.03;
    } else {
        comissao = (1500 * 0.03) + ((vendas - 1500) * 0.05);
    }

    printf("O salário total é: R$%.2f\n", salarioFixo + comissao);

    return 0;
}
