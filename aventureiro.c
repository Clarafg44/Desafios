/* 
   Nivel novato:
   Desafio de cadastrar 2 cartas super trunfo, calular a densidade populacional e pib percapita, comparar um atributo escolhido
   diretamente no codigo, determinar a carta vencedora

   Nivel aventureiro:

   Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado
   para comparar as cartas. O menu deve ser claro e fácil de usar.
   Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. 
*/
#include <stdio.h>

int main (){

    // declaração de variaveis
        char  pais1[50], pais2[50];
        int  ptsturisticos1, ptsturisticos2, populacao1, populacao2, atributo;
        float area1, pib1, area2, pib2, dp1, dp2;
    
    //cadastro da carta 1
        printf ("\nVocê realizará o cadastro da carta 01 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
       
        printf ("A qual país pertence a carta?\n");
        scanf(" %[^\n]", pais1);

        printf ("Qual a população do país em cadastramento?\n");
        scanf ("%d", &populacao1);

        printf ("Qual a área do país em cadastramento?\n");
        scanf ("%f", &area1);

        printf ("Qual o valor do PIB do país em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
        scanf ("%f", &pib1);

        printf ("Quantos pontos turisticos o país em cadastramento possui?\n");
        scanf ("%d", &ptsturisticos1);
        
        // calculo da densidade populacional 1
            dp1 = (float) populacao1 / area1;
          

    // exibição das informações cadastradas da carta 01
        printf ("\nCarta1: \n");
        printf ("País: %s \n", pais1);
        printf ("População: %d \n", populacao1);       
        printf ("Área: %.2f Km² \n", area1);
        printf ("PIB: %.2f Bilhões de reais \n", pib1);        
        printf ("Número de Pontos Turisticos: %d\n", ptsturisticos1);  
        printf ("Densidade Populacional: %.2f hab/Km²\n", dp1);
   

    //cadastro da carta 2
    printf ("\nVocê realizará o cadastro da carta 02 do jogo Super Trunfo, para isto, preencha corretamente as informações solicitadas.\n\n");
       
    printf ("A qual país pertence a carta?\n");
    scanf(" %[^\n]", pais2);

    printf ("Qual a população do país em cadastramento?\n");
    scanf ("%d", &populacao2);

    printf ("Qual a área do país em cadastramento?\n");
    scanf ("%f", &area2);

    printf ("Qual o valor do PIB do país em cadastramento?\n(Digite o valor em Bilhões de reais)\n");
    scanf ("%f", &pib2);

    printf ("Quantos pontos turisticos o país em cadastramento possui?\n");
    scanf ("%d", &ptsturisticos2);
    
    // calculo da densidade populacional 2
        dp2 = (float) populacao2 / area2;
        

// exibição das informações cadastradas da carta 02
    printf ("\nCarta2: \n");
    printf ("País: %s\n", pais2);
    printf ("População: %d \n", populacao2);       
    printf ("Área: %.2f Km² \n", area2);
    printf ("PIB: %.2f Bilhões de reais \n", pib2);        
    printf ("Número de Pontos Turisticos: %d\n", ptsturisticos2);  
    printf ("Densidade Populacional: %.2f hab/Km²\n", dp2);
        
    // Mensagem de fim de cadastramento
        printf ("\n\nVocê cadastrou 2 cartas no jogo Super Trunfo!\n\n");

    // Menu iterativo

        printf ("*** JOGO SUPER TRUNFO ***\n");
        printf ("Escolha um dos atributos:\n");
        printf ("   1: População\n");
        printf ("   2: Área\n");
        printf ("   3: PIB\n");
        printf ("   4: Número de pontos turisticos\n");
        printf ("   5: Densidade demografica\n");
        printf ("Atributo escolhido: ");
        scanf ("%d", &atributo);

    switch (atributo)
    {
    case 1:
        printf ("População de %s: %d\n", pais1, populacao1);
        printf ("População de %s: %d\n", pais2, populacao2);

        if (populacao1 > populacao2)
        {
            printf ("%s Venceu!", pais1);
        }else if (populacao1 == populacao2)
        {
            printf ("Empate!");
        }else{
            printf ("%s Venceu!", pais2);
        }
        
    break;
        
    case 2:
        printf ("Área de %s: %.2f\n", pais1, area1);
        printf ("Área de %s: %.2f\n", pais2, area2);

        if (area1 > area2)
        {
            printf ("%s Venceu!", pais1);
        }else if (area1 == area2)
        {
            printf ("Empate!");
        }else{
            printf ("%s Venceu!", pais2);
      }  
        
    break;
    
    case 3:
        printf ("PIB de %s: %.2f\n", pais1, pib1);
        printf ("PIB de %s: %.2f\n", pais2, pib2);

        if (pib1 > pib2)
        {
            printf ("%s Venceu!", pais1);
        }else if (pib1 == pib2)
        {
            printf ("Empate!");
        }else{
            printf ("%s Venceu!", pais2);
        }
        
    break;
   
    case 4:
        printf ("Pontos Turísticos de %s: %d\n", pais1, ptsturisticos1);
        printf ("Pontos Turísticos de %s: %d\n", pais2, ptsturisticos2);

        if (ptsturisticos1 > ptsturisticos2)
        {
            printf ("%s Venceu!", pais1);
        }else if (ptsturisticos1 == ptsturisticos2)
        {
            printf ("Empate!");
        }else{
            printf ("%s Venceu!", pais2);
        }
    
    break;

    case 5:
        printf ("Densidade Demográfica de %s: %.2f\n", pais1, dp1);
        printf ("Densidade Demográfica de %s: %.2f\n", pais2, dp2);

        if (dp1 < dp2)
        {
            printf ("%s Venceu!", pais1);
        }else if (dp1 == dp2)
        {
            printf ("Empate!");
        }else{
            printf ("%s Venceu!", pais2);
        }
    
    break;

    default:
        printf ("Opção Inválida");
        break;
    }
    
    // Banner de fim de jogo

        printf ("\n\n*** FIM DO JOGO ***");


 return 0;

}