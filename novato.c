// Desafio de cadastrar 2 cartas super trunfo, com informações referentes ao Estado, Código da carta, Nome da cidade, População, Área, PIB e Número de pontos turisticos.

#include <stdio.h>

int main (){

    // declaração de variaveis
        char estado1, estado2, codigo1[50], nome_cidade1[50], codigo2[50], nome_cidade2[50];
        int populacao1, ptsturisticos1, populacao2, ptsturisticos2;
        float area1, pib1, area2, pib2;
    
    //cadastro da carta 1
        printf ("\nVocê realizará o cadastro da carta 01 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
       
        printf ("A qual estado pertence a carta?\n(Digite uma letra de A a H)\n");
        scanf(" %c", &estado1);

        printf ("Qual o código da carta?\n(Digite um numero de 01 a 04)\n");
        scanf ("%s", codigo1);

        printf ("A qual cidade pertence a carta? \n");
        scanf ("%s", nome_cidade1);

        printf ("Qual a população da cidade em cadastramento?\n");
        scanf ("%d", &populacao1);

        printf ("Qual a área da cidade em cadastramento?\n");
        scanf ("%f", &area1);

        printf ("Qual o valor do PIB da cidade em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
        scanf ("%f", &pib1);

        printf ("Quantos pontos turisticos a cidade em cadastramento possui?\n");
        scanf ("%d", &ptsturisticos1);
    
    // exibição das informações cadastradas da carta 01
        printf ("\nCarta1: \n");
        printf ("Estado: %c \n", estado1);  
        printf ("Código: %c%s \n", estado1, codigo1);
        printf ("Nome da Cidade: %s \n", nome_cidade1); 
        printf ("População: %d \n", populacao1);       
        printf ("Área: %.2f Km² \n", area1);
        printf ("PIB: %.2f Bilhões de reais \n", pib1);        
        printf ("Número de Pontos Turisticos: %d\n", ptsturisticos1)  ;     

    // cadastro da carta 02
        printf ("\nVocê realizará o cadastro da carta 02 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
        
        printf ("A qual estado pertence a carta?\n(Digite uma letra de A a H)\n");
        scanf(" %c", &estado2);

        printf ("Qual o código da carta?\n(Digite um numero de 01 a 04)\n");
        scanf ("%s", codigo2);

        printf ("A qual cidade pertence a carta? \n");
        scanf ("%s", nome_cidade2);

        printf ("Qual a população da cidade em cadastramento?\n");
        scanf ("%d", &populacao2);

        printf ("Qual a área da cidade em cadastramento?\n");
        scanf ("%f", &area2);

        printf ("Qual o valor do PIB da cidade em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
        scanf ("%f", &pib2);

        printf ("Quantos pontos turisticos a cidade em cadastramento possui?\n");
        scanf ("%d", &ptsturisticos2);

    // exibição das informações cadastradas da carta 2
        printf ("\nCarta2: \n");
        printf ("Estado: %c \n", estado2);  
        printf ("Código: %c%s \n", estado2, codigo2);
        printf ("Nome da Cidade: %s \n", nome_cidade2); 
        printf ("População: %d \n", populacao2);       
        printf ("Área: %.2f Km² \n", area2);
        printf ("PIB: %.2f Bilhões de reais \n", pib2);        
        printf ("Número de Pontos Turisticos: %d", ptsturisticos2);     
        
    // Mensagem de fim do programa
        printf ("\n\nVocê cadastrou 2 cartas no jogo Super Trunfo!");


    return 0;

}