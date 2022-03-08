#include <stdio.h>
#include <ctype.h>

#define REGISTROS 500

// Estrutura de cada cliente
typedef struct Cliente
{
    int codigo;
    char email[100];
    double horas;
    char pagina;
} Cliente;

//Procedimento para preencher os dados de um cliente
void preencherCliente(Cliente *cliente)
{
    printf("Codigo do cliente: ");
    scanf("%d", &cliente->codigo); //Lê o código do cliente

    printf("Email do cliente: ");
    scanf("%s", cliente->email); //Lê o email do cliente

    printf("Horas do cliente: ");
    scanf("%lf", &cliente->horas); //Lê as horas do cliente
    while (cliente->horas < 0)     //Caso o valor de horas seja negativo
    {
        printf("Horas invalidas, digite novamente: ");
        scanf("%lf", &cliente->horas);
    }

    printf("Pagina do cliente (S ou N): ");
    scanf(" %c", &cliente->pagina);                          //Lê a pagina do cliente
    cliente->pagina = toupper(cliente->pagina);              //Converte a letra para maiúscula para evitar erros
    while (cliente->pagina != 'S' && cliente->pagina != 'N') //Caso a letra seja diferente de S ou N
    {
        printf("Pagina invalida, digite novamente (S ou N): ");
        scanf(" %c", &cliente->pagina);
        cliente->pagina = toupper(cliente->pagina);
    }
}

int main()
{
    //Declaração dos clientes e o valor a pagar
    Cliente cliente[REGISTROS];
    double valor;

    for (int i = 0; i < REGISTROS; i++) //Percorre todos os clientes e chama o procedimento para preencher os dados
    {
        printf("\nCliente %d\n", i + 1);
        preencherCliente(&cliente[i]);
    }

    printf("\n\nValor que cada cliente deve pagar: \n");

    //Percorre todos os clientes já preenchidos e calcula o valor a pagar
    for (int i = 0; i < REGISTROS; i++)
    {
        valor = 0; //Zera o valor a pagar para cada um
        printf("\nCliente %d: R$", cliente[i].codigo);
        if (cliente[i].horas <= 20) //Caso o valor de horas seja até 20, pagar o valor fixo de 35
        {
            valor = 35;
        }
        if (cliente[i].horas > 20) //Caso seja maior que 20, pagar 35 das 20 horas mais o valor de cada hora extra
        {
            valor = 35 + ((cliente[i].horas - 20) * 2.5);
        }
        if (cliente[i].pagina == 'S') //Se o cliente tiver pagina, adicionar 40 reais
        {
            valor += 40;
        }
        printf("%.2lf", valor); //Mostrar o valor a pagar
    }

    return 0;
}