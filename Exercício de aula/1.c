#include <stdio.h>

typedef struct Endereco
{
    char rua[200];
    int numero;
    char complemento[50];
} Endereco;

typedef struct Aluno
{
    char nome[100];
    int idade;
    double notas[3];
    Endereco end;
} Aluno;

void preencherAluno(Aluno *aluno)
{
    printf("***** Dados do aluno ******\n");
    printf("Nome do aluno: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Idade do aluno: ");
    scanf("%d", &aluno->idade);
    for (int prova = 0; prova < 3; prova++)
    {
        printf("Nota da prova %d do aluno: ", (prova + 1));
        scanf("%lf", &aluno->notas[prova]);
    }
    printf("Rua do aluno: ");
    scanf(" %[^\n]", aluno->end.rua);
    printf("Número da rua do aluno: ");
    scanf("%d", &aluno->end.numero);
    printf("Complemento da rua do aluno: ");
    scanf(" %[^\n]", aluno->end.complemento);
}

int alunoMaisVelho(Aluno *aluno, int qnt)
{
    int maiorIdade = aluno->idade;
    int posicao = 0;
    for (int i = 0; i < qnt; i++)
    {
        if (aluno[i].idade > maiorIdade)
        {
            maiorIdade = aluno[i].idade;
            posicao = i;
        }
    }
    return posicao;
}

int numeroAcima500(Aluno *aluno, int qnt)
{
    int acima = 0;
    for (int i = 0; i < qnt; i++)
    {
        if (aluno[i].end.numero > 500)
        {
            acima++;
        }
    }
    return acima;
}

int main()
{
    Aluno alunos[5];
    int qntAlunos = 5;

    for (int i = 0; i < qntAlunos; i++)
    {
        preencherAluno(&alunos[i]);
    }

    printf("\n***** Dados dos alunos ******\n");
    printf("Idade do aluno mais velho: %d\n", alunos[alunoMaisVelho(alunos, qntAlunos)].idade);
    printf("Número de alunos com número acima de 500: %d\n", numeroAcima500(alunos, qntAlunos));

    return 0;
}