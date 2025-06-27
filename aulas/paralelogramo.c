#include <stdio.h>
#include <math.h>

typedef struct{
    float lado1, lado2, angulo;
} Paralelogramo;

int main(){
    
    Paralelogramo medidas;
    float area, perimetro;
    printf("entre com os lados:");
    scanf("%f %f", &medidas.lado1, &medidas.lado2);

    printf("entre com o angulo em graus:");
    scanf("%f", &medidas.angulo);


    perimetro=2*(medidas.lado1+medidas.lado2);
    printf("permetr %.2f \n", perimetro);

    area=medidas.lado1*medidas.lado2*sin (medidas.angulo*3.1415/180);
    printf("area %.2f \n", area);
    return 0;
}