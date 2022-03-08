#include <stdio.h>
#include <string.h>

int main(void)
{
    //Associar o arquivo 02.txt a variavel arquivo
    FILE *arquivo = fopen("02.txt", "w");
    //Criar a variavel que vai receber o texto (string)
    char texto[100];

    //Para manter organizado colocar o numero da linha
    int linha = 1;

    printf("\n=================================\nPressione enter para trocar de linha\nDigite 'EOF' para parar de digitar no arquivo e finalizar o programa\n=================================\n\n");
    printf("Digite o seu texto:\n\n");

    //Enquanto não for digitado EOF, continuar passando de linha
    //Essa função strcmp ainda não foi dada em aula, serve para comparar strings (procurei na documentação do C para entender)
    while (strcmp(texto, "EOF\n") != 0)
    {
        //Mostrar a numeração da linha
        printf("%d. ", linha);

        //Essa função também não foi dada em aula, serve para transformar o texto digitado em uma string com espaços e \n no final
        //Precisei procurar por ela pois antes cada espaço digitado estava pulando uma linha
        fgets(texto, 100, stdin);

        //Uma condição para não deixar o programa escrever EOF no final do arquivo
        if (strcmp(texto, "EOF\n") != 0)
        {
            //Escrever o texto no arquivo
            fprintf(arquivo, "%s", texto);
            linha++;
        }
    }

    fclose(arquivo);

    printf("\nArquivo 02.txt criado!\n\n");

    return 0;
}