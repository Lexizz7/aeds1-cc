#include <stdio.h>

#define ROWS 4
#define COLS 4

int main()
{
    int matriz[ROWS][COLS], soma = 0;

    //Para cada posição da matriz, recebe um valor inteiro
    //Repetir o número de colunas dentro de uma repetição do número de linhas
    //Para percorrer por toda a matriz
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Soma dos elementos abaixo da diagonal principal e mostrar diagonal principal
    printf("\nDiagonal principal:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //Caso a linha seja maior que a coluna, quer dizer que está abaixo da diagonal principal
            if (i > j)
            {
                //Somar o valor da posição abaixo da diagonal principal
                soma += matriz[i][j];
            }
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                //Mostrar visualmente abaixo da diagonal principal (onde será somado)
                if (i > j)
                {
                    printf("+ ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma);

    return 0;
}