#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    int codigo_carta1, codigo_carta2;
    unsigned long int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float pib_per_capita1, pib_per_capita2;
    float densidade1, densidade2;
    float superpoder1, superpoder2;

  // Área para entrada de dados
    printf("ENTRADA DE DADOS\n\n");

    // CARTA 1
        printf("-> CARTA 1\n");
  
        printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf("%c", &estado1);
          getchar(); // limpa o buffer

        printf("Código da Carta (de 01 a 04): ");
        scanf("%2d", &codigo_carta1);
          getchar();
  
        printf("Nome da cidade: ");
        fgets(cidade1, 50, stdin); // para captura de 50 caracteres incluindo espaço
          strtok(cidade1 , "\n"); // para retirada de quebra de linha
  
        printf("População: ");
        scanf("%i", &populacao1);
          getchar();
        
        printf("Área: ");
        scanf("%f", &area1);
          getchar();

        printf("PIB: ");
        scanf("%f", &pib1);
          getchar();
  
        printf("Pontos turísticos: ");
        scanf("%i", &pontos_turisticos1);
          getchar();

        // Calculando densidade populacional e pib per capita CARTA 1          
          densidade1 = (float) populacao1 / area1;
          pib_per_capita1 = (pib1 * 1000000000.0) / (float) populacao1;  
          
        // calculando super poder CARTA 1
          superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 - densidade1;


    // CARTA 2
        printf("\n-> CARTA 2\n");
  
        printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf("%c", &estado2);
          getchar(); // limpa o buffer

        printf("Código da Carta (de 01 a 04): ");
        scanf("%2d", &codigo_carta2);
          getchar();
  
        printf("Nome da cidade: ");
        fgets(cidade2, 50, stdin); // para captura de 50 caracteres incluindo espaço
          strtok(cidade2 , "\n"); // para retirada de quebra de linha
  
        printf("População: ");
        scanf("%i", &populacao2);
        
        printf("Área: ");
        scanf("%f", &area2);
          getchar();

        printf("PIB: ");
        scanf("%f", &pib2);
          getchar();
  
        printf("Pontos turísticos: ");
        scanf("%i", &pontos_turisticos2);
          getchar();

        // Calculando densidade populacional e pib per capita CARTA 2          
          densidade2 = (float) populacao2 / area2;
          pib_per_capita2 = (pib2 * 1000000000.0) / (float) populacao2;
       
        // calculando super poder CARTA 2
          superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 - densidade2;      



    // ÁREA PARA EXIBIÇÃO DOS DADOS
      // CARTA 1
        printf("\n\n");
        printf("~~~ CARTA 1 ~~~\n");
        printf("-> Estado - %c\n", estado1);
        printf("-> Código da carta - %c0%d\n", estado1, codigo_carta1);
        printf("-> Nome da cidade - %s\n", cidade1);
        printf("-> População de %i Habitantes\n", populacao1);
        printf("-> Área - %.2fKm²\n", area1);
        printf("-> PIB - %.2f Bilhões de Reais\n", pib1);
        printf("-> Número de pontos turísticos - %i\n", pontos_turisticos1);
        printf("-> Densidade populacional - %.2f hab/Km²\n", densidade1);
        printf("-> PIB per Capita - R$%.2f\n", pib_per_capita1);
        printf("-> SUPERPODER - %.2f", superpoder1);

        
      // CARTA 2
        printf("\n\n");
        printf("~~~ CARTA 2 ~~~\n");
        printf("-> Estado - %c\n", estado2);
        printf("-> Código da carta - %c0%d\n", estado2, codigo_carta2);
        printf("-> Nome da cidade - %s\n", cidade2);
        printf("-> População de %i Habitantes\n", populacao2);
        printf("-> Área - %.2fKm²\n", area2);
        printf("-> PIB - %.2f Bilhões de Reais\n", pib2);
        printf("-> Número de pontos turísticos - %i\n", pontos_turisticos2);
        printf("-> Densidade populacional - %.2f hab/Km²\n", densidade2);
        printf("-> PIB per Capita - R$%.2f\n", pib_per_capita2);
        printf("-> SUPERPODER - %.2f", superpoder2);
        printf("\n\n");

      // Teste de comparacao das cartas
      printf("População> ");  
      if(populacao1>populacao2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(populacao1==populacao2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("Area> ");  
      if(area1>area2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(area1==area2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("PIB> ");  
      if(pib1>pib2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(pib1==pib2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("Pontos Turisticos> ");  
      if(pontos_turisticos1>pontos_turisticos2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(pontos_turisticos1==pontos_turisticos2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("Densidade Populacional> ");  
      if(densidade1>densidade2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(densidade1==densidade2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("PIB per capita> ");  
      if(pib_per_capita1>pib_per_capita2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(pib_per_capita1==pib_per_capita2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");

      printf("SUPER PODER> ");  
      if(superpoder1>superpoder2)
        {
          printf("Carta 1 Vence!");
        }
        else
        {
          if(superpoder1==superpoder2) printf("Empata!");
          else printf("Carta 2 Vence!");
        } printf("\n");
        
return 0;
} 
