#include <stdio.h>

#define ROWS 10
#define COLS 10

//Como o enunciado não deixou claro que precisa criar uma nova matriz,
//Cada procedimento apenas imprime condicionalmente para mostrar o resultado esperado

void preencherEExibirMatriz(int matriz[ROWS][COLS])
{
    //Para cada posição da matriz, recebe um valor inteiro
    //Repetir o número de colunas dentro de uma repetição do número de linhas
    //Para percorrer por toda a matriz
    printf("\nPreencha a matriz: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimir a matriz digitada
    printf("\nMatriz digitada: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void trocarLinhas(int matriz[ROWS][COLS], int linha1, int linha2)
{
    printf("\nLinhas %d e %d trocadas: \n", linha1, linha2);
    linha1 -= 1;
    linha2 -= 1;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //Caso esteja na linha passada por parametro, troca a linha com a outra linha passada por parametro
            if (i == linha1)
            {
                //Ao inves de imprimir [linha1][j], imprimir [linha2][j]
                printf("%d ", matriz[linha2][j]);
            }
            else if (i == linha2)
            {
                //Ao inves de imprimir [linha2][j], imprimir [linha1][j]
                printf("%d ", matriz[linha1][j]);
            }
            else
            {
                //Para mostrar os outros elementos da matriz
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void trocarColunas(int matriz[ROWS][COLS], int coluna1, int coluna2)
{
    printf("\nColunas %d e %d trocadas: \n", coluna1, coluna2);
    coluna1 -= 1;
    coluna2 -= 1;

    //Basicamente o mesmo raciocínio da função trocarLinhas
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //Inverter os valores de coluna1 e coluna2
            if (j == coluna1)
            {
                printf("%d ", matriz[i][coluna2]);
            }
            else if (j == coluna2)
            {
                printf("%d ", matriz[i][coluna1]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void trocarDiagonais(int matriz[ROWS][COLS])
{
    printf("\nDiagonais trocadas: \n");

    //Para trocar as diagonais não precisa de nenhum parâmetro, já que os valores estão na matriz
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //Caso i == j significa que estamos na diagonal principal
            //Então, trocar o valor pelo valor da diagonal secundária
            if (i == j)
            {
                printf("%d ", matriz[i][COLS - 1 - j]);
            }
            //Se i + j for igual ao tamanho da matriz, significa que estamos na diagonal secundária
            //Então apenas colocar o valor da diagonal principal [i][i], já que os elementos da diagonal
            //principal estão em posições de número igual
            else if (i + j == COLS - 1)
            {
                printf("%d ", matriz[i][i]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void trocarLinhaEColuna(int matriz[ROWS][COLS], int linha, int coluna)
{
    printf("\nLinha %d e coluna %d trocadas: \n", linha, coluna);
    linha -= 1;
    coluna -= 1;

    //Seguindo o mesmo raciocínio da função trocarLinhas e trocarColunas
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //Caso a linha atual (i) seja a linha desejada a trocar,
            //mudar o valor da linha pelo da coluna (j) e mudar o valor da coluna
            //para a constante passada pelo parâmetro
            if (i == linha)
            {
                printf("%d ", matriz[j][coluna]);
            }
            //Fazer o mesmo para a coluna, mudando o valor da coluna pelo da linha
            //e manter o valor da linha pela constante
            else if (j == coluna)
            {
                printf("%d ", matriz[linha][i]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    //Chamar as funções e armazenar os valores na matriz
    int matriz[ROWS][COLS];
    preencherEExibirMatriz(matriz);

    trocarLinhas(matriz, 2, 8);
    trocarColunas(matriz, 4, 10);
    trocarDiagonais(matriz);
    trocarLinhaEColuna(matriz, 5, 10);

    return 0;
}