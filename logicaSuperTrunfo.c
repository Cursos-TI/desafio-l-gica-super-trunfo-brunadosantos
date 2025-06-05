#include <stdlib.h>
#include <stdio.h>

int main() {
    // Definição de variáveis
    char pais1[30] = "Brasil", pais2[30] = "Portugal";
    char estado1[20] = "SP", estado2[20] = "LX";
    char codigo1[20] = "A01", codigo2[20] = "B02";
    char cidade1[30] = "SãoPaulo", cidade2[30] = "Lisboa";
    
    int populacaoCarta1 = 11450, populacaoCarta2 = 545142;
    int ponto_turisticoCarta1 = 19, ponto_turisticoCarta2 = 16;

    float areaCarta1 = 1521.202, areaCarta2 = 100.05;
    float pibCarta1 = 828.900, pibCarta2 = 87.368;
    float densidade_populacionalCarta1; 
    float densidade_populacionalCarta2;
    float pib_per_capitaCarta1;
    float pib_per_capitaCarta2;

    int opcao1, opcao2;
    int resultado1, resultado2;
    int inversoDensidadeCarta1, inversoDensidadeCarta2;
    int superPoderCarta1, superPoderCarta2;

    // Cálculo densidade populacional e pib per capita Carta 1 e Carta 2
    densidade_populacionalCarta1 = (float) populacaoCarta1 / areaCarta1;
    pib_per_capitaCarta1 = (float) populacaoCarta1 / pibCarta1;
    
    densidade_populacionalCarta2 = (float) populacaoCarta2 / areaCarta2;
    pib_per_capitaCarta2 = (float) populacaoCarta2 / pibCarta2;

    // cálculo super poder e inverso da densidade populacional Carta 1 e Carta 2
    inversoDensidadeCarta1 = 1 / densidade_populacionalCarta1;
    inversoDensidadeCarta2 = 1 / densidade_populacionalCarta2;
    
    superPoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + ponto_turisticoCarta1 + pib_per_capitaCarta1 + inversoDensidadeCarta1;
    superPoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + ponto_turisticoCarta2 + pib_per_capitaCarta2 + inversoDensidadeCarta2;

    // Menu interativo 1
    // Banner do menu interativo
    printf("===========================================\n");
    printf("----- Bem vindo ao jogo Super Trunfo! -----\n");
    printf("------------- Vamos começar! --------------\n");
    printf("===========================================\n");
    printf("\n");

    printf("------------ Primeiro Atributo ------------\n");
    printf("\n");
    // Exibição das opções do menu interativo 1
    printf("Escolha um dos atributos abaixo para comparação.\n");
    printf("\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("\n");
    // Inserção de dados do menu interativo 1
    printf("Digite o número do atributo que deseja comparar: ");
    scanf("%d", &opcao1);

    printf("\n");
    
    // Switch para comparação de atributos do menu interativo 1
    switch (opcao1)
    {
    case 1: // Comparação do atributo população
        // Mostra o atributo escolhido pelo usuário
        printf("===========================================\n");
        printf("--------- Voce escolheu População ---------\n");
        printf("===========================================\n");
        resultado1 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
        
        //Exibe os dados das cartas
        printf("\n");
        printf("------ Exibição dos dados das cartas ------\n");
        
        printf("\n");
        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, populacaoCarta1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, populacaoCarta2);

         //Exibe o resultado da comparação entre atributos
        printf("\n");
        printf("Resultado: ");
        
        if (populacaoCarta1 > populacaoCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (populacaoCarta1 < populacaoCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 2: // Comparação do atributo área
        printf("===========================================\n");
        printf("------------ Você escolheu Área -----------\n");
        printf("===========================================\n");
        resultado1 = areaCarta1 > areaCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("------ Exibição dos dados das cartas -------\n");

        printf("\n");
        printf("Carta 1 - %s, %s (%s): %.2f km²\n", pais1, cidade1, estado1, areaCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f km²\n", pais2, cidade2, estado2, areaCarta2);
        
        printf("\n");
        printf("Resultado: ");
        
        if (areaCarta1 > areaCarta2){ 
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (areaCarta1 < areaCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 3: // Comparação do atributo pib
        printf("===========================================\n");
        printf("------------- Você escolheu PIB -----------\n");
        printf("===========================================\n");
        resultado1 = pibCarta1 > pibCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("------ Exibição dos dados das cartas -------\n");

        printf("\n");
        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pibCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pibCarta2);

        printf("\n");
        printf("Resultado: ");
        
        if (pibCarta1 > pibCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pibCarta1 < pibCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 4: // Comparação do atributo ponto turistíco
        printf("===========================================\n");
        printf("------ Você escolheu Ponto Turistíco ------\n");
        printf("===========================================\n");
        resultado1 = ponto_turisticoCarta1 > ponto_turisticoCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("------- Exibição dos dados das cartas ------\n");

        printf("\n");
        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, ponto_turisticoCarta1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, ponto_turisticoCarta2);

        printf("\n");
        printf("Resultado: ");
        
        if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(ponto_turisticoCarta1 < ponto_turisticoCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 5: // Comparação do atributo densidade populacional
        printf("================================================\n");
        printf("----- Você escolheu Densidade Populacional -----\n");
        printf("================================================\n");
        resultado1 = densidade_populacionalCarta1 < densidade_populacionalCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("------ Exibição dos dados das cartas ------\n");

        printf("\n");
        printf("Carta 1 - %s, %s (%s): %.2f hab/km²\n", pais1, cidade1, estado1, densidade_populacionalCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f hab/km²\n", pais2, cidade2, estado2, densidade_populacionalCarta2);

        printf("\n");
        printf("Resultado: ");
        
        if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(densidade_populacionalCarta1 > densidade_populacionalCarta2) {
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 6: // Comparação do atributo pib per capita
        printf("================================================\n");
        printf("--------- Você escolheu PIB per capita ---------\n");
        printf("================================================\n");    
        resultado1 = pib_per_capitaCarta1 > pib_per_capitaCarta2 ? 1 : 0;
                    
        printf("\n");
        printf("------- Exibição dos dados das cartas ------\n");

        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pib_per_capitaCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pib_per_capitaCarta2);

        printf("\n");
        printf("Resultado: ");

        if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pib_per_capitaCarta1 < pib_per_capitaCarta2){
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    default:
        printf("Opção Inválida! Tente novamente.");
        exit(0); //interrompe o código caso nenhuma opção esteja correta.
        break;
    }

    // Menu interativo 2
    printf("\n");
    printf("===========================================\n");
    printf("\n");

    printf("------------- Segundo Atributo ------------\n");
    printf("\n");
    // Exibição das opções do menu interativo 2
    printf("Escolha um dos atributos abaixo para comparação.\n");
    printf("\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("\n");
    // Inserção de dados do menu interativo 2
    printf("Digite o número do atributo que deseja comparar: ");
    scanf("%d", &opcao2);

    printf("\n");
    // Impede que o usuário insira o mesmo atributo 2 vezes e encerra o jogo.
    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo! Tente novamente.\n");
    } else {
        // Switch para comparação de atributos do menu interativo 2
        switch (opcao2)
        {
        case 1: // Comparação do atributo população
            printf("===========================================\n");
            printf("--------- Voce escolheu População ---------\n");
            printf("===========================================\n");
            resultado2 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
                                
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");
            
            printf("\n");
            printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, populacaoCarta1);
            printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, populacaoCarta2);

            printf("\n");
            printf("Resultado: ");
            
            if (populacaoCarta1 > populacaoCarta2){
                printf("Carta 1 (%s) Venceu!\n", cidade1); 
            } else if (populacaoCarta1 < populacaoCarta2) {
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("Houve um empate\n");
            }

            break;
        case 2: // Comparação do atributo área
            printf("===========================================\n");
            printf("------------ Você escolheu Área -----------\n");
            printf("===========================================\n");
            resultado2 = areaCarta1 > areaCarta2 ? 1 : 0;
                                
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");

            printf("\n");
            printf("Carta 1 - %s, %s (%s): %.2f km²\n", pais1, cidade1, estado1, areaCarta1);
            printf("Carta 2 - %s, %s (%s): %.2f km²\n", pais2, cidade2, estado2, areaCarta2);
            
            printf("\n");
            printf("Resultado: ");
            
            if (areaCarta1 > areaCarta2){ 
                printf("Carta 1 (%s) Venceu!\n", cidade1); 
            } else if (areaCarta1 < areaCarta2) {
                printf("Carta 2 (%s) Venceu!\n", cidade2); 
            } else {
                printf("Houve um empate\n");
            }

            break;
        case 3: // Comparação do atributo pib
            printf("===========================================\n");
            printf("------------- Você escolheu PIB -----------\n");
            printf("===========================================\n");
            resultado2 = pibCarta1 > pibCarta2 ? 1 : 0;
                                
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");

            printf("\n");
            printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pibCarta1);
            printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pibCarta2);

            printf("\n");
            printf("Resultado: ");
            
            if (pibCarta1 > pibCarta2){
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if (pibCarta1 < pibCarta2) {
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("Houve um empate\n");
            }

            break;
        case 4: // Comparação do atributo ponto turistíco
            printf("===========================================\n");
            printf("------ Você escolheu Ponto Turistíco ------\n");
            printf("===========================================\n");
            resultado2 = ponto_turisticoCarta1 > ponto_turisticoCarta2 ? 1 : 0;
                                
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");

            printf("\n");
            printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, ponto_turisticoCarta1);
            printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, ponto_turisticoCarta2);

            printf("\n");
            printf("Resultado: ");
            
            if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if(ponto_turisticoCarta1 < ponto_turisticoCarta2) {
                printf("Carta 2 (%s) Venceu!\n", cidade2); 
            } else {
                printf("Houve um empate\n");
            }

            break;
        case 5: // Comparação do atributo densidade populacional
            printf("================================================\n");
            printf("----- Você escolheu Densidade Populacional -----\n");
            printf("================================================\n");
            resultado2 = densidade_populacionalCarta1 < densidade_populacionalCarta2 ? 1 : 0;
                                
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");

            printf("\n");
            printf("Carta 1 - %s, %s (%s): %.2f hab/km²\n", pais1, cidade1, estado1, densidade_populacionalCarta1);
            printf("Carta 2 - %s, %s (%s): %.2f hab/km²\n", pais2, cidade2, estado2, densidade_populacionalCarta2);

            printf("\n");
            printf("Resultado: ");
            
            if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if(densidade_populacionalCarta1 > densidade_populacionalCarta2) {
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("Houve um empate\n");
            }

            break;
        case 6: // Comparação do atributo pib per capita 
            printf("================================================\n");
            printf("--------- Você escolheu PIB per capita ---------\n");
            printf("================================================\n");    
            resultado2 = pib_per_capitaCarta1 > pib_per_capitaCarta2 ? 1 : 0;
                        
            printf("\n");
            printf("------ Exibição dos dados das cartas ------\n");

            printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pib_per_capitaCarta1);
            printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pib_per_capitaCarta2);

            printf("\n");
            printf("Resultado: ");

            if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if (pib_per_capitaCarta1 < pib_per_capitaCarta2){
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("Houve um empate\n");
            }

            break;
        default:
            printf("Opção Inválida! Tente novamente.");
            exit(0); //interrompe o código caso nenhuma opção esteja correta.
            break;
        }

        //Exibe o resultado das comparações atributo e super poder.
        printf("\n");
        printf("================================================\n");
        printf("------------ Resultado da Comparação -----------\n");
        printf("================================================\n");
        printf("\n");
        // Comparação e exbição dos atributos
        printf("------------------ ATRIBUTO -------------------\n");
        printf("\n");

        if (resultado1 && resultado2)
        { // Compara se os valores são verdadeiros => 1 && 1
            printf("***** Parabéns, Você ganhou! *****\n");
            printf("Carta 1 venceu nos atributos!\n");
        } else if (resultado1 != resultado2)
        { // Compara se os valores são diferentes => 1 != 0
            printf("***** Oops! *****\n");
            printf("Houve um empate!");
            printf("\n");
        } else 
        { // Retorna a mensagem caso nenhuma das condições anteriores forem verdadeiras
            printf("***** Infelizmente você perdeu! *****\n");
            printf("Carta 2 venceu nos atributos\n");
        }
        // Comparação e exibição dos super poderes
        printf("\n");
        printf("---------------- SUPER PODER -----------------\n");
        printf("\n");
        
        if (superPoderCarta1 > superPoderCarta2)
        { // Compara se um valor é maior que o outro
            printf("***** Parabéns, Você ganhou! *****\n");
            printf("Carta 1 venceu com Super Poder\n");
        } else if (superPoderCarta1 < superPoderCarta2) 
        { // Compara se um valor é menor que o outro
            printf("***** Infelizmente você perdeu! *****\n");
            printf("Carta 2 venceu com Super Poder\n");
        } else { // Retorna a mensagem caso nenhuma das condições anteriores forem verdadeiras
            printf("***** Oops! *****\n");
            printf("Houve um empate!\n");
        }
        printf("\n");
        
        printf("-----------------------------------------\n");
        printf("\n");
        // Exibe o total de super poder de cada carta
        printf("Super Poder Carta 1: %d\n", superPoderCarta1); 
        printf("Super Poder Carta 2: %d\n", superPoderCarta2);
        printf("\n");

    }
    
    return 0;
}