#include <stdio.h>
#define POL_POR_PE 12
#define CM_POR_POL 2.54

int main(){

    int pes, pol;
    float metros;

    printf("entre com sua altura em pés+polegadas:");
    scanf("%d %d", &pes, &pol);

    pol= pes * POL_POR_PE + pol;
    metros= pol * CM_POR_POL/100.0;

    printf("altura em metros: %.2f\n", metros);

    return 0;
}