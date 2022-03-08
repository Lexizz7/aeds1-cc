// Objetivo: Calcular raiz da função
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>

int main(void)
{
    // Declarar e armazenar os coeficientes da equação
    // {
    float a, b;

    printf("Digite o valor de a (coeficiente angular): ");
    scanf("%f", &a);
    printf("Digite o valor de b (coeficiente linear): ");
    scanf("%f", &b);
    // }

    // Raiz da equação: -b/a
    // {
    float raiz = ((b * -1) / (a));
    // }

    printf("\nA raíz da equação é: %.6g\n", raiz);

    printf("\nFim do programa\n");

    return 0;
}