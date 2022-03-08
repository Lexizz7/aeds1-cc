// Objetivo: Verificar a existência e tipo do triangulo
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

//Procedimento para verificar se o triangulo existe
void triangulo(double lado1, double lado2, double lado3)
{
    //Se a soma de dois lados for menor que o outro lado, não existe
    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
    {
        //Verificar o tipo de triangulo, se todos os lados sao iguais, se ao menos 2 são iguais ou se todos são diferentes
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("É um triângulo equilátero!\n");
        }
        if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
        {
            printf("É um triângulo isósceles!\n");
        }
        if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
        {
            printf("É um triângulo escaleno!\n");
        }
    }
    else
    {
        printf("O triângulo não existe!\n");
    }
}

int main(void)
{
    //ID do triângulo para visualização
    int trianguloID = 1;
    double lado1, lado2, lado3;

    printf("\n==========================\nVerificar a existência e tipo do triangulo\nDigite um lado negativo ou nulo para sair\n==========================\n");

    //Ler os tres lados do triângulo
    printf("\nTriângulo %d\n", trianguloID);
    printf("Digite os valores dos lados: ");
    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
    //Caso não tenha nenhum lado negativo ou nulo, chamar procedimento
    if (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {
        trianguloID++;
        triangulo(lado1, lado2, lado3);
    }

    //Repetir o algoritmo a cima enquanto não tiver um lado nulo ou negativo
    while (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {
        printf("\nTriângulo %d\n", trianguloID);
        printf("Digite os valores dos lados: ");
        scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
        if (lado1 > 0 && lado2 > 0 && lado3 > 0)
        {
            trianguloID++;
            triangulo(lado1, lado2, lado3);
        }
    }

    printf("\nFim do programa\n");

    return 0;
}