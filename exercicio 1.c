#include<stdio.h>

main(){

    //operadores aritimeticos = soma (+), subtração (-)
    //divisão (/) multiplicadores (*) e modulo (%)
    //atenção a ordem de precedencia

    //escrever um algoritimo que realize a subtraçao, a divisao e a multiplicaçao de dois numeros e apresente o resultado

    //passo 1 - declarar variaveis
    //passo 2 - recebe os dados
    //passo 3 - montar a operação de processamento (calculo)
    //passo 4 - apresnta a saída

    //verificar saidas das operaçoes de divisao e subtraçao
    //


    int num1, num2, resultadosSub, resultadoMult, resultadoSoma;
    float resultadoDiv;

    printf("Digite o numero1 \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero \n");
    scanf("%d", &num2);

   //montar as operações:

   resultadoSoma = num1 + num2;
   resultadosSub = num1 - num2;
   resultadoMult = num1 * num2;
   resultadoDiv = (float)num1 / num2;

   //apresentação dos resultados

    printf("\nResultado soma: %d", resultadoSoma);
    printf("\nResultado subtração: %d", resultadosSub);
    printf("\nResultado divisao: %f", resultadoDiv);
    printf("\nResultado multiplicao: %d", resultadoMult);





}