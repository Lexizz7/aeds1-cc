#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 6

void preencherMatrizes(int matriz1[ROWS][COLS], int matriz2[ROWS][COLS])
{
    //Para cada posição da matriz, recebe um valor inteiro
    //Repetir o número de colunas dentro de uma repetição do número de linhas
    //Para percorrer por toda a matriz
    printf("\nPreencha a matriz A: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    //O mesmo código acima para a segunda matriz
    printf("\nPreencha a matriz B: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
}

int **somaEDiferenca(int matriz1[ROWS][COLS], int matriz2[ROWS][COLS], char tipo)
{
    //Alocar cada matriz dinamicamente
    //Alocação das linhas = tamanho de (int *) vezes a quantidade de linha
    int **matrizSoma = (int **)malloc(sizeof(int *) * ROWS),
        **matrizDiferenca = (int **)malloc(sizeof(int *) * ROWS);

    //Alocação das colunas = tamanho de (int) vezes a quantidade de coluna
    //Repetir para cada linha
    for (int i = 0; i < ROWS; i++)
    {
        matrizSoma[i] = (int *)malloc(sizeof(int) * COLS);
        matrizDiferenca[i] = (int *)malloc(sizeof(int) * COLS);
    }

    //Para cada posição da matriz, somar na matrizSoma e diminuir na matrizDiferenca
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            matrizDiferenca[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    //Escolher o tipo de retorno, soma ou diferença
    if (tipo == 's')
    {
        return matrizSoma;
    }
    else
    {
        return matrizDiferenca;
    }
}

int main()
{
    //Criação de um ponteiro de ponteiro que irá receber o vetor de negativos
    int matrizA[ROWS][COLS], matrizB[ROWS][COLS], **matrizSoma, **matrizDiferenca;

    preencherMatrizes(matrizA, matrizB);

    //Atualizar o ponteiro de ponteiro para o retorno da função
    matrizSoma = somaEDiferenca(matrizA, matrizB, 's');
    matrizDiferenca = somaEDiferenca(matrizA, matrizB, 'd');

    //Imprimir as matrizes
    printf("\nMatriz Soma: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Diferenca: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrizDiferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}