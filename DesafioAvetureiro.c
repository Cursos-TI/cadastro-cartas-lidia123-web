#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. DEFINIÇÃO DA ESTRUTURA
    struct Carta {
        char nome[50];
        unsigned long int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadeDemografica;
    };

    struct Carta carta1, carta2;
    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    // 2. CADASTRO DA CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    carta1.densidadeDemografica = (float)carta1.populacao / carta1.area;

    // 3. CADASTRO DA CARTA 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    carta2.densidadeDemografica = (float)carta2.populacao / carta2.area;

    // 4. MENU DINÂMICO 1
    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1: valor1_c1 = (float)carta1.populacao; valor1_c2 = (float)carta2.populacao; break;
        case 2: valor1_c1 = carta1.area; valor1_c2 = carta2.area; break;
        case 3: valor1_c1 = carta1.pib; valor1_c2 = carta2.pib; break;
        case 4: valor1_c1 = (float)carta1.pontosTuristicos; valor1_c2 = (float)carta2.pontosTuristicos; break;
        case 5: valor1_c1 = carta1.densidadeDemografica; valor1_c2 = carta2.densidadeDemografica; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // 5. MENU DINÂMICO 2 (Não repete a opção 1)
    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
    if(opcao1 != 1) printf("1. Populacao\n");
    if(opcao1 != 2) printf("2. Area\n");
    if(opcao1 != 3) printf("3. PIB\n");
    if(opcao1 != 4) printf("4. Pontos Turisticos\n");
    if(opcao1 != 5) printf("5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    switch (opcao2) {
        case 1: valor2_c1 = (float)carta1.populacao; valor2_c2 = (float)carta2.populacao; break;
        case 2: valor2_c1 = carta1.area; valor2_c2 = carta2.area; break;
        case 3: valor2_c1 = carta1.pib; valor2_c2 = carta2.pib; break;
        case 4: valor2_c1 = (float)carta1.pontosTuristicos; valor2_c2 = (float)carta2.pontosTuristicos; break;
        case 5: valor2_c1 = carta1.densidadeDemografica; valor2_c2 = carta2.densidadeDemografica; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // 6. CÁLCULO DAS SOMAS
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // 7. EXIBIÇÃO DOS RESULTADOS
    printf("\n==========================================\n");
    printf("RESULTADO DA COMPARACAO\n");
    printf("==========================================\n");
    printf("Cidade 1: %s | Soma: %.2f\n", carta1.nome, soma1);
    printf("Cidade 2: %s | Soma: %.2f\n", carta2.nome, soma2);

    // Comparação final usando Operador Ternário
    if (soma1 == soma2) {
        printf("\nResultado: EMPATE!\n");
    } else {
        (soma1 > soma2) ? printf("\nVENCEDOR: %s!\n", carta1.nome) : printf("\nVENCEDOR: %s!\n", carta2.nome);
    }

    return 0;
}