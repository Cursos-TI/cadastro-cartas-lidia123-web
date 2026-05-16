#include <stdio.h>
/**
 * DESAFIO: BATALHA NAVAL - NÍVEL NOVATO
 * Oobjetivo: Posicionar dois navios(horizontal e vertcal) em uma matriz 10x10.
 */
int main() {
    //1.Represente o Tabuleiro: Matriz 10x10 inicializada com 0 (água)
    int matriz[10][10];
    

    //Inicializando o tabuleiro com zeros
    for (int linha = 0; linha < 10; linha++) 
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            matriz[linha][coluna] = 0;
        }
        
    }
    // 2. Posicionamento dos Navios (valor 3)
    //Navio 1: Horizontal (3 unidades)
    matriz[2][1] = 3;
    matriz[2][2] = 3;
    matriz[2][3] = 3;

    //Navio 2: Horizontal (3 unidades)
    matriz[5][8] = 3;
    matriz[6][8] = 3;
    matriz[7][8] = 3;

   
     //Navio 3: Diagonal Principal (descendo)
    //Linha e coluna aumentam juntas: (1,1),(2,2), (3,3)...
    matriz[1][5] = 3;
    matriz[2][6] = 3;
    matriz[3][7] = 3;

     //Navio 4: Diagonal Segundária (subindo)
    //Linha diminui e coluna aumenta: (7,1),(6,2), (5,3)...
    matriz[7][1] = 3;
    matriz[6][2] = 3;
    matriz[5][3] = 3;

    //4. EXIBIÇÃO: Mostrando o tabuleiro no console
    printf("--- TABULEIRO BATALHA NAVAL(AVENTUREIRO) ---\n\n");

        for ( int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            // Imprime o valor e um espaço para ficar alinhado
            printf("%d", matriz[linha][coluna]);
        }
        // Quando termina uma linha, pula para a de baixo
        printf("\n");
    }
    
    return 0;
}