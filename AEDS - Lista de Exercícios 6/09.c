#include <stdio.h>

int main(void)
{
    //O programa dá opção de ler um arquivo já existente com as matriculas e telefones
    //e também a opção de criar um arquivo com as matriculas de telefones dos alunos
    int opcao = 0;

    //A matricula e o telefone tiveram que ser double pois int estava dando o limite
    //de valor, então estava saindo valores negativos ao digitar números grandes
    //como um numero de telefone
    //Variável aluno só para organização
    int aluno = 1;
    double matricula = 0,
           telefone = 0;

    printf("Selecione uma opcao:\n");
    printf("1 - Criar arquivo\n");
    printf("2 - Ler arquivo\n");
    scanf("%d", &opcao);

    //Esse if serve para verificar se o usuario digitou uma opcao valida
    if (opcao == 1)
    {
        //Cria o arquivo onde irá registrar os dados dos alunos
        FILE *arquivo = fopen("09.txt", "w");

        printf("\nDigite matricula -1 para encerrar o programa");

        //O programa encerra ao digitar -1 na matricula
        //Então o while serve para repetir enquanto não for digitado -1
        while (matricula != -1)
        {
            printf("\nAluno %d\n", aluno);
            printf("Digite a matricula: ");
            scanf("%lf", &matricula);

            //Caso seja digitado -1 dentro do while, tinha que ser feito um verificador
            //se não, iria escrever -1 no arquivo
            if (matricula != -1)
            {
                printf("Digite o telefone: ");
                scanf("%lf", &telefone);

                //Escreve no arquivo
                fprintf(arquivo, "%.0lf %.0lf\n", matricula, telefone);
                aluno++;
            }
        }

        fclose(arquivo);

        printf("\nArquivo 09.txt criado!");
    }
    else if (opcao == 2)
    {
        //Associa o arquivo ja existente com os dados dos alunos
        FILE *arquivo = fopen("09-leitura.txt", "r");

        //Repete até o final do arquivo
        while (!feof(arquivo))
        {
            //Lê os dados da linha e, respectivamente, armazena em matricula e telefone
            fscanf(arquivo, "%lf %lf\n", &matricula, &telefone);

            printf("\nAluno %d\n", aluno);
            printf("Matricula: %.0lf\n", matricula);
            printf("Telefone: %.0lf\n", telefone);
            aluno++;
        }

        fclose(arquivo);

        printf("\nArquivo 09-leitura.txt lido!");
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}