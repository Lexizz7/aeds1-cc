// Objetivo: Contar quantos números positivos, negativos e nulos foram digitados
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int numero, nulos = 0, positivos = 0, negativos = 0;

    printf("====================\nDigite 7777 para sair do programa\n====================\n\n");

    //While para continuar repetindo enquanto o número 7777 não for digitado
    while (numero != 7777)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        //If para não contar o número 7777 como um número positivo e influenciar no resultado final
        if (numero != 7777)
        {
            //Caso seja nulo, aumentar a variável nulos
            if (numero == 0)
            {
                nulos++;
            }
            //Caso seja maior que zero, aumentar a variável positivos
            else if (numero > 0)
            {
                positivos++;
            }
            //Caso seja menor que 0, aumentar a variável negativos
            else if (numero < 0)
            {
                negativos++;
            }
        }
    }

    printf("\nVocê digitou %d número(s) positivo(s), %d número(s) negativo(s) e %d número(s) nulo(s)\n", positivos, negativos, nulos);
    printf("\nFim do programa\n");

    return 0;
}