#include <stdio.h>

int main(){

    float salario, comissão, vendas;
    int desempenho;

    //le total de vendas
    printf("entre com o total de vendas: ");
    scanf("%f", &vendas);

    //le avaliaçao de desempenho
    printf("entre coma avaliaçao de desempenho:");
    scanf("%d", &desempenho);

    //calcula salario
    salario = salario + 0.05;

    //condiçoes
    if(vendas>10000){
        salario = salario + 0.07;
    }
    if(desempenho>=8){
        salario += 500;
    }

    //escreva valor recebido
    printf("salario; R$ %f\n", salario);
    return 0;
}