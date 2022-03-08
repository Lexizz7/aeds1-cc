// Objetivo: Receber o ano de nascimento, calcular a idade da pessoa e dizer se pode tirar CNH
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021
#include <stdio.h>
#include <time.h>

int main(void)
{
    // Pegar a data do sistema
    // {
    time_t rawData = time(NULL);

    struct tm data = *localtime(&rawData);
    // }

    // Filtrar somente o ano da data (começa a contar a partir de 1900)
    // {
    const int anoAtual = data.tm_year + 1900;
    // }

    // Sei que não precisava fazer assim, e eu também não sabia, só fiquei curioso
    // pra saber se tinha jeito e pesquisei bastante pra achar

    // Declarar e armazenar dados do usuário (ano de nascimento e se já fez aniversário)
    // {
    int anoNasc;
    char fezAniv;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNasc);
    printf("\nVocê já fez aniversário esse ano?\nDigite 'S' para sim e 'N' para não\n");
    scanf(" %c", &fezAniv);
    // }

    // Calcular idade com base na resposta se fez aniversário
    // {
    int idade;
    if (fezAniv == 'S' || fezAniv == 's')
    {
        idade = anoAtual - anoNasc;
    }
    else if (fezAniv == 'N' || fezAniv == 'n')
    {
        idade = (anoAtual - anoNasc - 1);
    }
    // }

    // Um filtro pra ninguém colocar um ano que não chegou
    // {
    if (idade < 0)
    {
        printf("\nNão faz sentido você nascer em um ano que não chegou (ou você tem meses de idade).\n");
    }
    // }
    else if (idade >= 18)
    {
        printf("\nVocê tem %d anos e já pode tirar sua Carteira de Habilitação!\n", idade);
    }
    else
    {
        printf("\nVocê tem %d anos!\n", idade);
    };

    printf("\nFim do programa\n");

    return 0;
}