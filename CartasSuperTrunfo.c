#include <stdio.h>

int main(){

// Declarando variáveis

    char estado1[30], estado2[30], codigo1[30], codigo2[30], cidade1 [30], cidade2[30];
    int populacao1, populacao2, ptsturisticos1, ptsturisticos2;
    float area1, area2, pib1, pib2;

    //Entrada e saida de dados:

    printf("*** BEM VINDO AO JOGO SUPER TRUNFO! ***\n");
    printf("Para começar insira os dados da primeira carta. \n");

    printf("Insira  estado \n");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade \n");
    scanf(" %[^\n]", &cidade1); // método para não dar erro ao utilizar um espaço no nome da cidade

    printf("Insira o número de habitantes da cidade \n");
    scanf(" %d", &populacao1);

    printf("Insira a área da cidade em quilômetros quadrados\n");
    scanf("%f", &area1);
    
    printf("Insira o Produto Interno Bruto da cidade \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos na cidade\n");
    scanf("%d", &ptsturisticos1);

    printf("\n\n");

    printf("Agora insira os dados da segunda carta. \n");

    printf("Insira  estado \n");
    scanf("%s", &estado2);

    printf("Insira o codigo da carta \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade \n");
    scanf(" %[^\n]", cidade2);

    printf("Insira o número de habitantes da cidade \n");
    scanf(" %d", &populacao2);

    printf("Insira a área da cidade em quilômetros quadrados\n");
    scanf("%f", &area2);
    
    printf("Insira o Produto Interno Bruto da cidade \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos na cidade\n");
    scanf("%d", &ptsturisticos2);

    printf("\n\n"); // Pular linhas para organização do codigo

    // impressão dos resultados na tela

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", ptsturisticos1);

    printf("\n\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", ptsturisticos2);



    return 0;


}
