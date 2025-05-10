#include <stdio.h>

// <<<<<Desafio Super Trunfo em Logíca C>>>>> 
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


     printf("****** Desafio  Super Trunfo em Logíca C  ******\n");
     // Declaração das variáveis para primeira carta.
    
     char estado1;
     char codigo1[4];
     char cidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int pontosTuristicos1;
     float densidade1;
     float pib_per_capita1;
      


      
     

     // Declaração das variantes para segunda carta.
     char estado2;
     char codigo2[4];
     char cidade2[50];
     int populacao2;
     float area2;
     float pib2; 
     int pontosTuristicos2;
     float densidade2;
     float pib_per_capita2;

     //Cadastros das cartas
 
      // Cadastro da primeira carta.
     printf(" \nCadastro da primeira carta:\n");
     printf(" Digite o estado (A-H):");  //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado1);
   
     printf(" Digite o código da carta (ex:A01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo1);

     printf(" Digite o nome da cidade :"); // Escolha um número de (01-04)
     scanf("%s", cidade1);

     printf(" Digite a população da cidade:");
     scanf("%d", &populacao1);
 
     printf(" Digite a área da cidade (em km²):");
     scanf("%f", &area1);
 
     printf(" Digite o PIB da cidade:");
     scanf("%f", &pib1); //PIB em bilhoes

     printf(" Digite o número de pontos turísticos:");
     scanf("%d", &pontosTuristicos1);


        // Cadastro da segunda carta.
     printf(" \nCadastro da segunda carta:\n");
     printf(" Digite o estado (A-H):"); //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado2);

     printf(" Digite o código da carta (ex:B01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo2);

     printf(" Digite o nome da cidade:");
     scanf("%s", cidade2);

     printf(" Digite a população da cidade2:");
     scanf("%d", &populacao2);

     printf(" Digite a área da cidade2(em Km²):");
     scanf("%f", &area2);

     printf(" Digite o PIB da cidade2:");
     scanf("%f", &pib2);

     printf(" Digite os pontos Turísticos2:");
     scanf("%d", &pontosTuristicos2);
     
        
     // Cálculo da densidade demográfica e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //Exibição dos dados cadastrados da primeira carta 
    printf("\nCarta1:\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);
    printf("População : %d\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita1);//PIB per capita em reais

       // Exibição dos dados cadastrados da segunda carta
    printf("\nCarta2:\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo2);
    printf("Cidade : %s\n", cidade2);
    printf("População : %d\n", populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional2: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);//PIB per capita em reais

  


    //Comparação das duas cartas
        printf("\nComparação entre as Cidades:\n");

    //Populações
        printf("Populção:");
    if (populacao1 > populacao2) { 
        printf("Cidade 1 tem maior População.\n");   
    }  else {
        printf("Cidade 2 tem maior População.\n");

    }

    // Área
    printf("Área:");
    if(area1 > area2) {
        printf("Cidade 1 tem maior Área.\n");
    } else {
        printf("Cidade 2 tem maior Área.\n");
    }
    // PIP
        printf("PIB:");
    if(pib1 > pib2) {
        printf("Cidade 1 tem maior PIB.\n");
    } else { 
        printf(" Cidade 2 tem maior PIB.\n");
    }

    //Cidade vencedora entre as comparações
       printf("\nA cidade vencedora foi:\n");
    if(populacao1 + area1 + pib1 > populacao2 + area2 + pib2) {
       printf("***** Cidade 1 *****\n");
    }  else {
       printf("***** Cidade 2 *****\n" );
    }





    return 0;

}
    





    
    
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
   

    
