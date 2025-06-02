#include <stdio.h>
#include <string.h> // possibilita utilizar a função strcspn na retirada do caractere de nova linha (\n) em fgets.

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
    char estado1[30], estado2[30];
    char codigo1[30], codigo2[30];
    char cidade1[30], cidade2[30];

    int populacao1, populacao2;
    int ponto_turisticoCarta1, ponto_turisticoCarta2;

    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    float densidade_populacionalCarta1, densidade_populacionalCarta2;
    float pib_per_capitaCarta1, pib_per_capitaCarta2;
    float inversoDensidadeCarta1, inversoDensidadeCarta2;

// Declaração de funções
int cadastroCartas();
int exibicaoPopulacao();
int exibicaoArea();
int exibicaoPib();
int exibicaoPontoTuristico();
int exibicaoDensidadePopulacional();
int exibicaoPibPerCapita();

int main() {
    
    // CHAMADA DA FUNÇÃO - CADASTRO CARTAS

    /* Exemplo:

        printf("Digite o código da cidade: ");
        scanf("%s", codigo); 
    */
    printf("----- CADASTRO CARTAS -----\n"); // Cabeçalho, ajuda na visualização no terminal 
    printf("\n");
    
    cadastroCartas();

   // EXIBIÇÃO DA COMPARAÇÃO DAS CARTAS

   /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */
    
    printf("----- EXIBIÇÃO COMPARAÇÃO -----\n"); // Cabeçalho, ajuda na visualização no terminal   
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    // CHAMADA DAS FUNÇÕES DE COMPARAÇÃO DAS CARTAS

    /* Exemplo:
    
        if (populacaoA > populacaoB) {
            printf("Cidade 1 tem maior população.\n");
        } else {
            printf("Cidade 2 tem maior população.\n");
        } 
    */

    exibicaoPopulacao();
    exibicaoArea();
    exibicaoPib();
    exibicaoPontoTuristico();
    exibicaoDensidadePopulacional();
    exibicaoPibPerCapita();

    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    return 0;
}

// Definição das funções
int cadastroCartas() {
    // CADASTRO CARTAS

    // printf -> Solicita ao usuário que insira os dados necessários. Exemplo: "estado, cidade, população..."
    // scanf -> Le e armazena os dados em memória.
    // fgets -> Permite ler strings com espaços em branco. Exemplo:"Minas Gerais, São Paulo...". 
    // strcspn -> Remove o caractere de nova linha (\n) que fgets pode incluir na string.
    // fgetc -> Evita problemas de buffer do scanf consumindo o caractere de nova linha (\n).

    printf("----- Cadastro Carta 1 -----\n"); // Cabeçalho, ajuda na visualização no terminal

    printf("Digite o estado: ");
    fgets(estado1, 30, stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    fgetc(stdin);

    printf("Digite o código da cidade: ");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a o total da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCarta1);

    printf("Digite o total de ponto turistico: ");
    scanf("%d", &ponto_turisticoCarta1);
    fgetc(stdin);

    // Calcula a quantidade de habitantes por km²
    // Calcula a renda média por pessoa em uma região.
    // utiliza casting (float) para realizar a conversão explicita da variável populacao

    densidade_populacionalCarta1 = (float) populacao1 / areaCarta1;
    pib_per_capitaCarta1 = (float) populacao1 / pibCarta1;

    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    // printf -> Solicita ao usuário que insira os dados necessários. Exemplo: "estado, cidade, população..."
    // scanf -> Le e armazena os dados em memória.
    // fgets -> Permite ler strings com espaços em branco. Exemplo:"Minas Gerais, São Paulo...". 
    // strcspn -> Remove o caractere de nova linha (\n) que fgets pode incluir na string.
    // fgetc -> Evita problemas de buffer do scanf consumindo o caractere de nova linha (\n).

    printf("----- Cadastro Carta 2 -----\n"); // Cabeçalho, ajuda na visualização no terminal

    printf("Digite o estado: ");
    fgets(estado2, 30, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    fgetc(stdin);

    printf("Digite o código da cidade: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a o total da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCarta2);

    printf("Digite o total de ponto turistico: ");
    scanf("%d", &ponto_turisticoCarta2);
    fgetc(stdin);

    // Calcula a quantidade de habitantes por km²
    // Calcula a renda média por pessoa em uma região.
    // utiliza casting (float) para realizar a conversão explicita da variável populacao

    densidade_populacionalCarta2 = (float) populacao2 / areaCarta2;
    pib_per_capitaCarta2 = (float) populacao2 / pibCarta2;

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

// FUNÇÕES DE COMPARAÇÃO DAS CARTAS

int exibicaoPopulacao() {
    // EXIBIÇÃO DA COMPARAÇÃO - POPULAÇÃO

    printf("----- População -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - POPULAÇÃO
    // Compara se a população da carta 1 é maior que a população da carta 2
    if (populacao1 > populacao2){
        printf("Carta 1 (%s) Venceu!\n", cidade1); 
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2);
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

int exibicaoArea() {
    // EXIBIÇÃO DA COMPARAÇÃO - ÁREA

    printf("----- Área -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, areaCarta1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, areaCarta2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - ÁREA
    // Compara se a área da carta 1 é maior que a área da carta 2
    if (areaCarta1 > areaCarta2){ 
        printf("Carta 1 (%s) Venceu!\n", cidade1); 
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2); 
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

int exibicaoPib() {
    // EXIBIÇÃO DA COMPARAÇÃO - PIB

    printf("----- PIB -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", cidade1, estado1, pibCarta1);
    printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", cidade2, estado2, pibCarta2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - PIB
    // Compara se o PIB da carta 1 é maior que o PIB da carta 2
    if (pibCarta1 > pibCarta2){
        printf("Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2);
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

int exibicaoPontoTuristico() {
    // EXIBIÇÃO DA COMPARAÇÃO - PONTO TURISTICO

    printf("----- Ponto Turístico -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, ponto_turisticoCarta1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, ponto_turisticoCarta2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - PONTO TURISTICO
    // Compara se o ponto turistico da carta 1 é maior que o ponto turistico da carta 2
    if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
        printf("Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2); 
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

int exibicaoDensidadePopulacional() {
    // EXIBIÇÃO DA COMPARAÇÃO - DENSIDADE POPULACIONAL

    printf("----- Densidade Populacional -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade_populacionalCarta1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade_populacionalCarta2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - DENSIDADE POPULACIONAL
    // Compara se a densidade populacional da carta 1 é menor que a densidade populacional da carta 2
    if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
        printf("Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2);
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}

int exibicaoPibPerCapita() {
    // EXIBIÇÃO DA COMPARAÇÃO - PIB PER CAPITA

    printf("----- PIB per capita -----\n"); // Cabeçalho, ajuda na visualização no terminal
    printf("\n"); // pula uma linha, ajuda na visualização no terminal

    /* Exemplo: 

        Carta 1 - São Paulo (SP): 12.300.000
        Carta 2 - Rio de Janeiro (RJ): 6.000.000
        Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", cidade1, estado1, pib_per_capitaCarta1);
    printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", cidade2, estado2, pib_per_capitaCarta2);
    printf("Resultado: ");

    // COMPARAÇÃO DAS CARTAS - PIB PER CAPITA
    // Compara se o PIB per capita da carta 1 é maior que o PIB per capita da carta 2
    if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
        printf("Carta 1 (%s) Venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) Venceu!\n", cidade2);
    }

    printf("\n"); // pula uma linha, ajuda na visualização no terminal
}