#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Variaveis e inicialização
    int num1 = 0, num2 = 0;
    int *maiorEndereco = 0;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    //Verificar qual endereço é o maior, e registrar na variavel maiorEndereco
    if (&num1 > &num2)
    {
        maiorEndereco = &num1;
    }
    else
    {
        maiorEndereco = &num2;
    }

    //Printar os números digitados, seus respectivos endereços e qual é o maior deles
    printf("Os endereços da variáveis:\n");
    printf("Endereço de '%d': %p\n", num1, &num1);
    printf("Endereço de '%d': %p\n", num2, &num2);

    printf("O maior endereço: %p\n", maiorEndereco);

    return 0;
}