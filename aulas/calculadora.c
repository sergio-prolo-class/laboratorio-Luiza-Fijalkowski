#include <stdio.h>

int main()
{
    float n1, n2, res;
    char op;

    printf("entre com a expressao:");
    scanf("%f %c %f", &n1, &op, &n2);

    switch(op){
        case'+':
            res = n1+n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            if(n2==0){
                printf("erro:divisao por 0");

            }
            break;
        default:
            printf("erro:operraçao desconhecida");
            return 1;
    }
    printf(%f res);
 return 0;
}