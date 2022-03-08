// Objetivo: Contar as casas de um número
// Nome: Edmar O. Melandes Jr.
// Data: 01/10/2021
// Última atualização: 01/10/2021

#include <stdio.h>

int contarCasas(int numero)
{
    int casas = 0;

    //Dividir o número por 10 até ele ser < 1
    //A cada divisão somar + 1 nas casas e retornar tudo
    if (numero > 0)
    {
        casas++;
        return (casas + contarCasas((numero / 10)));
    }
    //Caso o número chegue a 0 (< 1)
    else
    {
        return casas;
    }
}

int main(void)
{
    int numero;

    printf("Digite um número para contar casas: ");
    scanf("%d", &numero);

    //Printar o resultado da função
    printf("Número de casas: %d\n", contarCasas(numero));

    printf("\nFim do programa\n");
    return 0;
}