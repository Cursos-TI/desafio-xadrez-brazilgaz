#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código explora recursividade e loops complexos para simular movimentos de peças de xadrez.

// Nível Mestre - Criando Movimentos Complexos

// Constantes para o número de movimentos
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_RAINHA = 8;
const int MOVIMENTOS_CAVALO_CIMA = 2;
const int MOVIMENTO_CAVALO_DIREITA = 1;

// Função recursiva para o movimento da Torre
void moverTorreRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorreRecursivo(movimentos - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(movimentos - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainhaRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(movimentos - 1);
    }
}

int main() {
    // Movimentação da Torre com Recursividade
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(MOVIMENTOS_TORRE);
    printf("\n");

    // Movimentação do Bispo com Recursividade e Loops Aninhados
    printf("Movimento do Bispo (Recursivo e Loops Aninhados):\n");
    for (int vertical = 0; vertical < MOVIMENTOS_BISPO; vertical++) {
        for (int horizontal = vertical; horizontal <= vertical; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Movimentação da Rainha com Recursividade
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(MOVIMENTOS_RAINHA);
    printf("\n");

    // Movimentação do Cavalo com Loops Complexos
    printf("Movimento do Cavalo (Loops Complexos):\n");
    for (int cima = 0, direita = 0; cima < MOVIMENTOS_CAVALO_CIMA; ) {
        printf("Cima\n");
        cima++;
        if (cima == MOVIMENTOS_CAVALO_CIMA && direita < MOVIMENTO_CAVALO_DIREITA) {
            printf("Direita\n");
            direita++;
            continue; // Continua para a próxima iteração (condição de cima ainda é verdadeira ou falsa)
        }
    }
    printf("\n");

    return 0;
}