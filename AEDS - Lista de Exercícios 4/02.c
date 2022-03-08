// Objetivo: Somar as casas de um número
// Nome: Edmar O. Melandes Jr.
// Data: 01/10/2021
// Última atualização: 01/10/2021

#include <stdio.h>

int somarCasas(int numero)
{
    int soma = 0, unidade, novoNumero;

    //Separar a unidade do número, guardar, criar um novo número e chamar a função com esse novo número
    //Exemplo: 356 => Pega a unidade 6 e cria o novo número 35
    //         35 => Pega a unidade 5 e cria o novo número 3
    //         3 => Pega a unidade 3 e não é mais divisivel.
    //         No fim, soma-se as unidades 6 + 5 + 3.
    if (numero > 0)
    {
        unidade = numero % 10;
        soma = unidade;
        novoNumero = ((numero - unidade) / 10);

        return (soma + somarCasas(novoNumero));
    }
    else
    {
        return soma;
    }
}

int main(void)
{
    int numero;

    printf("Digite um número para somar casas: ");
    scanf("%d", &numero);

    //Printar o resultado da função
    printf("Soma das casas: %d\n", somarCasas(numero));

    printf("\nFim do programa\n");
    return 0;
}