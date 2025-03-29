/* 
   Nivel novato:
   Desafio de cadastrar 2 cartas super trunfo, calular a densidade populacional e pib percapita, comparar um atributo escolhido
   diretamente no codigo, determinar a carta vencedora
*/
#include <stdio.h>

int main (){

    // declaração de variaveis
        char estado1[50], estado2[50], codigo1[50], nome_cidade1[50], codigo2[50], nome_cidade2[50], cidade[50];
        int  ptsturisticos1, ptsturisticos2, populacao1, populacao2, resultado;
        float area1, pib1, area2, pib2, dp1, dp2, pibpc1, pibpc2, idp1, idp2, super1, super2;
    
    //cadastro da carta 1
        printf ("\nVocê realizará o cadastro da carta 01 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
       
        printf ("A qual estado pertence a carta?\n(Digite a abreviação em 2 letras)\n");
        scanf(" %s", estado1);

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
            dp1 = (float)(populacao1 / area1);
            idp1 = 1.0/dp1;

        
        // calculo do pib per capita
            pibpc1 = (float) (pib1 * 1000000000) / populacao1;


    // exibição das informações cadastradas da carta 01
        printf ("\nCarta1: \n");
        printf ("Estado: %s \n", estado1);  
        printf ("Código: %s%s \n", estado1, codigo1);
        printf ("Nome da Cidade: %s \n", nome_cidade1); 
        printf ("População: %d \n", populacao1);       
        printf ("Área: %.2f Km² \n", area1);
        printf ("PIB: %.2f Bilhões de reais \n", pib1);        
        printf ("Número de Pontos Turisticos: %d\n", ptsturisticos1);  
        printf ("Densidade Populacional: %.2f hab/Km²\n", dp1);
        printf ("PIB per Capita: %.2f reais\n",pibpc1);   
        printf ("O inverso da densidade populacional é: %f\n", idp1);
       

    // cadastro da carta 02
        printf ("\nVocê realizará o cadastro da carta 02 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
        
        printf ("A qual estado pertence a carta?\n(Digite uma letra de A a H)\n");
        scanf(" %s", estado2);

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
            dp2 = (float) (populacao2 / area2);
            idp2 = 1.0/dp2;
        
         // calculo do pib per capita
             pibpc2 = (float) pib2 * 1000000000 / populacao2;


    // exibição das informações cadastradas da carta 2
        printf ("\nCarta2: \n");
        printf ("Estado: %s \n", estado2);  
        printf ("Código: %s%s \n", estado2, codigo2);
        printf ("Nome da Cidade: %s \n", nome_cidade2); 
        printf ("População: %d \n", populacao2);       
        printf ("Área: %.2f Km² \n", area2);
        printf ("PIB: %.2f Bilhões de reais \n", pib2);        
        printf ("Número de Pontos Turisticos: %d \n", ptsturisticos2);  
        printf ("Densidade Populacional: %.2f hab/Km²\n", dp2);
        printf ("PIB per Capita: %.2f reais\n",pibpc2); 
        printf ("O inverso da densidade populacional é: %f\n", idp2);    
        
    // Mensagem de fim de cadastramento
        printf ("\n\nVocê cadastrou 2 cartas no jogo Super Trunfo!\n");

    
    // Comparação entre as cartas
    // o atributo escolhido foi quantidade de pontos turiticos
        if (ptsturisticos1 > ptsturisticos2){
            printf("Comparação de cartas (Atributo: Pontos Turisicos)\n\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1,estado1,ptsturisticos1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2,estado2,ptsturisticos2);
            printf("Resultado: Carta 1 %s (%s) venceu!",nome_cidade1, estado1);
        }
        else{
            printf("Comparação de cartas (Atributo: Pontos Turisicos)\n\n");
            printf("Carta 1 - %s (%c): %d\n", nome_cidade1,estado1,ptsturisticos1);
            printf("Carta 2 - %s (%c): %d\n", nome_cidade2,estado2,ptsturisticos2);
            printf("Resultado: Carta 2 %s (%s) venceu!\n",nome_cidade2, estado2);
        }
     
    // Banner de fim de jogo

        printf ("\n*** FIM DO JOGO ***");


 return 0;

}