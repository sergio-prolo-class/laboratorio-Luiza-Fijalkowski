#include <math.h>
#include <stdio.h>

    float hav(float theta){
        float resultado;
        resultado= sin(theta/2)*sin(theta/2)
        return resultado
    }

    float graus2rad(float graus){
        float rad;
        rad= (3.1415*graus)/180;
        return rad;
    }

    float distancia_da_terra(float lat1, float lon1, float lat2, float lon2 ){
        float d;

        float cos_lat1=cos(lat1);
        float cos_lat2-=cos(lat2);
        float hav1=hav(lat2-lat1);
        float hav2=hav(lon2-lon1);

        d=2*6371*asin( sqrt(hav1+cos_lat1*cos_lat2*hav2))
        return d;
    }

int main(){
    int lat1, lon1;
    printf("entre com lat e lon do ponto1");
    scanf("%d %d, &lat1, &lon1");
    
    
    return 0:
}
    
