#include <stdio.h>
#include <stdlib.h>
/*1. Escreva um programa que leia duas matrizes A e B numéricas, cada uma com duas dimensões
de 5 linhas e 3 colunas. Criar uma matriz C de mesma dimensão, 5 linhas e 3 colunas, que
deverá ser formada pela soma dos elementos da matriz A com os elementos da matriz B. No
final apresentar a matriz C.
*/
int main()
{
    int matrizA[5][3],matrizB[5][3],matrizC[5][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        matrizC[i][j] = 0;
        for(j=0;j<5;j++)
        {
            printf("Digite o valor de A: ");
            scanf("%d",&matrizA[i][j]);
            printf("Digite o valor de B: ");
            scanf("%d",&matrizB[i][j]);
            matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
            printf(" Resultado de C foi: %d \n\n",matrizC[i][j]);
        }
    }










    return 0;
}
