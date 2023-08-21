#include <stdio.h>

main(){

    //Dado um valor em reias e a cotaçao do dolar, converta esse valor para dolares.

    float reias, cotacaoDolar, valorFinal;

    printf("Insira o valor em reais: ");
    scanf("%f", &reias);

    printf("Insira a cotaçao do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorFinal = reias / cotacaoDolar;

    printf("O valor em dolar é: %f", valorFinal);


}