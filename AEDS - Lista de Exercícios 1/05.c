// Objetivo: Calcular o valor promocional, o valor total arrecadado e o lucro (Diferença)
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>

int main(void)
{
    // Valores dados pelo exercício
    // {
    const float nApartamentos = 75,
                desconto = 0.25,
                ocNormal = 0.5,
                ocPromo = 0.8;
    // }

    // Declarar o valor e armazenar na variável
    // {
    float valorNormal;

    printf("Digite o valor normal da diária: R$ ");
    scanf("%f", &valorNormal);
    // }

    // Calcular e imprimir
    // {
    float valorPromo = (valorNormal - (valorNormal * desconto)),
          totalPromo = valorPromo * (ocPromo * nApartamentos),
          totalNormal = valorNormal * (ocNormal * nApartamentos),
          diferenca = totalPromo - totalNormal;

    printf("\nA) O valor promocional é R$ %.6g\n", valorPromo);
    printf("B) O valor total arrecadado em promoção é R$ %.6g\n", totalPromo);
    printf("C) O valor total arrecadado normalmente é R$ %.6g\n", totalNormal);
    printf("D) O valor da diferença é R$ %.6g\n", diferenca);
    // }

    printf("\nFim do programa\n");

    return 0;
}
