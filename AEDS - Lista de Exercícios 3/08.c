// Objetivo: Calcular o valor de S de acordo com o número de parcelas (N)
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

float calcularS(int nParcelas)
{
    float resultado = 0;

    //For para repetir a parcela (n²+1)/(n+3) e somar ao resultado, N vezes
    for (int parcela = 1; parcela <= nParcelas; parcela++)
    {
        //Somar a parcela ao resultado final
        resultado += (float)((parcela * parcela) + 1) / (parcela + 3);
    }

    return (resultado);
}

int main(void)
{
    int nParcelas;

    printf("====================\nFormúla do cálculo:\nS = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n²+1)/(n+3)\n====================\n");

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