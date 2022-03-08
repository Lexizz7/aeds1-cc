// Objetivo: Mostrar a sequência de Fibonacci até que seja menor que um número dado
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int nLimite;
    double n0 = 0, n1 = 1, nN;

    printf("====================\nSequência de Fibonacci:\nNúmero máximo para visualização: 1477\n====================\n");

    printf("\nDigite o número limite L (inteiro e positivo): ");
    scanf("%d", &nLimite);

    //If para verificar se o número digitado é positivo
    if (nLimite > 0)
    {
        //Se for 1, mostrar apenas o 0, se não, mostrar "0, 1"
        if (nLimite == 1)
        {
            printf("\n%.6g", n0);
        }
        else
        {
            printf("\n%.6g, %.6g", n0, n1);
        }

        //Para cada número acima de 2, somar os dois últimos números e trocar os dois últimos números para o próximo elemento
        //Se repete até a próxima soma ser maior que o número limite dado
        for (int i = 2; n0 + n1 < nLimite; i++)
        {
            nN = n0 + n1;
            printf(", %.18g", nN);

            n0 = n1;
            n1 = nN;
        }

        printf(", ...\n");
    }
    else
    {
        printf("\nO número digitado é inválido\n");
    }

    printf("\nFim do programa\n");

    return 0;
}