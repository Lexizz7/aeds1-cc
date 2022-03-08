#include <stdio.h>

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
    printf("\n");
}

void intercalarVetores(int vetor1[ELEMENTOS], int vetor2[ELEMENTOS])
{
    //Vetor criado para intercalar
    //Tamanho sempre dobrado pois vai receber os dois vetores
    int vetor3[ELEMENTOS * 2];

    for (int i = 0; i < ELEMENTOS * 2; i++)
    {
        //Caso a posição seja par, o valor será do vetor2
        if (i % 2 == 0)
        {
            vetor3[i] = vetor2[i - i / 2];
        }
        //Caso a posição seja impar, o valor será do vetor1
        else
        {
            vetor3[i] = vetor1[i - 1 - i / 2];
        }
    }

    exibirVetor(vetor3, ELEMENTOS * 2);
}

int main()
{
    int vetorX[ELEMENTOS], vetorY[ELEMENTOS];

    printf("\nVetor X:\n");
    preencherVetor(vetorX);

    printf("\nVetor Y:\n");
    preencherVetor(vetorY);

    intercalarVetores(vetorX, vetorY);

    return 0;
}