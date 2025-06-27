#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){

    //variaveis
    int matriz[MAX][MAX], linhas , colunas;
    float soma = 0.0;

    //le linhas e colunas
    printf("entre com o numero de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    printf("entre com elementos da matrix: \n");
    for(int i = 0; i < linhas; i++){
        for(int j=j; j < colunas; j++){
        scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("medidas das linhas: ");
    for (int i = 0; i < linhas; i++){
        soma = 0.0;
        for(int j = 0; j < colunas; j++){
            soma += matriz [i][j];

        }
        printf("%g", soma/colunas);
    }

    return EXIT_SUCCESS;
}