#include <stdio.h>

int main() {
    int conta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o n�mero da conta: ");
    scanf("%d", &conta);
    printf("Digite o saldo: ");
    scanf("%f", &saldo);
    printf("Digite o d�bito: ");
    scanf("%f", &debito);
    printf("Digite o cr�dito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("Saldo atual: R$%.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo.\n");
    } else {
        printf("Saldo Negativo.\n");
    }

    return 0;
}
