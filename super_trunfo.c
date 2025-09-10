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

   int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // ====== MENU 1 ======
    printf("===== SUPER TRUNFO - Nivel Mestre =====\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // ====== MENU 2 DINÂMICO ======
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    // ====== FUNÇÃO DE COMPARAÇÃO COM SWITCH ======
    for (int rodada = 1; rodada <= 2; rodada++) {
        int escolha = (rodada == 1) ? opcao1 : opcao2;

        switch (escolha) {
            case 1: // População
                printf("\nComparando Populacao:\n");
                printf("%s: %d | %s: %d\n", nomePais1, populacao1, nomePais2, populacao2);
                (rodada == 1) ? (valor1_c1 = populacao1, valor1_c2 = populacao2) 
                              : (valor2_c1 = populacao1, valor2_c2 = populacao2);
                break;

            case 2: // Área
                printf("\nComparando Area:\n");
                printf("%s: %.2f km² | %s: %.2f km²\n", nomePais1, area1, nomePais2, area2);
                (rodada == 1) ? (valor1_c1 = area1, valor1_c2 = area2) 
                              : (valor2_c1 = area1, valor2_c2 = area2);
                break;

            case 3: // PIB
                printf("\nComparando PIB:\n");
                printf("%s: %.2f bi | %s: %.2f bi\n", nomePais1, pib1, nomePais2, pib2);
                (rodada == 1) ? (valor1_c1 = pib1, valor1_c2 = pib2) 
                              : (valor2_c1 = pib1, valor2_c2 = pib2);
                break;

            case 4: // Pontos turísticos
                printf("\nComparando Pontos Turisticos:\n");
                printf("%s: %d | %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                (rodada == 1) ? (valor1_c1 = pontosTuristicos1, valor1_c2 = pontosTuristicos2) 
                              : (valor2_c1 = pontosTuristicos1, valor2_c2 = pontosTuristicos2);
                break;

            case 5: // Densidade demográfica (inverte a lógica)
                printf("\nComparando Densidade Demografica:\n");
                printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomePais1, densidade1, nomePais2, densidade2);
                (rodada == 1) ? (valor1_c1 = -densidade1, valor1_c2 = -densidade2) 
                              : (valor2_c1 = -densidade1, valor2_c2 = -densidade2);
                break;

            default:
                printf("Opcao invalida!\n");
                return 0;
        }
    }

    // ====== SOMA DOS ATRIBUTOS ======
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s: %.2f (soma dos atributos)\n", nomePais1, soma1);
    printf("%s: %.2f (soma dos atributos)\n", nomePais2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s!\n", nomePais2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}


