#include <stdio.h>

int main() {
    printf("--- DESAFIO DE XADREZ ---\n\n");

    // Torre: 5 casas para a Direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
        
    }


    // Bispo: 5 casas na Diagonal (Cima, Direita)
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }

    // Rainha: 8 casas para a Esquerda
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    // Cavalo: Movimento em L 
    printf("\nMovimento do Cavalo:\n");

    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Direita\n"); // imprime "Direita" uma vez
    }
    

    return 0;
}