#include <stdio.h>

int main() {
    printf("--- DESAFIO DE XADREZ ---\n\n");

    // Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 2; i++) {
        printf("Direita\n");
        
    }

    // Bispo
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < 2) {
        printf("Cima, Direita\n");
        b++;
    }

    // Rainha
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 2);

    return 0;
}