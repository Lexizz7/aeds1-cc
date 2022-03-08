// Objetivo: Mostrar o percentual de números positivos, negativos e nulos em comparação ao total digitado
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    float numero, nulos = 0, positivos = 0, negativos = 0, total = 0;

    printf("====================\nDigite 7777 para sair do programa\n====================\n\n");

    //While para continuar repetindo enquanto o número 7777 não for digitado
    while (numero != 7777)
    {
        printf("Digite um número inteiro: ");
        scanf("%f", &numero);

        //If para não contar o número 7777 como um número positivo e influenciar no resultado final
        if (numero != 7777)
        {
            //Caso seja 0, aumentar a variável nulos e aumentar o total
            if (numero == 0)
            {
                nulos++;
                total++;
            }
            //Caso seja maior que zero, aumentar a variável positivos e aumentar o total
            else if (numero > 0)
            {
                positivos++;
                total++;
            }
            //Caso seja menor que 0, aumentar a variável negativos e aumentar o total
            else if (numero < 0)
            {
                negativos++;
                total++;
            }
        }
    }

    //Dividir a quantidade pelo total e multiplicar por 100 pra descobrir a porcentagem
    positivos = (positivos / total) * 100;
    negativos = (negativos / total) * 100;
    nulos = (nulos / total) * 100;

    printf("\nPorcentagem dos números digitados:\n%.6g%% Positivos\n%.6g%% Negativos\n%.6g%% Nulos\n", positivos, negativos, nulos);
    printf("\nFim do programa\n");

    return 0;
}