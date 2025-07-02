#include <stdio.h>

int main()
{
    float faixa_min, faixa_max, ph;
    int n_medições, n_medições_fora;

    //le a faixa
    printf("entre com a faixa de ph adequada:");
    scanf("%f %f", &faixa_min, &faixa_max);

    //le quantas mediçoes
    printf("entre com as medições:");
    scanf("%d", &n_medições);

    //le medicoes
    for (int i=n_medições; i>0; i--) {
        scanf("%f", &ph);
        if(ph <= faixa_min && ph >= faixa_max){
        n_medições_fora++;
        }
    }

    //escreve o resultado
    printf("numero de mediçoes fora da faixa: %d", n_medições_fora);
    return 0;
}