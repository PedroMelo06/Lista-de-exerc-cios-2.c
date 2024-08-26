#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }

    return 0;
}
