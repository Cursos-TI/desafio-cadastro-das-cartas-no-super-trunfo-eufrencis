#include <stdio.h>

int main() {
  
    char estado1[15], estado2[15];
    char codigo1[15], codigo2[15];
    char cidade1 [15], cidade2[15];
    int populacao1, populacao2, ptsturisticos1, ptsturisticos2;
    float area1, area2, pib1, pib2;

    printf("*** BEM VINDO AO JOGO SUPER TRUNFO! ***\n");
    printf("Para começar insira os dados da primeira carta. \n");

    printf("Insira  estado \n");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade \n");
    scanf("%s[^\n]", &cidade1);

    printf("Insira o número de habitantes da cidade \n");
    scanf("%d", &populacao1);

    printf("Insira a área da cidade em quilômetros quadrados\n");
    scanf("%f", &area1);
    
    printf("Insira o Produto Interno Bruto da cidade \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos na cidade\n");
    scanf("%d", &ptsturisticos1);

    



    printf("Dados da primeira carta: \n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", ptsturisticos1);
    





    return 0;
}
