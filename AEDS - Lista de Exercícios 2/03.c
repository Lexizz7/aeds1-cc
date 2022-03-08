// Objetivo: Ler 10 números e mostrar se é divísivel ou não por 3 e 9, por 2 e por 5
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int numero, d3e9 = 0, d2 = 0, d5 = 0, total = 0;

    printf("====================\nDigite 10 números\n====================\n");

    //While para continuar repetindo enquanto não for digitado 10 números
    while (total < 10)
    {
        printf("\nDigite um número: ");
        scanf("%d", &numero);

        //Caso divisível por 3 e por 9, aumentar a variável d3e9 e mostrar na tela
        if (numero % 3 == 0 && numero % 9 == 0)
        {
            d3e9++;
            printf("O número é divisível por 3 e 9\n");
        }
        //Caso divisível por 2, aumentar a variável d2 e mostrar na tela
        if (numero % 2 == 0)
        {
            d2++;
            printf("O número é divisível por 2\n");
        }
        //Caso divisível por 5, aumentar a variável d5 e mostrar na tela
        if (numero % 5 == 0)
        {
            d5++;
            printf("O número é divisível por 5\n");
        }
        if ((numero % 3 != 0 || numero % 9 != 0) && numero % 2 != 0 && numero % 5 != 0)
        {
            printf("Número não é divisivel pelos valores\n");
        }

        total++;
    }

    printf("\nNúmeros digitados:\n%d são divisíveis por 3 e 9\n%d são divisíveis por 2\n%d são divisíveis por 5\n", d3e9, d2, d5);

    printf("\nFim do programa\n");

    return 0;
}