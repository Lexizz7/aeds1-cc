// Objetivo: Calcular o valor de S de acordo com o número de parcelas (N)
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int nParcelas;
    float resultado = 0;

    printf("====================\nFormúla do cálculo:\nS = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n\n====================\n");

    printf("\nDigite o número de N (inteiro e positivo): ");
    scanf("%d", &nParcelas);

    //If para verificar se o número digitado é positivo
    if (nParcelas > 0)
    {
        //For para repetir a parcela (1/N) e somar ao resultado, N vezes
        for (int i = 1; i <= nParcelas; i++)
        {
            //Mostrar a parcela sendo somada
            printf("\n%.6g + 1/%d = %.6g", resultado, i, resultado + (float)1 / i);
            //Somar a parcela ao resultado final
            resultado += (float)1 / i;
        }
        //Mostrar o resultado
        printf("\n\nO resultado é %.6g\n", resultado);
    }
    else
    {
        printf("\nO número digitado é inválido\n");
    }

    printf("\nFim do programa\n");

    return 0;
}