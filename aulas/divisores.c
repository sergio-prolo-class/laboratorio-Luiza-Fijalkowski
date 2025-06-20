#include <stdio.h>

int main(){
    int n;

    //le um inteiro positivo
    printf("entre com um inteiro positivo:");
    scanf("%d",&n);

    printf("divisores:[1");
    int n_divisores = 1;

    for(int i=2; n <= n; i++){
        if(n % i == 0){
            n_divisores++;
            printf(", %d", i);
        }
    }
    printf("]\n");

    printf("%s\n", (n_divisores == 2) ? "e primo" : "nao e primo");
    return 0;
}