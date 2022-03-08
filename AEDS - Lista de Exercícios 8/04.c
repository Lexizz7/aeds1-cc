#include <stdio.h>
#include <ctype.h>

#define LIVROS 1500

//Define a estrutura livro
typedef struct Livro
{
    int codigo,
        area; //1 para exatas, 2 para humanas, 3 para biologicas
    char doacao,
        titulo[100],
        autor[100],
        editora[100];

} Livro;

//Procedimento para que todos os livros tenham valores padrões e nulos
void padronizarLivros(Livro *livros)
{
    livros->codigo = 0;
    livros->area = 0;
    livros->doacao = ' ';
    livros->titulo[0] = '\0';
    livros->autor[0] = '\0';
    livros->editora[0] = '\0';
}

//Procedimento para preencher os dados de cada livro
void preencherLivro(Livro *livro, int area)
{
    printf("Codigo de catalogacao: ");
    scanf("%d", &livro->codigo); //Codigo de catalogacao

    printf("Doacao (S ou N): ");
    scanf(" %c", &livro->doacao);                        //Informa se é doado ou nao
    livro->doacao = toupper(livro->doacao);              //Coloca letra em maiusculo para evitar erros
    while (livro->doacao != 'S' && livro->doacao != 'N') //Caso o usuario digite algo diferente de S ou N
    {
        printf("Letra invalida, digite novamente: ");
        scanf(" %c", &livro->doacao);
        livro->doacao = toupper(livro->doacao);
    }

    printf("Titulo: ");
    scanf(" %[^\n]", livro->titulo); //Titulo do livro

    printf("Autor: ");
    scanf(" %[^\n]", livro->autor); //Autor do livro

    printf("Editora: ");
    scanf(" %[^\n]", livro->editora); //Editora do livro

    livro->area = area;
}

