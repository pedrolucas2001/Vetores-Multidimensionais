#include <stdio.h>
#include <stdlib.h>
/*Leia 6 notas de 5 alunos e apresente a media*/
int main()
{
    float notas[5][6]; /*Declara��o de Matriz*/
    float media;
    int i,j;           /*Declara��o do �ndice*/

    /*Leitura de dados */
    for(i=0;i<5;i++)        /*Lendo informa��es de alunos*/
    {

        for(j=0;j<6;j++)    /*Lendo informa��es das notas dos alunos*/
        {
            printf("Digite a nota %d do aluno %d: ",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }

    /*Apresenta��o de resultados*/
    for(i=0;i<5;i++)
    {
        media = 0;
        for(j=0;j<6;j++)
        {
            printf("A nota %d do aluno %d foi de: %.2f \n",j+1,i+1,notas[i][j]);
            media = media + notas[i][j];
        }
        media = media / 6;
        printf("A media do aluno foi: %.2f \n\n\n ",media);
    }





    return 0;
}
