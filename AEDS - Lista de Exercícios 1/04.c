// Objetivo: Verificar o estado da sua nota
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021
#include <stdio.h>

int main(void)
{
    // Declarar e armazenar a nota
    // {
    float nota;

    printf("Digite a nota da prova: ");
    scanf("%f", &nota);
    // }

    // Verificar em qual intervalo ela se encaixa e mostrar a respectiva mensagem
    // {
    if (nota >= 8 && nota <= 10)
    {
        printf("\nÓtimo! :D\n");
    }
    else if (nota >= 7 && nota < 8)
    {
        printf("\nBom :)\n");
    }
    else if (nota >= 5 && nota < 7)
    {
        printf("\nRegular :(\n");
    }
    else if (nota < 5)
    {
        printf("\nInsatisfatório >:(\n");
    }
    // }

    printf("\nFim do programa\n");

    return 0;
}
