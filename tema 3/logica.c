#include <stdio.h>

int main() {
    
    char codigoA[10], nomeA[50];
    char codigoB[10], nomeB[50];

    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;

    
    printf("=== Cadastro da Carta A ===\n");
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigoA);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeA);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoA);

    printf("Digite a area (km²): ");
    scanf("%f", &areaA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

   
    printf("\n=== Cadastro da Carta B ===\n");
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigoB);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeB);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoB);

    printf("Digite a area (km²): ");
    scanf("%f", &areaB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    // Comparação de População
    printf("\n=== Comparacao de Populacao ===\n");
    if (populacaoA > populacaoB) {
        printf("Vencedora: %s\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("Vencedora: %s\n", nomeB);
    } else {
        printf("Empate!\n");
    }

    /
    printf("\n=== Comparacao de Area ===\n");
    if (areaA > areaB) {
        printf("Vencedora: %s\n", nomeA);
    } else if (areaB > areaA) {
        printf("Vencedora: %s\n", nomeB);
    } else {
        printf("Empate!\n");
    }

    
    printf("\n=== Comparacao de PIB ===\n");
    if (pibA > pibB) {
        printf("Vencedora: %s\n", nomeA);
    } else if (pibB > pibA) {
        printf("Vencedora: %s\n", nomeB);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
