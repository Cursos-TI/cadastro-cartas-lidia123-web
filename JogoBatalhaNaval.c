#include <stdio.h>
/**
 * DESAFIO: BATALHA NAVAL - NÍVEL NOVATO
 * Oobjetivo: Posicionar dois navios(horizontal e vertcal) em uma matriz 10x10.
 */
int main() {
    //1.Represente o Tabuleiro: Matriz 10x10 inicializada com 0 (água)
    int tabuleiro[10][10];
    int i,j;

    //Inicializando o tabuleiro com zeros
    for (i= 0; i < 10; i++) 
    {
        for ( j = 0; j < 10;j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }
    // 2. Posicione os Navios
    //Navio 1: Horizontal (Tamanho 3)
    //Cordenadas escolhidas: Linha 2, Colunas 3, 4 e 5
    int navioHorizontal[3] = {3, 3, 3}; // Representação do navio (valor 3)
    int linhaH = 2, colunaH = 3;

    for ( j = 0; j < 3; j++)
    {
        tabuleiro[linhaH] [colunaH + j] = navioHorizontal[j];
    }
    //Navio 2: Veartical (Tamanho 3)
    //Cordenadas escolhidas: Linha 2, Colunas 5, 6 e 7, Coluna 8;
    int navioVertical[3] = {3,3,3};
    int linhaV = 5, colunaV = 8;

    for ( i = 0; i < 3; i++)
    {
        tabuleiro [linhaV + 1] [colunaV] = navioVertical[i];
    }
    
    //3. Exiba o tabuleiro
    printf("--- TABULEIRO DE BATALHA NAVAL ---\n");
    for ( i = 0; i < 10;i++)
    {
        for ( j = 0; j < 10; j++)
        {
            //Imprime o valor seguido de um espaço para melhor visualização
        printf("%d ",tabuleiro[i][j]);
        }]
        
        // Pula uma linha ao final de cada linha na matriz
        printf("\n");

    }
    
    return 0;
}