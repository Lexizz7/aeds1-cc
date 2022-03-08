// Objetivo: Calcular uma divisão utilizando subtrações
// Nome: Edmar O. Melandes Jr.
// Data: 01/10/2021
// Última atualização: 01/10/2021

#include <stdio.h>

int divisao(int numerador, int denominador)
{
    //Subtrai o denominador do numerador e soma 1 na variável divisões, se repete várias vezes até que a subtração chegue a menos que 0.
    //Exemplo: 15/5 => 15 - 5 = 10 (divisão + 1)
    //         10/5 => 10 - 5 = 5  (divisão + 1)
    //         5/5  => 5  - 5 = 0  (divisão + 1)
    //         0/5  => 0 - 5 = -5  (retorna 0)
    //         Resultado final = 15/5 = 3
    int subtracao = 0, divisoes = 0, negativo = 0;
    if ((numerador > 0 && denominador < 0) || (numerador < 0 && denominador > 0))
    {
        negativo = 1;
    }
    if (numerador < 0)
    {
        numerador = numerador * -1;
    }
    if (denominador < 0)
    {
        denominador = denominador * -1;
    }
    subtracao = numerador - denominador;
    if (subtracao >= 0)
    {
        divisoes++;
        if (negativo == 1)
        {
            return ((divisoes + divisao(subtracao, denominador)) * -1);
        }
        else
        {
            return (divisoes + divisao(subtracao, denominador));
        }
    }
    else
    {
        return divisoes;
    }
}

int main(void)
{
    int numerador, denominador;

    printf("Digite o numerador (Número que será dividido): ");
    scanf("%d", &numerador);
    printf("Digite o denominador (Quantas vezes vai dividir): ");
    scanf("%d", &denominador);

    //Printar o resultado da função
    printf("Divisão: %d\n", divisao(numerador, denominador));

    printf("\nFim do programa\n");
    return 0;
}