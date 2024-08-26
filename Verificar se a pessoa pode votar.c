#include <stdio.h>

int main() {
    int anoAtual, anoNascimento, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16) {
        printf("Você pode votar este ano.\n");
    } else {
        printf("Você não pode votar este ano.\n");
    }

    return 0;
}
