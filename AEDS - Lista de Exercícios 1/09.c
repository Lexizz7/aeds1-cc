// Objetivo: Mostrar qual símbolo foi digitado
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>

int main(void)
{
    // Ler o símbolo
    // {
    char simbolo;

    printf("Digite um símbolo: ");
    scanf(" %c", &simbolo);
    // }

    // Verificar qual caso se enquadra e printar
    // {
    switch (simbolo)
    {
    case '<':
        printf("\nVocê digitou Sinal de menor (<)\n");
        break;
    case '>':
        printf("\nVocê digitou Sinal de maior (>)\n");
        break;
    case '=':
        printf("\nVocê digitou Sinal de igual (=)\n");
        break;
    default:
        printf("\nVocê digitou um outro sinal (%c)\n", simbolo);
        break;
    }
    // }

    printf("\nFim do programa\n");

    return 0;
}