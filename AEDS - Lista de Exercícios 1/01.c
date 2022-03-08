// Objetivo: Ler dois números e mostrar qual é o maior (ou se são iguais)
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>

int main(void)
{
    // Declarar as variáveis e armazenar os valores digitados.
    // {
    float number1, number2;

    printf("Digite dois números: ");
    scanf("%f %f", &number1, &number2);
    // }

    // Condicional para saber se os números são iguais.
    // {
    if (number1 == number2)
    {
        printf("\nOs números são iguais!\n");
    }
    // }
    // Se não forem iguais, descobrir se o 1 é maior que o 2, se sim, imprimir, se não, imprimir o contrário.
    // {
    else if (number1 > number2)
    {
        printf("\nO número %.6g é maior que %.6g\n", number1, number2);
    }
    else
    {
        printf("\nO número %.6g é maior que %.6g\n", number2, number1);
    }
    // }

    printf("\nFim do programa\n");

    return 0;
}