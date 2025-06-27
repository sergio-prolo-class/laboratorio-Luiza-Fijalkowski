#include <stdio.h>
#include <math.h>

#define POL_POR_PE 12
#define CM_POR_POL 2.54

int main(){

    int pol, pes;
    float metros;

    printf("escreva a altura em metros:");
    scanf("%f", &metros);

    pol = round(100.0 * metros / CM_POR_POL);  // Aqui ocorre conversão implícita
    pes = pol / POL_POR_PE;                    // Divisão inteira
    pol = pol % POL_POR_PE;                    // Resto da divisão

    printf("Altura em pés + polegadas: %d'%d\"\n", pes, pol);
    
    return 0;
}