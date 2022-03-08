// Objetivo: Calcular o valor de E de acordo com o número de parcelas (N)
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int nParcelas;
    float resultado = 1;

    printf("====================\nFormúla do cálculo:\nE = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N!\n====================\n");

    printf("Digite o número de N (inteiro e positivo): ");
    scanf("%d", &nParcelas);

    //If para verificar se o número digitado é positivo
    if (nParcelas > 0)
    {
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

        printf("O resultado é %.6g\n", resultado);
    }
    else
    {
        printf("O número digitado é inválido\n");
    }

    printf("\nFim do programa\n");

    return 0;
}