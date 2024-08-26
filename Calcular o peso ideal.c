#include <stdio.h>

int main() {
    char sexo;
    float altura, pesoIdeal;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1;
    }

    printf("O peso ideal é: %.2f kg\n", pesoIdeal);

    return 0;
}
