#include <stdio.h>
int main() {

  // Variáveis para a Carta 1
  char estado1;
  char codigo1[5];
  char nome1[50];
  unsigned long int populacao1; // <- Fique de olho nesse tipo!
  float area1, pib1;
  int pontos_turisticos1;
  float densidade1, pib_per_capita1, super_poder1;

  // Variáveis para a Carta 2 (Repita o mesmo esquema)
  char estado2;
  char codigo2;
  char nome2;
  unsigned long int populacao2;
  float area2, pib2;
  int pontos_tiristicos2;
  float densidade2, pib_per_capita2, super_poder2;
  // Cadastro Carta 1
  printf("--- Cadastro da Carta 1 ---\n");
  printf("Estado (A-H): ");
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
  super_poder1 = (float)populacao1 + area1 +pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

  // Cadastro Carta 2
  printf("\n --- Cadastro da Carta 2 ---\n"); 
  printf
   return 0;
}
 printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos_turisticos2);

    