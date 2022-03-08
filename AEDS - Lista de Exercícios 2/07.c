// Objetivo: Mostrar a sequência de Fibonacci
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int nElementos;
    double n0 = 0, n1 = 1, nN;

    printf("====================\nSequência de Fibonacci:\nNúmero máximo para visualização: 1477\n====================\n");

    printf("\nDigite o número de elementos L (inteiro e positivo): ");
    scanf("%d", &nElementos);

    //If para verificar se o número digitado é positivo
    if (nElementos > 0)
    {
        //Mostrar só o primeiro número da sequência caso digite 1, se não, mostrar os 2 primeiros
        if (nElementos == 1)
        {
            printf("\n%.6g", n0);
        }
        else
        {
            printf("\n%.6g, %.6g", n0, n1);
        }

        //Para cada número acima de 2, somar os dois últimos números e trocar os dois últimos números para o próximo elemento
        for (int i = 2; i < nElementos; i++)
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