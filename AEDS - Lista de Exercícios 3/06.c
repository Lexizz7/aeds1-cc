// Objetivo: Calcular o valor de S de acordo com o número de parcelas (N)
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

float calcularS(int nParcelas)
{
    float resultado = 1;

    //For para repetir a parcela (1/N!) e somar ao resultado, N vezes
    for (int i = 1; i <= nParcelas; i++)
    {
        //For para calcular o fatorial, vai ser repetido e multiplicado até chegar no valor correto
        int resFatorial = 1;
        for (int fatorial = 1; fatorial <= i; fatorial++)
        {
            resFatorial = resFatorial * fatorial;
        }

        //Somar a parcela ao resultado final
        resultado += (float)1 / resFatorial;
    }

    return (resultado);
}

int main(void)
{
    int nParcelas;

    printf("====================\nFormúla do cálculo:\nS = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N!\n====================\n");

    printf("Digite o número de N (inteiro e positivo): ");
    scanf("%d", &nParcelas);

    //Calcular apenas se for inteiro e positivo
    if (nParcelas > 0)
    {
        printf("O resultado é %.6g\n", calcularS(nParcelas));
    }
    else
    {
        printf("O número digitado é inválido\n");
    }

    printf("\nFim do programa\n");

    return 0;
}