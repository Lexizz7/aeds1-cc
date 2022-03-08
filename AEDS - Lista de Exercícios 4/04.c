// Objetivo: Calcular o resto da divisão usando subtração
// Nome: Edmar O. Melandes Jr.
// Data: 01/10/2021
// Última atualização: 01/10/2021

#include <stdio.h>

int resto(int numerador, int denominador)
{
    //Subtrai o denonimador do numerador e verifica se o numerador é maior que o denominador.
    //Caso o numerador seja menor, significa que não é mais divisível por inteiro e retorna o numerador (Resto)
    //Exemplo: 16/5 => 16 - 5 = 11
    //         11/5 => 11 - 5 = 6
    //         6/5  => 6 - 5 = 1
    //         1/5  => 1 - 5 => 1 é menor que 5, portanto retornar 1
    //         Resultado final = 16%5 = 1
    int subtracao = numerador - denominador;
    if (numerador > denominador)
    {
        resto(subtracao, denominador);
    }
    else
    {
        return numerador;
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
    printf("Resto da divisão: %d\n", resto(numerador, denominador));

    printf("\nFim do programa\n");
    return 0;
}