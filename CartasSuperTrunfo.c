#include <stdio.h>

int main() {
    // Definindo as variáveis para a carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Definindo as variáveis para a carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;


    
    // Coletando dados para a primeira carta

    printf("Digite o estado (A-H) da carta 1:\n");
    scanf(" %c", &estado1);  
   
    printf("Digite o código da carta 1 (ex: A01):\n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", &cidade1);  
    
    printf("Digite a população da cidade 1(em milhoes):\n");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²) da cidade 1:\n");
    scanf("%f", &area1);
    
    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o PIB (em bilhões de reais) da cidade 1:\n");
    scanf("%f", &pib1);





     // Coletando dados para a segunda carta
     printf("\nDigite o estado (A-H) da carta 2:\n");
     scanf("%c", &estado2); 
     
     printf("Digite o código da carta 2 (ex: B02):\n");
     scanf("%s", &codigo2);
     
     printf("Digite o nome da cidade 2:\n");
     scanf("%s", &cidade2);  
    
     printf("Digite a população da cidade 2:\n");
     scanf("%d", &populacao2);
     
     printf("Digite a área (em km²) da cidade 2:\n");
     scanf("%f", &area2);
    
     printf("Digite o número de pontos turísticos da cidade 2:\n");
     scanf("%d", &pontosTuristicos2);

     printf("Digite o PIB (em bilhões de reais) da cidade 2:\n");
     scanf("%f", &pib2);
 


    // Exibindo os dados da primeira carta

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d  milhoes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("PIB: %f bilhões de reais\n", pib1);
    
     // Exibindo os dados da segunda carta

     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d milhoes\n", populacao2);
     printf("Área: %f km²\n", area2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("PIB: %f bilhões de reais\n", pib2);

    return 0;
}