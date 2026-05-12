#include <stdio.h>

int main() {
    // Valores definidos conforme o desafio
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // 1. TORRE (usando FOR)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. BISPO (usando WHILE)
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < movimentoBispo) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // 3. RAINHA (usando DO-WHILE)
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < movimentoRainha);
    printf("\n");

    return 0;
}