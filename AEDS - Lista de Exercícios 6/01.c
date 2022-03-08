#include <stdio.h>

int main(void)
{
    //Associar o arquivo 01.txt à variável arquivo
    FILE *arquivo = fopen("01.txt", "w");

    //Escrever no arquivo 01.txt
    fputc('1', arquivo);
    fputc('\n', arquivo);
    fputc('2', arquivo);
    fputc('\n', arquivo);
    fputc('3', arquivo);
    fputc('\n', arquivo);
    fputc('4', arquivo);
    fputc('\n', arquivo);
    fputc('5', arquivo);
    fputc('\n', arquivo);
    fputc('6', arquivo);
    fputc('\n', arquivo);
    fputc('7', arquivo);
    fputc('\n', arquivo);
    fputc('8', arquivo);
    fputc('\n', arquivo);
    fputc('9', arquivo);
    fputc('\n', arquivo);
    fputc('1', arquivo);
    fputc('0', arquivo);

    //Fechar o arquivo 01.txt
    fclose(arquivo);

    printf("Arquivo 01.txt criado!");

    return 0;
}