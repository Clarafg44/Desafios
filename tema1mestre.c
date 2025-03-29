/* 
   Nivel novato:
   Desafio de cadastrar 2 cartas super trunfo, com informações referentes ao Estado, Código da carta, Nome da cidade,
   População, Área, PIB e Número de pontos turisticos.

   Nivel aventureiro:
   Agora o desafio inclui o calculo da densidade populacional e PIB per capita, sendo os resultados exibidos  

   Nivel mestre:
    a população agora é armazenada como unsigned long int, Calcular o Super Poder: Para cada carta, calcule o "Super Poder" 
    somando todos os atributos numéricos e o inverso da densidade populacional
    Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2)

*/
#include <stdio.h>

int main (){

    // declaração de variaveis
        char estado1, estado2, codigo1[50], nome_cidade1[50], codigo2[50], nome_cidade2[50];
        unsigned long int populacao1, populacao2;
        int  ptsturisticos1, ptsturisticos2;
        float area1, pib1, area2, pib2, dp1, dp2, pibpc1, pibpc2, idp1, idp2, super1, super2;
    
    //cadastro da carta 1
        printf ("\nVocê realizará o cadastro da carta 01 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
       
        printf ("A qual estado pertence a carta?\n(Digite uma letra de A a H)\n");
        scanf(" %c", &estado1);

        printf ("Qual o código da carta?\n(Digite um numero de 01 a 04)\n");
        scanf ("%s", codigo1);

        printf ("A qual cidade pertence a carta? \n");
        scanf(" %[^\n]", nome_cidade1); // realiza a leitura da linha inteira

        printf ("Qual a população da cidade em cadastramento?\n");
        scanf ("%lu", &populacao1);

        printf ("Qual a área da cidade em cadastramento?\n");
        scanf ("%f", &area1);

        printf ("Qual o valor do PIB da cidade em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
        scanf ("%f", &pib1);

        printf ("Quantos pontos turisticos a cidade em cadastramento possui?\n");
        scanf ("%d", &ptsturisticos1);
        
        // calculo da densidade populacional 1
            dp1 = (unsigned long int) (populacao1 / area1);
            idp1 = 1/dp1;

        
        // calculo do pib per capita
            pibpc1 = (float) (pib1 * 1000000000) / populacao1;

        // calculando Super poder
            super1 = (unsigned long int) (populacao1 + area1 + pib1 + ptsturisticos1 + idp1 + pibpc1);


    // exibição das informações cadastradas da carta 01
        printf ("\nCarta1: \n");
        printf ("Estado: %c \n", estado1);  
        printf ("Código: %c%s \n", estado1, codigo1);
        printf ("Nome da Cidade: %s \n", nome_cidade1); 
        printf ("População: %lu \n", populacao1);       
        printf ("Área: %.2f Km² \n", area1);
        printf ("PIB: %.2f Bilhões de reais \n", pib1);        
        printf ("Número de Pontos Turisticos: %d\n", ptsturisticos1);  
        printf ("Densidade Populacional: %.2f hab/Km²\n", dp1);
        printf ("PIB per Capita: %.2f reais\n",pibpc1);   
        printf ("O inverso da densidade populacional é: %f\n", idp1);
        printf ("O super poder vale: %f\n", super1);


    // cadastro da carta 02
        printf ("\nVocê realizará o cadastro da carta 02 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
        
        printf ("A qual estado pertence a carta?\n(Digite uma letra de A a H)\n");
        scanf(" %c", &estado2);

        printf ("Qual o código da carta?\n(Digite um numero de 01 a 04)\n");
        scanf ("%s", codigo2);

        printf ("A qual cidade pertence a carta? \n");
        scanf (" %[^\n]", nome_cidade2);

        printf ("Qual a população da cidade em cadastramento?\n");
        scanf ("%lu", &populacao2);

        printf ("Qual a área da cidade em cadastramento?\n");
        scanf ("%f", &area2);

        printf ("Qual o valor do PIB da cidade em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
        scanf ("%f", &pib2);

        printf ("Quantos pontos turisticos a cidade em cadastramento possui?\n");
        scanf ("%d", &ptsturisticos2);

         // calculo da densidade populacional 2
            dp2 = (unsigned long int) (populacao2 / area2);
            idp2 = 1/dp2;
        
         // calculo do pib per capita
             pibpc2 = (float) pib2 * 1000000000 / populacao2;

         // calculando Super poder
             super2 = (unsigned long int) (populacao2 + area2 + pib2 + ptsturisticos2 + idp2 + pibpc2);


    // exibição das informações cadastradas da carta 2
        printf ("\nCarta2: \n");
        printf ("Estado: %c \n", estado2);  
        printf ("Código: %c%s \n", estado2, codigo2);
        printf ("Nome da Cidade: %s \n", nome_cidade2); 
        printf ("População: %lu \n", populacao2);       
        printf ("Área: %.2f Km² \n", area2);
        printf ("PIB: %.2f Bilhões de reais \n", pib2);        
        printf ("Número de Pontos Turisticos: %d \n", ptsturisticos2);  
        printf ("Densidade Populacional: %.2f hab/Km²\n", dp2);
        printf ("PIB per Capita: %.2f reais\n",pibpc2); 
        printf ("O inverso da densidade populacional é: %f\n", idp2);
        printf ("O super poder vale: %f\n", super2);     
        
    // Mensagem de fim de cadastramento
        printf ("\n\nVocê cadastrou 2 cartas no jogo Super Trunfo!\n");

    
    // Comparação entre as cartas

     printf("\n\nExibiremos abaixo um comparativo entre as cartas da seguinte forma:\nSe o valor apresentado for 0 --> Carta 2 Venceu!\nSe o valor apresentado for 1 --> Carta 1 Venceu!\n   ");

     printf ("\n\nComparação entre cartas: \n");
     printf ("População: %d\n", (populacao1 > populacao2));
     printf ("Área: %d\n", (area1 > area2) );
     printf ("PIB: %d\n", (pib1>pib2));
     printf ("Pontos Turisticos: %d\n", (ptsturisticos1 > ptsturisticos2));
     printf ("Densidade populacional: %d\n", (dp1 > dp2));
     printf ("PIB per Capita: %d\n", (pibpc1 > pibpc2));
     printf ("Super Poder: %d\n", (super1 > super2));






 return 0;

}
