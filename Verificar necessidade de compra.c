#include <stdio.h>

int main() {
    int quantidadeAtual, quantidadeMaxima, quantidadeMinima;
    float quantidadeMedia;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidadeAtual);
    printf("Digite a quantidade m�xima em estoque: ");
    scanf("%d", &quantidadeMaxima);
    printf("Digite a quantidade m�nima em estoque: ");
    scanf("%d", &quantidadeMinima);

    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2.0;

    if (quantidadeAtual >= quantidadeMedia) {
        printf("N�o efetuar compra.\n");
    } else {
        printf("Efetuar compra.\n");
    }

    return 0;
}
