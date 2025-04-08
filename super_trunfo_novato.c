//incluir biblioteca
#include <stdio.h>
//incluir a função principal
int main() {
//declarar variáveis
    int populacao1, populacao2, pontoturistico1, pontoturistico2;
    char estado1, estado2;
    char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
    float area1, area2, pib1, pib2;
//printar pergunta; interagir com usuário
//captar o dado prenchido pelo usuário e armazenar em uma variável
    printf("Digite a letra do código do Estado 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o nº de pontos turísticos da cidade: ");
    scanf(" %d", &pontoturistico1);
     
    printf("Digite a letra do código do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o nº de pontos turísticos da cidade: \n");
    scanf(" %d", &pontoturistico2);
// imprimir as informações das cartas preenchidas pelo usuário;
    printf("\n CARTA_1 \n ESTADO: %c \n CÓDIGO DO ESTADO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %d \n", estado1, codigo1, cidade1, populacao1);
    printf(" ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n Nº PONTOS TURÍSTICOS: %d \n", area1, pib1, pontoturistico1);

    printf("\n CARTA_2 \n ESTADO: %c \n CÓDIGO DO ESTADO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %d \n", estado2, codigo2, cidade2, populacao2);
    printf("\n ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n Nº PONTOS TURÍSTICOS: %d \n", area2, pib2, pontoturistico2);
//finalizar a finção principal
    return 0;


}
