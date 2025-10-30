#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desenvolvendo a Lógica do Jogo

int main() {
    // Declarando as variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    int atributo1;
    float valorA1_carta1;
    float valorA2_carta1;
    float somaCarta1;

    // Declarando as variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    int atributo2;
    float valorA1_carta2;
    float valorA2_carta2;
    float somaCarta2;

    // Cadastro das Cartas:
    // Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Digite o Estado: ");
    // printf imprime a mensagem pedindo a informação
    scanf("%c", &estado1);
    // scanf lê a entrada e armazena na variável

    printf("Digite o Código da Carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex.: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Declarando as váriaveis para a densidade populacional e pib per capita para carta 1
    // Cálculos
    float densiPopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    /* Multiplicando o PIB por 1.000.000.000 pois o valor digitado pelo usuário
    está em bilhões de reais. Para calcular o PIB per capita corretamente
    converti o valor para reais antes de dividir pela população. */

    // Declarando as váriaveis para a densidade populacional e pib per capita para carta 2
    // Cálculos
     float densiPopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Declarando e calculando a variável Super Poder para as cartas 1 e 2
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densiPopulacional1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densiPopulacional2);

    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada carta, um por linha, utilizando o printf
    // Carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reias\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Carta 2
    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reias\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Exibindo o menu de atributos
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Validando a escolha do atributo
    if (atributo1 < 1 || atributo1 > 6)
    {
        printf("Opção inválida!\n");
        return 1;
    }

    // Menu para o segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++)
    {
        if (i != atributo1)
        {
            switch (i)
            {
                case 1:
                    printf("1 - População\n");
                    break;
                case 2:
                    printf("2 - Área\n");
                    break;
                case 3:
                    printf("3 - PIB\n");
                    break;
                case 4:
                    printf("4 - Número de Pontos Turísticos\n");
                    break;
                case 5:
                    printf("5 - Densidade Populacional\n");
                    break;
                case 6:
                    printf("6 - PIB per Capita\n");
                    break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1)
    { 
        printf("Opção inválida!\n");
        return 1;
    }

    // Atribuindo os valores dos atributos escolhidos
    switch (atributo1)
    {
        case 1:
            valorA1_carta1 = populacao1;
            valorA1_carta2 = populacao2;
        break;
        case 2:
            valorA1_carta1 = area1;
            valorA1_carta2 = area2;
        break;
        case 3:
            valorA1_carta1 = pib1;
            valorA1_carta2 = pib2;
        break;
        case 4:
            valorA1_carta1 = pontosTuristicos1;
            valorA1_carta2 = pontosTuristicos2;
        break;
        case 5:
            valorA1_carta1 = densiPopulacional1;
            valorA1_carta2 = densiPopulacional2;
        break;
        case 6:
            valorA1_carta1 = pibPerCapita1;
            valorA1_carta2 = pibPerCapita2;
        break;
    default:
        printf("Erro ao escolher o primeiro atributo!\n");
        return 1;
    }

    switch (atributo2)
    {
        case 1:
            valorA2_carta1 = populacao1;
            valorA2_carta2 = populacao2;
        break;
        case 2:
            valorA2_carta1 = area1;
            valorA2_carta2 = area2;
        break;
        case 3:
            valorA2_carta1 = pib1;
            valorA2_carta2 = pib2;
        break;
        case 4:
            valorA2_carta1 = pontosTuristicos1;
            valorA2_carta2 = pontosTuristicos2;
        break;
        case 5:
            valorA2_carta1 = densiPopulacional1;
            valorA2_carta2 = densiPopulacional2;
        break;
        case 6:
            valorA2_carta1 = pibPerCapita1;
            valorA2_carta2 = pibPerCapita2;
        break;
        default:
            printf("Erro ao escolher o segundo atributo!\n");
            return 1;
    }

    // Exibindo os valores
    printf("\nComparação entre:\n%s (Carta 1) x %s (Carta 2)\n", nomeCidade1, nomeCidade2);

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nomeCidade1, valorA1_carta1);
    printf("%s: %.2f\n", nomeCidade2, valorA1_carta2);

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nomeCidade1, valorA2_carta1);
    printf("%s: %.2f\n", nomeCidade2, valorA2_carta2);

    // Ajuste de comparação para densidade populacional 
    float comparacao1 = (atributo1 == 5) ? -valorA1_carta1 : valorA1_carta1;
    float comparacao2 = (atributo1 == 5) ? -valorA1_carta2 : valorA1_carta2;

    float comparacao3 = (atributo2 == 5) ? -valorA2_carta1 : valorA2_carta1;
    float comparacao4 = (atributo2 == 5) ? -valorA2_carta2 : valorA2_carta2;

    // Soma para decisão final
    somaCarta1 = comparacao1 + comparacao3;
    somaCarta2 = comparacao2 + comparacao4;

    printf("\nSoma dos valores:\n");
    printf("%s: %.2f\n", nomeCidade1, somaCarta1);
    printf("%s: %.2f\n", nomeCidade2, somaCarta2);

    if (somaCarta1 > somaCarta2)
    {
        printf("\nResultado: %s é a vencedora!\n", nomeCidade1);
    }
    else if (somaCarta2 > somaCarta1)
    {
        printf("\nResultado: %s é a vencedora!\n", nomeCidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}