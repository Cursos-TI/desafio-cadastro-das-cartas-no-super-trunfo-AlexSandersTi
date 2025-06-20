#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;/*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    char codigo1[4];
    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    char nome1[50];/*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    int populacao1;/*População: O número de habitantes da cidade. Tipo: int*/
    float area1;/*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    float pib1;/*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    int pontos1;/*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/

    // Declaração das variáveis para a Carta 2
    char estado2;/*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    char codigo2[4];
    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    char nome2[50];/*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    int populacao2;/*População: O número de habitantes da cidade. Tipo: int*/
    float area2;/*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    float pib2;/*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    int pontos2;/*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    /*O getchar() aqui serve para remover um único caractere (o \n que sobrou), preparando o caminho para o fgets() ler a próxima entrada corretamente.*/
    printf("Informe o Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado2);

    /*O getchar() aqui serve para remover um único caractere (o \n que sobrou), preparando o caminho para o fgets() ler a próxima entrada corretamente.*/
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);
    printf("Informe o Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos1);

    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
