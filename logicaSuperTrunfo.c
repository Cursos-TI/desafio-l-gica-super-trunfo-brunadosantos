#include <stdio.h>
#include <string.h> // possibilita utilizar a função strcspn na retirada do caractere de nova linha (\n) em fgets.

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
    char pais1[30] = "Brasil", pais2[30] = "Portugal";
    char estado1[20] = "SP", estado2[20] = "LX";
    char codigo1[20] = "A01", codigo2[20] = "B02";
    char cidade1[30] = "SãoPaulo", cidade2[30] = "Lisboa";
    
    int populacao1 = 11450, populacao2 = 545142;
    int ponto_turisticoCarta1 = 19, ponto_turisticoCarta2 = 16;
    int numeroAtributo;

    float areaCarta1 = 1521.202, areaCarta2 = 100.05;
    float pibCarta1 = 828.900, pibCarta2 = 87.368;
    float densidade_populacionalCarta1; 
    float densidade_populacionalCarta2;
    float pib_per_capitaCarta1;
    float pib_per_capitaCarta2;


int main() {

    // CÁLCULO DENSIDADE POPULACIONAL E PIB PER CAPITA
    // Densidade populacional => calcula a quantidade de habitantes por km²
    // PIB per capita => Calcula a renda média por pessoa em uma região.
    // populacao1 e populacao2 utiliza casting (float) para realizar a conversão explicita das variáveis populacao.

    densidade_populacionalCarta1 = (float) populacao1 / areaCarta1;
    pib_per_capitaCarta1 = (float) populacao1 / pibCarta1;

    densidade_populacionalCarta2 = (float) populacao2 / areaCarta2;
    pib_per_capitaCarta2 = (float) populacao2 / pibCarta2;

    // MENU INTERATIVO
    // Permite o usuário selecionar o atributo para comparação das cartas

    printf("----- MENU INTERATIVO -----\n");
    printf("Selecione uma das opções abaixo.\n");
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    printf("Qual atributo voce deseja comparar?\n");
    printf("1. População\n");    
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("------------------------------\n");
    printf("Digite o número do atributo que deseja comparar: ");
    scanf("%d", &numeroAtributo); // armazena o valor digitado pelo usuário

    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    // EXIBIÇÃO DA COMPARAÇÃO DAS CARTAS
    // switch => permite exibir a comparação de acordo com a opção escolhida pelo usuário
    // default => exibe uma mensagem de erro caso não seja digitado um valor válido.
    // if => realiza a comparação entre carta 1 e carta 2 de acordo com os atributos de cada carta.
    // if else => permite comparar mais de uma possibilidade
    // else => permite exibir "EMPATE" caso nenhuma comparação esteja correta.
    /* Exemplo de exibição do resultado
        
       ----- População -----
       Carta 1 - Brasil, São Paulo (SP): 12.300.000
       Carta 2 - Brasil, Rio de Janeiro (RJ): 6.000.000
       Resultado: Carta 1 (São Paulo) venceu!
       
    */

    switch (numeroAtributo) 
    {
    case 1:
        // EXIBIÇÃO DA COMPARAÇÃO - POPULAÇÃO

        printf("----- População -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, populacao1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, populacao2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - POPULAÇÃO
        // Compara se a população da carta 1 é maior que a população da carta 2

        if (populacao1 > populacao2){
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (populacao1 < populacao2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate!\n");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    case 2:
        // EXIBIÇÃO DA COMPARAÇÃO - ÁREA

        printf("----- Área -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        printf("Carta 1 - %s, %s (%s): %.2f km²\n", pais1, cidade1, estado1, areaCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f km²\n", pais2, cidade2, estado2, areaCarta2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - ÁREA
        // Compara se a área da carta 1 é maior que a área da carta 2

        if (areaCarta1 > areaCarta2){ 
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (areaCarta1 < areaCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("Houve um empate!\n");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    case 3:
        // EXIBIÇÃO DA COMPARAÇÃO - PIB

        printf("----- PIB -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pibCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pibCarta2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - PIB
        // Compara se o PIB da carta 1 é maior que o PIB da carta 2

        if (pibCarta1 > pibCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pibCarta1 < pibCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate!\n");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    case 4:
        // EXIBIÇÃO DA COMPARAÇÃO - PONTO TURISTICO

        printf("----- Ponto Turístico -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, ponto_turisticoCarta1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, ponto_turisticoCarta2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - PONTO TURISTICO
        // Compara se o ponto turistico da carta 1 é maior que o ponto turistico da carta 2

        if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(ponto_turisticoCarta1 < ponto_turisticoCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("Houve um empate!\n");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    case 5:
        // EXIBIÇÃO DA COMPARAÇÃO - DENSIDADE POPULACIONAL

        printf("----- Densidade Populacional -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        /* Exemplo: 

            Carta 1 - São Paulo (SP): 12.300.000
            Carta 2 - Rio de Janeiro (RJ): 6.000.000
            Resultado: Carta 1 (São Paulo) venceu!
        */

        printf("Carta 1 - %s, %s (%s): %.2f hab/km²\n", pais1, cidade1, estado1, densidade_populacionalCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f hab/km²\n", pais2, cidade2, estado2, densidade_populacionalCarta2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - DENSIDADE POPULACIONAL
        // Compara se a densidade populacional da carta 1 é menor que a densidade populacional da carta 2

        if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(densidade_populacionalCarta1 > densidade_populacionalCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate!\n");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    case 6:
        // EXIBIÇÃO DA COMPARAÇÃO - PIB PER CAPITA

        printf("----- PIB per capita -----\n"); // Cabeçalho, ajuda na visualização no terminal
        printf("\n"); // pula uma linha, ajuda na visualização no terminal

        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pib_per_capitaCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pib_per_capitaCarta2);
        printf("Resultado: ");

        // COMPARAÇÃO DAS CARTAS - PIB PER CAPITA
        // Compara se o PIB per capita da carta 1 é maior que o PIB per capita da carta 2

        if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pib_per_capitaCarta1 < pib_per_capitaCarta2){
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate!");
        }

        printf("\n"); // pula uma linha, ajuda na visualização no terminal
        break;
    default:
        printf("Opção inválida! Tente novamente.");
        break;
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    return 0;
}