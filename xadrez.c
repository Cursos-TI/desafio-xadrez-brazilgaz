#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTOS_RAINHA);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    const int MOVIMENTOS_BAIXO = 2;
    const int MOVIMENTO_ESQUERDA = 1;

    // Simula o movimento de duas casas para baixo (usando for)
    for (int baixo = 0; baixo < MOVIMENTOS_BAIXO; baixo++) {
        printf("Baixo\n");
        // Simula o movimento de uma casa para a esquerda (usando while)
        int esquerda = 0;
        while (esquerda < MOVIMENTO_ESQUERDA && baixo == MOVIMENTOS_BAIXO - 1) {
            printf("Esquerda\n");
            esquerda++;
        }
    }
    printf("\n");

    return 0;
}