// Objetivo: Calcular o aumento de salário
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Ler as opções e o salário
    // {
    char opcao;
    float salario;

    printf("Digite o valor do salário: R$ ");
    scanf("%f", &salario);

    printf("Selecione uma opção:\nA = Aumento de 8%% no salário\nB = Aumento de 11%% no salário\nC = Aumento fixo no salário\n");
    scanf(" %c", &opcao);

    // }

    // Fazer os calculos conforme as condições
    // {
    // Função para deixar a letra maiuscula (biblioteca ctype.h)
    switch (toupper(opcao))
    {
    case 'A':
        salario = (salario + (salario * 0.08));
        break;
    case 'B':
        salario = (salario + (salario * 0.11));
        break;
    case 'C':
        // Descobrir se é menor ou maior que 1000 reais e aplicar o aumento fixo
        if (salario <= 1000)
        {
            salario += 350;
        }
        else if (salario > 1000)
        {
            salario += 200;
        }
        break;
    }
    // }

    printf("\nO novo salário é de R$ %f\n", salario);

    printf("\nFim do programa\n");

    return 0;
}