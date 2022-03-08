#include <stdio.h>

#define PRODUTOS 15

//Estrutura do produto e do telefone
//Separei por causa do DDD, que é mostrado separadamente entre parenteses
typedef struct Telefone
{
    int ddd;
    char numero[9];
} Telefone;

typedef struct Produto
{
    char nomeLoja[100];
    Telefone telefoneLoja;
    double preco;
} Produto;

//Procedimento para preencher cada produto
void preencherProduto(Produto *produto)
{
    printf("Digite o nome da loja: ");
    //Salva o que foi digitado como uma string dentro do nome da loja
    scanf("%s", produto->nomeLoja);

    printf("Digite o telefone da loja: ");
    printf("\nDDD: ");
    scanf("%d", &produto->telefoneLoja.ddd);
    printf("Numero de telefone: ");
    scanf("%s", produto->telefoneLoja.numero);

    printf("Digite o preco do produto: R$");
    scanf("%lf", &produto->preco);
    //Verificar se o preço digitado não é negativo
    while (produto->preco < 0)
    {
        printf("Preco invalido!\n");
        printf("Digite o preco do produto: R$");
        scanf("%lf", &produto->preco);
    }
}

int main()
{
    //Declaração de variáveis
    Produto produto[PRODUTOS];
    double media = 0;

    //Para cada loja, preenche o produto
    for (int i = 0; i < PRODUTOS; i++)
    {
        printf("\nLoja %d\n", i + 1);
        preencherProduto(&produto[i]);
    }
    //Depois de preenchidos, percorre por todos os produtos e calcula a média
    for (int i = 0; i < PRODUTOS; i++)
    {
        media += produto[i].preco; //Soma de tudo
    }

    media /= PRODUTOS; //Divisão da soma por quantidade de produtos

    printf("\nA media de precos eh R$%.10g\n", media); //Mostrar o preço médio
    printf("Lojas com preco abaixo da media:");
    //Percorre todos os produtos e verifica se o preço é menor que a média, se sim, printar o nome da loja e o telefone
    for (int i = 0; i < PRODUTOS; i++)
    {
        if (produto[i].preco < media)
        {
            printf("\nNome: %s, Telefone: (%d)%s", produto[i].nomeLoja, produto[i].telefoneLoja.ddd, produto[i].telefoneLoja.numero);
        }
    }

    return 0;
}