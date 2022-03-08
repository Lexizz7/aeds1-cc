#include <stdio.h>

//Conjunto de pessoas
#define PESSOAS 40

//Estrutura de cada pessoa, inclui nome, dia de aniversario e mes de aniversario
typedef struct Pessoa
{
    char nome[100];
    int diaAniversario;
    int mesAniversario;
} Pessoa;

//Procedimento para preencher os dados de cada pessoa
void preencherPessoa(Pessoa *pessoa)
{
    printf("Digite o nome: ");
    //Salva o que foi digitado como uma string dentro do nome da pessoa
    scanf("%s", pessoa->nome);

    printf("Digite o dia de aniversario: ");
    //Salva o número digitado dentro do dia de aniversário
    scanf("%d", &pessoa->diaAniversario);
    //Para verificar se é um dia válido, o laço while irá se repetir até que insira um dia entre 1 e 31
    while (pessoa->diaAniversario > 31 || pessoa->diaAniversario < 1)
    {
        printf("Dia invalido!\n");
        printf("Digite o dia de aniversario: ");
        scanf("%d", &pessoa->diaAniversario);
    }

    printf("Digite o mes de aniversario: ");
    //Salva o número digitado dentro do mes de aniversário
    scanf("%d", &pessoa->mesAniversario);
    //Para verificar se é um mes válido, o laço while irá se repetir até que insira um mes entre 1 e 12
    while (pessoa->mesAniversario > 12 || pessoa->mesAniversario < 1)
    {
        printf("Mes invalido!\n");
        printf("Digite o mes de aniversario: ");
        scanf("%d", &pessoa->mesAniversario);
    }
}

int main()
{
    //Declarando todo o conjunto de pessoas
    Pessoa pessoa[PESSOAS];

    //Preencher cada uma delas
    for (int i = 0; i < PESSOAS; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        preencherPessoa(&pessoa[i]);
    }

    //Após preencher, para cada mês (1 a 12), percorrer por todas as pessoas mostrando apenas aquelas que forem do mês indicado
    for (int i = 1; i <= 12; i++)
    {
        printf("\nMes %d\n\n", i);
        for (int k = 0; k < PESSOAS; k++)
        {
            //Caso o mês da pessoa seja o mesmo do mês que está sendo percorrido, irá mostrar
            if (pessoa[k].mesAniversario == i)
            {
                printf("%s, dia %d\n", pessoa[k].nome, pessoa[k].diaAniversario);
            }
        }
    }

    //Os meses vazios significam que ninguem faz aniversário naquele mês

    return 0;
}