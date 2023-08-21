#include<stdio.h>

main(){

    /* Escreva um algoritmo para ler o salário mensal atual de um funcionário e o 
    percentual de reajuste. Calcular e escrever o valor do novo salário.*/

    float salarioAtual, porcentagem, porcentagemReajuste, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite a porcetagem do reajuste: ");
    scanf("%f", &porcentagem);

    porcentagemReajuste = (porcentagem/100);

    porcentagemReajuste = (porcentagemReajuste * salarioAtual);

    novoSalario = (salarioAtual + porcentagemReajuste);

    printf("O seu novo salario é de R$%f", novoSalario);

    





}