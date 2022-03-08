// Objetivo: Calcular o valor de Y
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Declarar e armazenar o valor de X
    // {
    double x;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    // }

    // Dar o valor de Y conforme os intervalos do exercício
    // {
    double y;
    if (x <= 1)
    {
        y = 1;
    }
    else if (1 < x && x <= 2)
    {
        y = 2;
    }
    else if (2 < x && x <= 3)
    {
        y = pow(x, (double)2);
    }
    else if (x > 3)
    {
        y = pow(x, (double)3);
    }
    // }

    printf("\nO valor de Y é: %.6g\n", y);

    printf("\nFim do programa\n");

    return 0;
}