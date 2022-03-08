// Objetivo: Função que verifica se o número é positivo ou negativo
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>
#include <stdbool.h>

//Função bool para retornar se é positivo ou não (true or false)
//Não inclui o 0 pois o 0 é nulo (nem true nem false)
bool positivo(int numero)
{
    if (numero > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int numero = 1;

    printf("====================\nVerifique se o número é positivo ou negativo\nDigite 0 para sair do programa\n====================\n");

    //Se o número for 0, parar o programa
    while (numero != 0)
    {
        printf("\nInsira um número inteiro: ");
        scanf("%d", &numero);

        //Se o número for 0, parar o programa
        if (numero != 0)
        {
            //Se receber true é porque é positivo
            if (positivo(numero))
            {
                printf("O número é positivo!\n");
            }
            else
            {
                printf("O número é negativo!\n");
            }
        }
    }

    printf("\nFim do programa\n");

    return 0;
}