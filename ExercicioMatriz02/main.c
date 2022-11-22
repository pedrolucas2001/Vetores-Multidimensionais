#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz A de duas dimensões com 6 linhas e 6 colunas.
Apresentar o somatório dos elementos que estão na diagonal principal (A[0,0], A[1,1], A[2,2],
A[3,3], A[4,4], A[5,5]).
O exemplo abaixo apresenta a matriz A e a diagonal principal está sombreada:*/
int main()
{
    int a[6][6];
    int soma;
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("Digite um valor: ");
            scanf("%d",&a[i][j]);
        }
    }
    soma = a[0][0] + a[1][1] + a[2][2] + a[3][3] + a[4][4] + a[5][5];
    printf("O somatorio dos elementos na diagonal foi de: %d",soma);















}
