#include <stdio.h>

int main() {
   //Variáveis para Carta 1;
   char codigo1 [4];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;
   float densidade1, pibPerCapita1;

   //Variáveis para Carta 2;
   char codigo2 [4]; 
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidade2, pibPerCapita2;

   //Cadastro da Carta 1;
   printf("\n=== Cadastro da Carta 1 ===\n");
   printf("Código A01: ");
   scanf("%s", codigo1);

   printf("População: ");
   scanf("%d", &populacao1);

   printf("Área: ");
   scanf("%f", &area1);

   printf("Pib: ");
   scanf("%f", &pib1);

   printf("Números de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos1);

   //Cálculos da Carta 1
   densidade1 = populacao1 / area1;
   pibPerCapita1 = pib1 / populacao1;

   //Cadastro Carta 2;
   printf("\n=== Cadastro da Carta 2 ===\n");
   printf("Código B02: ");
   scanf("%s", codigo2);

   printf("População: ");
   scanf("%d", &populacao2);

   printf("Área: ");
   scanf("%f", &area2);

   printf("Pib: ");
   scanf("%f", &pib2);

   printf("Números de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicos2);

   //Cálculos da Carta 2
   densidade2 = populacao2 / area2;
   pibPerCapita2 = pib2 / populacao2;

   printf("\n\n==============================\n");
   printf("         Carta 1\n");
   printf("===============================\n");
   printf("Código: %s\n", codigo1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Pontos Turísticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %.2f\n", densidade1);
   printf("Pib per Capita: %.2f\n", pibPerCapita1);

   printf("\n\n==============================\n");
   printf("         Carta 2\n");
   printf("===============================\n");
   printf("Código: %s\n", codigo2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos Turísticos: %d\n", pontosTuristicos2);
   printf("Densidade Populacional: %.2f\n", densidade2);
   printf("Pib per Capita: %.2f\n", pibPerCapita2);

   printf("\n================================");
   printf("Fim da exibição das cartas.\n");
   printf("================================\n");

    return 0;
}