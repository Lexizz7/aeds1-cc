#include <stdio.h>

int main(void)
{
    //Associar o arquivo para receber a soma dos divisores
    FILE *arquivo = fopen("06.txt", "w");
    int num = 0, somaDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Divisores: ");

    //Começando do 1 pois é um divisor de todos os números e 0 um divisor inexistente
    //para cada número testa se o resto é 0, caso for, ele é adicionado ao somador e printado
    //Incluindo o proprio número, pois também é um divisor (por isso o <=)
    for (int divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
        {
            printf("%d ", divisor);
            somaDivisores += divisor;
        }
    }

    //Escrever no arquivo a soma dos divisores
    fprintf(arquivo, "Soma dos divisores: %d", somaDivisores);

    fclose(arquivo);

    printf("\nArquivo 06.txt criado!");

    return 0;
}