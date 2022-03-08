#include <stdio.h>

int ordenar(int *valor1Ptr, int *valor2Ptr, int *valor3Ptr)
{
    //Guardar os conteúdos dos endereços em duas variáveis
    int number1 = *valor1Ptr;
    int number2 = *valor2Ptr;
    int number3 = *valor3Ptr;

    //3 condicionais para testar os 3 casos
    //Se o 1 é menor que 2 e 3
    //Dentro do if testar se 2 é menor que 3
    //Isso repetido mais duas vezes para o número 2 e 3
    if (number1 <= number2 && number1 <= number3)
    {
        if (number2 <= number3)
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number1,
                   *valor2Ptr = number2,
                   *valor3Ptr = number3;
        }
        else
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number1,
                   *valor2Ptr = number3,
                   *valor3Ptr = number2;
        }
    }
    else if (number2 <= number1 && number2 <= number3)
    {
        if (number1 <= number3)
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number2,
                   *valor2Ptr = number1,
                   *valor3Ptr = number3;
        }
        else
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number2,
                   *valor2Ptr = number3,
                   *valor3Ptr = number1;
        }
    }
    else if (number3 <= number1 && number3 <= number2)
    {
        if (number1 <= number2)
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number3,
                   *valor2Ptr = number1,
                   *valor3Ptr = number2;
        }
        else
        {
            //Retorna de acordo com o teste, na ordem crescente
            return *valor1Ptr = number3,
                   *valor2Ptr = number2,
                   *valor3Ptr = number1;
        }
    }
}

int main(void)
{
    //Inicialização e declaração de varíaveis e ponteiros
    int valor1 = 0, valor2 = 0, valor3 = 0;
    int *valor1Ptr = &valor1,
        *valor2Ptr = &valor2,
        *valor3Ptr = &valor3;

    printf("Digite três valores inteiros:");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    //A função modifica o conteúdo das variáveis através do endereço delas
    ordenar(valor1Ptr, valor2Ptr, valor3Ptr);

    printf("%d %d %d", valor1, valor2, valor3);
    return 0;
}