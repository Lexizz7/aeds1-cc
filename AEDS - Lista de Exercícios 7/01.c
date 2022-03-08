#include <stdio.h>

// Define a quantidade de alunos, no caso do enunciado, 10
#define ALUNOS 10

void preencherVetor(int vetor[ALUNOS])
{
    // Para cada posição do vetor, inserir o que o usuário digitar
    // uso do laço for para percorrer o vetor
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Digite a nota do aluno:  ");
        scanf("%d", &vetor[i]);
    }
}

void mediaVetor(int vetor[ALUNOS])
{
    double media = 0;
    int acimaMedia = 0;

    // Para cada posição do vetor, somar seu valor à variável media
    // uso do laço for para percorrer o vetor
    for (int i = 0; i < ALUNOS; i++)
    {
        media += vetor[i];
    }

    // Dividir a soma de todos pelo total para encontrar a média
    media /= ALUNOS;

    // Depois do cálculo da média, percorrer o vetor novamente para
    // identificar quem esteve acima da média
    // (poderia ser maior ou igual para caso de alunos com notas iguais, mas preferi seguir o enunciado)
    for (int i = 0; i < ALUNOS; i++)
    {
        if (vetor[i] > media)
        {
            acimaMedia++;
        }
    }

    printf("\nA media das notas é: %.2f\n", media);
    printf("Alunos acima da média: %d", acimaMedia);
}

int main()
{
    // Declarar o vetor e chamar os respectivos procedimentos
    int notas[ALUNOS];

    preencherVetor(notas);

    mediaVetor(notas);

    return 0;
}