// Objetivo: Ler a média do aluno e mostrar seu conceito
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

// Void pois não retorna nenhum valor
void conceituarAluno(float media)
{
    //Printar o que estiver dentro do intervalo
    if (media <= 39)
    {
        printf("Conceito F\n");
    }
    else if (media <= 59)
    {
        printf("Conceito E\n");
    }
    else if (media <= 69)
    {
        printf("Conceito D\n");
    }
    else if (media <= 79)
    {
        printf("Conceito C\n");
    }
    else if (media <= 89)
    {
        printf("Conceito B\n");
    }
    else if (media >= 90)
    {
        printf("Conceito A\n");
    }
}

int main(void)
{
    //Declarando as variáveis
    int qAlunos;
    float media;

    printf("====================\nConceituar aluno\n====================\n");

    //Ler quantidade de alunos
    printf("\nDigite o número de alunos: ");
    scanf("%d", &qAlunos);

    // Repetir procedimento para cada aluno
    for (int aluno = 1; aluno <= qAlunos; aluno++)
    {
        printf("\nMédia do aluno %d: ", aluno);
        scanf("%f", &media);
        conceituarAluno(media);
    }

    printf("\nFim do programa\n");

    return 0;
}