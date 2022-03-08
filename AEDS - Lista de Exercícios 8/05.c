#include <stdio.h>

#define CLIENTES 2

// Estrutura de dados para armazenar os dados de um cliente
//Estrutura para o telefone
typedef struct Tel
{
    int ddd;
    char numero[9];
} Tel;
//Estrutura para o endereço
typedef struct End
{
    char rua[200];
    int numero;
    char complemento[50];
} End;
//Dados do cliente
typedef struct Cliente
{
    char nome[100];
    End endereco;
    Tel telefone;
} Cliente;

//Procedimento para preencher os dados de um cliente
void preencherCliente(Cliente *cliente)
{
    printf("Nome: ");
    scanf(" %[^\n]", cliente->nome); //Preenche o nome do cliente
    printf("Rua: ");
    scanf(" %[^\n]", cliente->endereco.rua); // Preenche, dentro do endereço, a rua do cliente
    printf("Numero: ");
    scanf("%d", &cliente->endereco.numero); // Preenche, dentro do endereço, o numero da casa do cliente
    printf("Complemento: ");
    scanf(" %[^\n]", cliente->endereco.complemento); // Preenche, dentro do endereço, o complemento do cliente
    printf("Telefone:\n");
    printf("DDD: ");
    scanf("%d", &cliente->telefone.ddd); // Preenche, dentro do telefone, o DDD do cliente
    printf("Numero: ");
    scanf("%s", cliente->telefone.numero); // Preenche, dentro do telefone, o número de telefone do cliente
}

int main()
{
    //Define o vetor clientes
    Cliente clientes[CLIENTES];

    //Para cada um deles, preencher e informar qual é o cliente
    for (int i = 0; i < CLIENTES; i++)
    {
        printf("\nCliente %d\n", i + 1);
        preencherCliente(&clientes[i]);
    }

    //Encerrar o programa
    printf("Cliente cadastrados!\n");

    return 0;
}