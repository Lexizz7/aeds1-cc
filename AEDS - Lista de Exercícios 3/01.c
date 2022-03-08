// Objetivo: Calcular a média das 3 notas do aluno
// Nome: Edmar O. Melandes Jr.
// Data: 20/09/2021
// Última atualização: 20/09/2021

#include <stdio.h>
#include <ctype.h>

// Void pois não retorna nenhum valor
void calcMedia(float nota1, float nota2, float nota3, char tipo)
{
    // Caso digite A, mostrar a média aritmética, caso digite P, mostrar a ponderada
    switch (toupper(tipo))
    {
    case 'A':
        printf("A média aritmética é: %.6g\n", ((nota1 + nota2 + nota3) / 3));
        break;
    case 'P':
        printf("A média ponderada é: %.6g\n", (((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2)));
        break;
    default:
        printf("Digite um tipo de média válido (A ou P)\n");
        break;
    }
}

int main(void)
{
    //Declarando as variáveis
    int qAlunos;
    float nota1, nota2, nota3;
    char tipo;

    printf("====================\nCalcular média de notas\nA = Média Aritimética\nP = Média Ponderada (Pesos: 5, 3 e 2)\n====================\n");

    printf("\nDigite o número de alunos: ");
    scanf("%d", &qAlunos);

    // Depois de inserir a quantidade de aluno (qAlunos), repetir o código até que o a variável aluno se iguale a variável qAlunos
    for (int aluno = 1; aluno <= qAlunos; aluno++)
    {
        // Receber as notas de cada aluno
        printf("\nAluno %d\n", aluno);
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);
        printf("Média: ");
        scanf(" %c", &tipo);

        // Chama o procedimento com os parâmetros
        calcMedia(nota1, nota2, nota3, tipo);
    }

    printf("\nFim do programa\n");

    return 0;
}