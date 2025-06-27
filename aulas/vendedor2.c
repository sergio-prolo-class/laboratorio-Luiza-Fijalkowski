#include <stdio.h>

#define SALARIO_FIXO 2000.0
#define META 10000.0
#define BONUS 500.0

int main()
{
    float vendas, remuneracao;
    int avaliacao;

    printf("Entre com o total de vendas (R$): ");
    scanf("%f", &vendas);
    printf("Entre com a avaliação de desempenho (1-10): ");
    scanf("%d", &avaliacao);

    remuneracao = SALARIO_FIXO;

    if (vendas >= META) {
        remuneracao += vendas * 0.07;
    } else {
        remuneracao += vendas * 0.05;
    }

    if (avaliacao >= 8) {
        remuneracao += BONUS;
    }

    printf("Remuneração: R$ %.2f\n", remuneracao);

    return 0;
}
