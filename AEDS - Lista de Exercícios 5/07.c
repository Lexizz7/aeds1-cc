#include <stdio.h>

int maiorEMenor(int *num1, int *num2)
{
    //Guardar os conteúdos dos endereços em duas variáveis
    int number1 = *num1;
    int number2 = *num2;

    if (number1 > number2)
    {
        //Modificar o conteúdo do endereço num1 pelo maior
        return *num1 = number1, *num2 = number2;
    }
    else
    {
        //Modificar o conteúdo do endereço num1 pelo maior
        return *num1 = number2, *num2 = number1;
    }
}

int main(void)
{
    //Inicialização e declaração de varíaveis e ponteiros
    int num1 = 0, num2 = 0;
    int *num1Ptr = &num1, *num2Ptr = &num2;

    printf("Digite dois valores inteiros:");
    scanf("%d %d", &num1, &num2);

    //A função modifica o conteúdo das variáveis recebendo o endereço delas
    maiorEMenor(num1Ptr, num2Ptr);

    printf("%d %d", num1, num2);
    return 0;
}