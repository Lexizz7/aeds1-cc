// Objetivo: Calcular a média de salário dos habitantes
// Nome: Edmar O. Melandes Jr.
// Data: 20/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

void pesquisaHabitantes()
{
    //Declarando as variáveis
    float salario = 0, totalSalario = 0, nFilhos = 0, totalFilhos = 0, totalHabitantes = 0;

    printf("====================\nPesquisa da Prefeitura\nDigite um número negativo para sair do programa\n====================\n");

    //While para continuar repetindo enquanto um salário negativo não for digitado
    while (salario >= 0)
    {
        printf("\nHabitante %.6g\n", totalHabitantes + 1);
        printf("Salário: R$");
        scanf("%f", &salario);

        //If para não contar o número negativo digitado (não influenciar a média)
        if (salario >= 0)
        {
            printf("Número de filhos: ");
            scanf("%f", &nFilhos);

            //Para calcular o total de filhos e salários, somando com os valores antigos
            totalSalario += salario;
            totalFilhos += nFilhos;

            //Para contar quantos habitantes foram inseridos
            totalHabitantes++;
        }
    }

    //If para caso não se tenha nenhum habitante o programa não dar conflito e mostrar na tela
    if (totalHabitantes > 0)
    {
        //Calcular média
        salario = totalSalario / totalHabitantes;

        // Ceil para arredondar para cima a quantidade de filhos
        printf("\nA média salarial é de R$%.6g\n", salario);
    }
    else
    {
        printf("\nVocê não inseriu nenhuma pessoa!\n");
    }
}

int main(void)
{
    // O exercício pediu um programa só para executar o procedimento
    pesquisaHabitantes();

    printf("\nFim do programa\n");

    return 0;
}
