#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Constantes definindo o número de casas para cada peça
    const int casasTorre = 5;    // Torre se move 5 casas para a direita
    const int casasBispo = 5;    // Bispo se move 5 casas na diagonal (Cima Direita)
    const int casasRainha = 8;   // Rainha se move 8 casas para a esquerda

    // ---------------------------
    // Movimentação da Torre
    // Estrutura de repetição: FOR
    // ---------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------------------
    // Movimentação do Bispo
    // Estrutura de repetição: WHILE
    // ---------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima Direita\n");  // Combinação de direções para movimento diagonal
        j++;
    }

    // ---------------------------
    // Movimentação da Rainha
    // Estrutura de repetição: DO-WHILE
    // ---------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}
