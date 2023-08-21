#include <stdio.h>

main(){

    /*Faca um programa em que o usuario digite o custo de uma determinada mercadortia, 
    em seguida, adicione-se ao custo o valor do frete e despesas eventuais (tambem solicitada pelo teclado). 
    para concluir, o programa pergunta qual o valor de venda e indica a porcentagem de lucro da mercadotia.*/

    float custo, valorFrete, despesas, valorVenda, valorBruto, lucro, porcentagemLucro;

    printf("\nDigite o valor de custo da mercadoria: ");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete da mercadoria: ");
    scanf("%f", &valorFrete);

    printf("\nDigite o valor do frete das despesas: ");
    scanf("%f", &despesas);

    printf("\nDigite o valor de venda: ");
    scanf("%f", &valorVenda);

    valorBruto = custo + valorFrete + despesas;

    lucro = (valorVenda - valorBruto);

    porcentagemLucro = (lucro/valorBruto)*100;

   

    printf("a parcentagem de lucro é: %.2f%", porcentagemLucro);





}