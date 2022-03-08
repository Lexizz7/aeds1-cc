// Objetivo: Exibir conjuntos inseridos em ordem crescente
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

//Procedimento para deixar os números em ordem crescente
void ordenar(int valor1, int valor2, int valor3)
{
    //Fazer o comparativo entre os números
    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("\nO conjunto em ordem crescente é: { %d, %d, %d }\n", valor1, valor2, valor3);
    }
    //Se o valor 1 for menor que os outros dois valores, mostrar ele primeiro e depois comparar os dois que sobraram da mesma maneira,
    //imprimindo o menor deles primeiro.
    //Os outros Ifs são iguais a esse porém comparando cada um dos 3 valores (3 ifs)
    if (valor1 < valor2 && valor1 < valor3)
    {
        printf("\nO conjunto em ordem crescente é: { %d,", valor1);
        if (valor2 < valor3)
        {
            printf(" %d,", valor2);
            printf(" %d }\n", valor3);
        }
        else
        {
            printf(" %d,", valor3);
            printf(" %d }\n", valor2);
        }
    }
    if (valor2 < valor1 && valor2 < valor3)
    {
        printf("\nO conjunto em ordem crescente é: { %d,", valor2);
        if (valor1 < valor3)
        {
            printf(" %d,", valor1);
            printf(" %d }\n", valor3);
        }
        else
        {
            printf(" %d,", valor3);
            printf(" %d }\n", valor1);
        }
    }
    if (valor3 < valor1 && valor3 < valor2)
    {
        printf("\nO conjunto em ordem crescente é: { %d,", valor3);
        if (valor1 < valor2)
        {
            printf(" %d,", valor1);
            printf(" %d }\n", valor2);
        }
        else
        {
            printf(" %d,", valor2);
            printf(" %d }\n", valor1);
        }
    }
}

int main(void)
{
    //Declarar as variáveis, número de conjuntos e os valores a ser digitados
    int conjuntos = 0, valor1 = 0, valor2 = 0, valor3 = 0;

    printf("====================\nMostrar conjuntos de 3 valores em ordem crescente\n====================\n");

    printf("Digite a quantidade de conjuntos: ");
    scanf("%d", &conjuntos);

    //For para repetir o procedimento quantas vezes o usuário inseriu
    for (int conjunto = 1; conjunto <= conjuntos; conjunto++)
    {
        printf("\nConjunto desordenado %d:\n", conjunto);
        printf("Valor 1: ");
        scanf("%d", &valor1);
        printf("Valor 2: ");
        scanf("%d", &valor2);
        printf("Valor 3: ");
        scanf("%d", &valor3);

        //Chamar o procedimento
        ordenar(valor1, valor2, valor3);
    }

    printf("\nFim do programa\n");

    return 0;
}