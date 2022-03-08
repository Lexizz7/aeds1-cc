#include <stdio.h>

int main(void)
{
    //Utilizando o txt do exercício 2 para testar o programa
    FILE *entrada = fopen("02.txt", "r");
    char letra;
    int linhas = 0;

    printf("O texto dentro do arquivo é:\n\n");

    //Enquanto não for o final do arquivo
    while (!feof(entrada))
    {
        //Armazena o caracter lido na variável letra e printar na tela
        letra = fgetc(entrada);
        printf("%c", letra);

        //Caso seja uma quebra de linha, aumentar a quantidade de linhas
        if (letra == '\n')
        {
            linhas++;
        }
    }

    fclose(entrada);

    printf("\nO texto tem um total de %d linhas\n", linhas);

    return 0;
}