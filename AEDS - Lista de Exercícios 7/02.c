#include <stdio.h>
#include <stdlib.h>

//Máximo de elementos do vetor
#define ELEMENTOS 10

void preencherVetor(int vetor[ELEMENTOS])
{
    // Para cada posição do vetor, inserir o que o usuário digitar
    // uso do laço for para percorrer o vetor
    for (int i = 0; i < ELEMENTOS; i++)
    {
        printf("Digite um valor:  ");
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[ELEMENTOS], int tamanho)
{
    // Para cada posição do vetor, exibir o que está nela
    // uso do laço for para percorrer o vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int *vetorNegativo(int vetor[ELEMENTOS], int *tamanho)
{
    //Alocação dinâmica para o vetor de negativos
    //A ideia é criar o ponteiro para o vetor de negativos e retornar o ponteiro
    int *vetorN = (int *)malloc(sizeof(int) * ELEMENTOS), contador = 0;

    // Para cada posição do vetor, verificar se o valor é negativo
    // uso do laço for para percorrer o vetor
    for (int i = 0; i < ELEMENTOS; i++)
    {
        // Se o valor for negativo, inserir na posição do vetor de negativos e aumentar o contador
        if (vetor[i] < 0)
        {
            vetorN[contador] = vetor[i];
            contador++;
        }
    }

    // Atualizar o tamanho do vetor de negativos para o main
    *tamanho = contador;

    // Retornar o ponteiro para o vetor de negativos
    return vetorN;
}

int main()
{
    //Criação de um ponteiro que irá receber o vetor de negativos
    int vetorX[ELEMENTOS], *vetorXNegativo, qntNegativo = 0;

    preencherVetor(vetorX);

    //Atualizar o ponteiro criado para o retorno da função
    vetorXNegativo = vetorNegativo(vetorX, &qntNegativo);

    //Exibir o vetor de negativos
    exibirVetor(vetorXNegativo, qntNegativo);

    return 0;
}