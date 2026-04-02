#include <stdio.h>
int main() {
    // Variáveis da Carta 1 
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char estado2, codigo2[5], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;
    // Cadastro Carta1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);
    
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);
    
    //Cadastro Carta2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: "); 
    scanf(" %s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("população: ");
    scanf(" %lu", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Comparação
    printf("\n=== RESULTADO DA BATALHA ===\n");
    printf("População: Carta %d venceu ( %d)\n", (populacao2 > populacao2 ? 1 : 2), (populacao1 > pontos_turisticos2));
    printf("Área: Carta %d venceu ( %d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu ( %d)\n", (pib2 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turístico: Carta %d venceu ( %d)\n", (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2), (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu ( %d)\n", (densidade1 <densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu ( %d)\n", (pib_per_capita1 > pib_per_capita2 ? 1 : 2), (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu ( %d)\n", (super_poder1 > super_poder2 ? 1 : 2), (super_poder1 > super_poder2));
    return 0;
} 
    

    