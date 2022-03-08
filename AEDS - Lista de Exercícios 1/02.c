// Objetivo: Somar 2 números inteiros e caso a soma seja maior ou igual a 10, somar mais 5, se não, somar mais 7
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021
#include <stdio.h>

int main(void)
{
    // Declarar e armazenar os números para soma
    // {
    int number1, number2;

    printf("Digite dois números: ");
    scanf("%d %d", &number1, &number2);
    //}

    int soma = number1 + number2,
        resultado;

    // Caso a soma seja maior ou igual a 10, somar mais 5, se não, somar mais 7
    // {
    if (soma >= 10)
    {
        resultado = soma + 5;
    }
    else
    {
        resultado = soma + 7;
    }
    // }

    printf("\nO resultado final é %d\n", resultado);

    printf("\nFim do programa\n");

    return 0;
}
