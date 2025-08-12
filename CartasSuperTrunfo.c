#include <stdio.h>

int main() {
   //Variáveis para Carta 1;
   char codigo1 [4];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;

   //Variáveis para Carta 2;
   char codigo2 [4]; 
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   //Cadastro da Carta 1;
   printf("Código A01: \n");
   scanf("%s", codigo1);

   printf("População: \n");
   scanf("%d", &populacao1);

   printf("Área: \n");
   scanf("%f", &area1);

   printf("Pib: \n");
   scanf("%f", &pib1);

   printf("Números de Pontos Turisticos: \n");
   scanf("%d", &pontosTuristicos1);

   //Cadastro Carta 2;
   printf("Código B02: \n");
   scanf("%s", codigo2);

   printf("População: \n");
   scanf("%d", &populacao2);

   printf("Área: \n");
   scanf("%f", &area2);

   printf("Pib: \n");
   scanf("%f", &pib2);

   printf("Números de Pontos Turísticos: \n");
   scanf("%d", &pontosTuristicos2);

   printf("Código: %s\n", codigo1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Pontos Turísticos: %d\n", pontosTuristicos1);

   printf("Código: %s\n", codigo2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f\n km²", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