int main()
{
    //Declaração de variaveis e dos tres vetores para cada area
    Livro exatas[LIVROS],
        humanas[LIVROS],
        biologicas[LIVROS];
    int area = 0,
        codigo = 0,
        qntExatas = 0,
        qntHumanas = 0,
        qntBiologicas = 0;

    //Colocar os valores padrão em cada livro (Usei isso pra filtrar os espaços vazios)
    //Por exemplo, um livro vazio terá o codigo 0, a area 0, o doacao ' ', o titulo ' ' e o autor ' '
    //Então, eu coloco para não mostrar caso tenha area 0
    for (int i = 0; i < LIVROS; i++)
    {
        padronizarLivros(&exatas[i]);
        padronizarLivros(&humanas[i]);
        padronizarLivros(&biologicas[i]);
    }

    //Preencher cada livro e colocar em seu respectivo vetor
    for (int i = 0; i < LIVROS; i++)
    {
        area = 0;
        printf("\nLivro %d\n", i + 1);
        printf("\nSelecione a area: \n");
        printf("1 - Exatas\n");
        printf("2 - Humanas\n");
        printf("3 - Biologicas\n");
        scanf("%d", &area); //Receber a area do livro a ser preenchido, para colocar no vetor correto

        while (area < 1 || area > 3) //Caso a área seja inválida (menor que 1 ou maior que 3)
        {
            printf("\nArea invalida, digite novamente: ");
            scanf("%d", &area);
        }

        //Para cada código de área mostrar em escrito qual ela significa e preencher no vetor correto
        switch (area)
        {
        case 1:
            printf("Area: Exatas\n");
            preencherLivro(&exatas[qntExatas], area);
            qntExatas++; //Somar para contabilizar quantos livros de exatas tem
            break;
        case 2:
            printf("Area: Humanas\n");
            preencherLivro(&humanas[qntHumanas], area);
            qntHumanas++; //Somar para contabilizar quantos livros de humanas tem
            break;
        case 3:
            printf("Area: Biologicas\n");
            preencherLivro(&biologicas[qntBiologicas], area);
            qntBiologicas++; //Somar para contabilizar quantos livros de biologicas tem
            break;
        }
    }

    printf("\nConsulta de livros registrados (digite -1 para sair): \n");

    //Enquanto não for digitado -1, continuar a consulta
    while (area != -1)
    {
        //Verificar se o código não é -1 também
        if (codigo != -1)
        {

            printf("\nSelecione a area: \n");
            printf("1 - Exatas\n");
            printf("2 - Humanas\n");
            printf("3 - Biologicas\n");
            scanf("%d", &area);
            //Caso a área digitada seja -1, irá ignorar todos os ifs abaixo
            if (area != -1)
            {
                //Verificar se a área digitada é válida
                while (area < 1 || area > 3)
                {
                    printf("\nArea invalida, digite novamente: ");
                    scanf("%d", &area);
                }
            }
            if (area != -1)
            {
                //Após decidir a área, tem a opção de mostrar todos os livros dessa área (0) ou um código especifico de livro
                //Digitar -1 aqui também encerra o programa
                printf("Digite o codigo de catalogacao (0 para mostrar todos e -1 para sair): ");
                scanf("%d", &codigo);
                if (codigo != -1)
                {
                    //Percorrer por todos os livros
                    for (int i = 0; i < LIVROS; i++)
                    {
                        //Decidir qual vetor mostrar, através da área informada pelo usuário
                        switch (area)
                        {
                        case 1: //Caso seja exatas
                            //Verificar se a área está entre 1 e 3
                            //Por esse motivo criei o padronizador de livros acima
                            //Assim, as posições não preenchidas do vetor não aparecerão
                            if (exatas[i].area <= 3 || exatas[i].area >= 1)
                            {
                                //Se o codigo for 0, mostrar todos os livros sem filtro
                                if (codigo == 0)
                                {
                                    //Verificar se a área é 0, para nao mostrar (para posições não preenchidas)
                                    if (exatas[i].area != 0)
                                    {
                                        printf("\nCodigo: %d\n", exatas[i].codigo);
                                        printf("Doacao: %c\n", exatas[i].doacao);
                                        printf("Titulo: %s\n", exatas[i].titulo);
                                        printf("Autor: %s\n", exatas[i].autor);
                                        printf("Editora: %s\n", exatas[i].editora);
                                        printf("Area: %d\n", exatas[i].area);
                                    }
                                }
                                //Se não for 0, filtrar pelo codigo informado e retornar o livro desejado
                                else if (exatas[i].codigo == codigo && exatas[i].area == area)
                                {
                                    printf("\nCodigo: %d\n", exatas[i].codigo);
                                    printf("Doacao: %c\n", exatas[i].doacao);
                                    printf("Titulo: %s\n", exatas[i].titulo);
                                    printf("Autor: %s\n", exatas[i].autor);
                                    printf("Editora: %s\n", exatas[i].editora);
                                    printf("Area: %d\n", exatas[i].area);
                                }
                            }
                            break;
                        case 2: //Caso seja humanas
                            //Mesma explicação do caso 1
                            if (humanas[i].area <= 3 || humanas[i].area >= 1)
                            {
                                if (codigo == 0)
                                {
                                    if (humanas[i].area != 0)
                                    {
                                        printf("\nCodigo: %d\n", humanas[i].codigo);
                                        printf("Doacao: %c\n", humanas[i].doacao);
                                        printf("Titulo: %s\n", humanas[i].titulo);
                                        printf("Autor: %s\n", humanas[i].autor);
                                        printf("Editora: %s\n", humanas[i].editora);
                                        printf("Area: %d\n", humanas[i].area);
                                    }
                                }
                                else if (humanas[i].codigo == codigo && humanas[i].area == area)
                                {
                                    printf("\nCodigo: %d\n", humanas[i].codigo);
                                    printf("Doacao: %c\n", humanas[i].doacao);
                                    printf("Titulo: %s\n", humanas[i].titulo);
                                    printf("Autor: %s\n", humanas[i].autor);
                                    printf("Editora: %s\n", humanas[i].editora);
                                    printf("Area: %d\n", humanas[i].area);
                                }
                            }
                            break;
                        case 3: //Caso seja biologicas
                            //Mesma explicação do caso 1
                            if (biologicas[i].area <= 3 || biologicas[i].area >= 1)
                            {
                                if (codigo == 0)
                                {
                                    if (biologicas[i].area != 0)
                                    {
                                        printf("\nCodigo: %d\n", biologicas[i].codigo);
                                        printf("Doacao: %c\n", biologicas[i].doacao);
                                        printf("Titulo: %s\n", biologicas[i].titulo);
                                        printf("Autor: %s\n", biologicas[i].autor);
                                        printf("Editora: %s\n", biologicas[i].editora);
                                        printf("Area: %d\n", biologicas[i].area);
                                    }
                                }
                                else if (biologicas[i].codigo == codigo && biologicas[i].area == area)
                                {
                                    printf("\nCodigo: %d\n", biologicas[i].codigo);
                                    printf("Doacao: %c\n", biologicas[i].doacao);
                                    printf("Titulo: %s\n", biologicas[i].titulo);
                                    printf("Autor: %s\n", biologicas[i].autor);
                                    printf("Editora: %s\n", biologicas[i].editora);
                                    printf("Area: %d\n", biologicas[i].area);
                                }
                            }
                            break;
                        }
                    }
                }
                else
                {
                    //Atribuir valor -1 para sair do programa, caso o código digitado seja -1
                    //Sem isso, o usuario digitaria -1 e o programa continuaria rodando infinitamente sem printar nada
                    area = -1;
                }
            }
        }
    }

    return 0;
}