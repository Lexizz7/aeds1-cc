#include <stdio.h>

#define ROWS 5
#define COLS 5

void preencherMatriz(int matriz[ROWS][COLS])
{
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
}

int somaLinha(int matriz[ROWS][COLS], int linha)
{
    //Percorrer por toda linha dada e somar todos os elementos dessa linha à variável soma
    int soma = 0;
    for (int i = 0; i < COLS; i++)
    {
        soma += matriz[linha][i];
    }
    return soma;
}

int somaColuna(int matriz[ROWS][COLS], int coluna)
{
    //Percorrer por toda coluna dada e somar todos os elementos dessa linha à variável soma
    int soma = 0;
    for (int i = 0; i < ROWS; i++)
    {
        soma += matriz[i][coluna];
    }
    return soma;
}

int somaDiagonalPrincipal(int matriz[ROWS][COLS])
{
    //Percorrer por toda matriz e somar todos os elementos que forem de posições que estão na diagonal principal
    //Ou seja, linha == coluna
    int soma = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int somaDiagonalSecundaria(int matriz[ROWS][COLS])
{
    //Percorrer por toda matriz e somar todos os elementos que forem de posições que estão na diagonal secundaria
    //Ou seja, linha + coluna = 4
    int soma = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i + j == 4)
            {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int somaElementosMatriz(int matriz[ROWS][COLS])
{
    //Percorrer por toda matriz e somar todos os elementos de qualquer posição
    int soma = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main()
{
    int matriz[ROWS][COLS], resLinha = 0, resColuna = 0, resDiagonalPrincipal = 0, resDiagonalSecundaria = 0, resElementosMatriz = 0;

    //Preenche a matriz
    preencherMatriz(matriz);

    //Atribui a cada variável o retorno das funções
    resLinha = somaLinha(matriz, 3);
    resColuna = somaColuna(matriz, 1);
    resDiagonalPrincipal = somaDiagonalPrincipal(matriz);
    resDiagonalSecundaria = somaDiagonalSecundaria(matriz);
    resElementosMatriz = somaElementosMatriz(matriz);

    printf("Soma da linha 4: %d\n", resLinha);
    printf("Soma da coluna 2: %d\n", resColuna);
    printf("Soma da diagonal principal: %d\n", resDiagonalPrincipal);
    printf("Soma da diagonal secundaria: %d\n", resDiagonalSecundaria);
    printf("Soma dos elementos da matriz: %d\n", resElementosMatriz);

    return 0;
}