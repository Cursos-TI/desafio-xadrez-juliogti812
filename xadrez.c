#include <stdio.h>

int main() {
    // Movimento da TORRE
    // Utilizando o laço FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do BISPO
    // Utilizando o laço WHILE
    int movimentoBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da RAINHA
    // Utilizando o laço DO-WHILE
    int movimentoRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);
    printf("\n");

    return 0;
}
