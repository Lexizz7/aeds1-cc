#include <stdio.h>

int main(void)
{
    //Abrir os dois arquivos de entrada, que serão concatenados
    //Criar o arquivo de saida, com o conteudo dos dois arquivos
    FILE *entrada01 = fopen("05-entrada1.txt", "r"),
         *entrada02 = fopen("05-entrada2.txt", "r"),
         *saida = fopen("05-saida.txt", "w");
    //Variável para guardar a letra sendo lida
    char letra;

    //Enquantonão chegar ao final do arquivo, ler a letra
    while (!feof(entrada01))
    {
        //Armazenar a letra lida na variável letra
        letra = fgetc(entrada01);

        //Escrever a letra no arquivo de saída, e quando for EOF, quebrar a linha
        //Para o próximo arquivo não misturar as linhas (poderia ser um espaço também)
        if (letra != EOF)
        {
            fprintf(saida, "%c", letra);
        }
        else
        {
            fprintf(saida, "\n");
        }
    }

    //A mesma coisa do while de cima, só que com o segundo arquivo
    //Não adiciona o quebra linha no final pois não tem nenhum arquivo a mais
    while (!feof(entrada02))
    {
        letra = fgetc(entrada02);
        if (letra != EOF)
        {
            fprintf(saida, "%c", letra);
        }
    }

    //Fechar os arquivos
    fclose(entrada01);
    fclose(entrada02);
    fclose(saida);

    printf("Arquivos concatenados com sucesso!\n");
    printf("Arquivo 05-saida.txt criado!\n");

    return 0;
}