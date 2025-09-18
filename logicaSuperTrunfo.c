#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Mestre: além do cadastro das cartas, será feita a comparação entre elas
// utilizando estruturas de decisão (if/else).

int main() {
    // ========================
    // Definição das variáveis
    // ========================
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ========================
    // Entrada de dados (Carta 1)
    // ========================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ========================
    // Entrada de dados (Carta 2)
    // ========================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ========================
    // Comparação das Cartas
    // ========================
    printf("\n===== RESULTADOS DAS COMPARAÇÕES =====\n");

    // População
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu em População.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu em População.\n", cidade2);
    } else {
        printf("Empate em População.\n");
    }

    // Área
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu em Área.\n", cidade1);
    } else if (area2 > area1) {
        printf("Carta 2 (%s) venceu em Área.\n", cidade2);
    } else {
        printf("Empate em Área.\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu em PIB.\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) venceu em PIB.\n", cidade2);
    } else {
        printf("Empate em PIB.\n");
    }

    // Pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) venceu em Pontos Turísticos.\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 (%s) venceu em Pontos Turísticos.\n", cidade2);
    } else {
        printf("Empate em Pontos Turísticos.\n");
    }

    return 0;
}
