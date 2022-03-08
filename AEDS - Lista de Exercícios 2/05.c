// Objetivo: Coletar dados dos habitantes da cidade (média do salário, média de filhos)
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declarando as variáveis
    float salario, maiorSalario = 0, nSalarioLimite = 0, totalSalario, nFilhos, totalFilhos, totalHabitantes = 0;

    printf("====================\nDigite um número negativo para sair do programa\n====================\n");

    //While para continuar repetindo enquanto um salário negativo não for digitado
    while (salario >= 0)
    {
        printf("\nPessoa %.6g\n", totalHabitantes + 1);
        printf("Salário: R$");
        scanf("%f", &salario);

        //If para não contar a pessoa com salário negativo
        if (salario >= 0)
        {
            printf("Número de filhos: ");
            scanf("%f", &nFilhos);

            //If para, caso o salário inserido seja maior que o atual maior salário, substituir o valor do maior salario
            if (salario > maiorSalario)
            {
                maiorSalario = salario;
            }
            //Caso o salario seja menor que o limite dado pelo exercício, aumentar o número de salarios dentro do limite
            if (salario < 100)
            {
                nSalarioLimite++;
            }
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
        //Calculos da média e porcentagem
        salario = totalSalario / totalHabitantes;
        nFilhos = totalFilhos / totalHabitantes;
        nSalarioLimite = (nSalarioLimite / totalHabitantes) * 100;

        printf("\nA) Média de salário da população: R$%.4g\nB) Média de filhos da população: %.6g\nC) Maior salário: R$%.6g\nD) %.6g%% das pessoas têm um salário de até R$100\n", salario, ceil(nFilhos), maiorSalario, nSalarioLimite);
    }
    else
    {
        printf("\nVocê não inseriu nenhuma pessoa!\n");
    }

    printf("\nFim do programa\n");

    return 0;
}