#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O n�mero � positivo.\n");
    } else {
        printf("O n�mero � negativo.\n");
    }

    return 0;
}
