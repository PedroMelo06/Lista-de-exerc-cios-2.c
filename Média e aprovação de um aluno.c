#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota da 1� avalia��o: ");
    scanf("%f", &nota1);
    printf("Digite a nota da 2� avalia��o: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A m�dia do aluno �: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
