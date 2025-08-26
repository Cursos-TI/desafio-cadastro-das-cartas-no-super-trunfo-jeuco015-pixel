#include <stdio.h>

int main() {
    int pontos_turisticos;
    float area, pib, populacao;
    char estado[3];
    char cidade[10];
    char codigo[25];

    printf("Digite a sigla do estado:\n ");
    scanf("%2s", estado);

    printf("Digite o código da cidade:\n ");
    scanf("%24s", codigo);

    printf("Digite o nome da cidade:\n ");
    scanf("%9s", cidade);

    printf("Digite a população:\n ");
    scanf("%f", &populacao);

    printf("Digite a área (km²):\n ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais):\n ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &pontos_turisticos); 

    printf("\n===== CARTA====== \n");
    printf("Seu estado é: %s\n", estado);
    printf("Seu código é: %s\n", codigo);
    printf("Nome da sua cidade é: %s\n", cidade);
    printf("Sua População é: %.0f\n", populacao);
    printf("Sua área é: %.2f km²\n", area);
    printf("Seu PIB é: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
