#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas (simulação já cadastrada para simplificação)
    char nomePais1[50] = "Brasil";
    int populacao1 = 514103590;
    float area1 = 8515767.0;
    float pib1 = 2200.0; // em bilhões
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    char nomePais2[50] = "Chile";
    int populacao2 = 36598500;
    float area2 = 2780400.0;
    float pib2 = 300.0; // em bilhões
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Comparacao de Cartas ===\n");
    printf("Carta 1: %s\n", nomePais1);
    printf("Carta 2: %s\n\n", nomePais2);

    switch (opcao) {
        case 1: // População
            printf("Comparando Populacao:\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Area:\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes de reais\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes de reais\n", nomePais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida!)
            printf("Comparando Densidade Demografica:\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade)\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade)\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}


