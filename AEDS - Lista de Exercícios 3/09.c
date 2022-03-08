// Objetivo: Calcular a média de notas dos alunos aprovados
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

float mediaAprovados(int nAlunos)
{
    float nota, notaTotal = 0, alunosAprovados = 0;
    //Receber a nota de cada aluno e armazenar a nota dos aprovados
    for (int aluno = 1; aluno <= nAlunos; aluno++)
    {
        printf("\nNota do Aluno %d: ", aluno);
        scanf("%f", &nota);
        //Condição de aprovação
        if (nota >= 6)
        {
            notaTotal += nota;
            alunosAprovados++;
        }
    }
    //Nota total dos aprovados dividido pelo total de alunos aprovados
    return ((float)notaTotal / alunosAprovados);
}

int main(void)
{
    int nAlunos;

    printf("====================\nMédia de notas dos alunos aprovados\n====================\n");

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &nAlunos);
    //Imprimir a média, chamando a função
    printf("\nA média dos alunos aprovados é %.6g\n", mediaAprovados(nAlunos));

    printf("\nFim do programa\n");
    return 0;
}