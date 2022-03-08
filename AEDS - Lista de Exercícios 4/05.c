// Objetivo: Calcular o valor de S = 1/1! + 1/2! + 1/3! + ... + 1/N!
// Nome: Edmar O. Melandes Jr.
// Data: 01/10/2021
// Última atualização: 01/10/2021

#include <stdio.h>

double serie(int N)
{
    //Calcula o fatorial de N e retorna 1/N! + 1/(N-1)! até que N = 1
    //Como o valor retornado não é o valor total de N, tive que fazer um processo reverso
    //no cálculo do fatorial, para retornar ao valor inteiro
    //Exemplo: N = 3
    //         3 * serie(2) não retorna "3 * 2 * 1" e sim "3 * (1/2 + serie(1))"
    //         Por isso, o cálculo do fatorial foi o reverso do retorno:
    //         3 * (1/(serie(2) - serie(1))) = 3 * 2 * 1
    double fatorial = 0;
    if (N > 1)
    {
        fatorial = N * (1 / (serie(N - 1) - serie(N - 2)));

        return ((1 / fatorial) + serie(N - 1));
    }
    else if (N == 1)
    {
        return N;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int N;
    printf("====================\nFormúla do cálculo:\nS = 1/1! + 1/2! + 1/3! + ... + 1/N!\n====================\n");

    printf("Digite o número de termos (N): ");
    scanf("%d", &N);

    //Para não permitir um número de termos menor ou igual a 0
    if (N > 0)
    {
        printf("S = %.6g\n", serie(N));
    }
    else
    {
        printf("\nO valor de N deve ser maior que 0\n");
    }

    printf("\nFim do programa\n");
    return 0;
}