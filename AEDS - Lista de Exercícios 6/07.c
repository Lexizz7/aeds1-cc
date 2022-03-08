#include <stdio.h>

int main(void)
{
    //Associar o arquivo em modo escrita, para criar e receber as letras
    //Tentei usar o "w+" mas estava dando erro, não entendi o motivo
    //Pra solucionar, usei o "w", fechei e depois reabri como "r"
    FILE *arquivo = fopen("07.txt", "w");
    int qntLetras = 0, qntVogais = 0;
    char letra;

    printf("Quantas letras deseja digitar: ");
    scanf("%d", &qntLetras);

    //Repetir N vezes que o usuário inserir
    for (int numLetra = 1; numLetra <= qntLetras; numLetra++)
    {
        //Armazenar a letra digitada
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        //Inserir a letra digitada no arquivo
        fputc(letra, arquivo);
    }
    //Fechar e salvar o arquivo
    fclose(arquivo);

    //Reabrir o arquivo em modo leitura
    arquivo = fopen("07.txt", "r");

    //Ler cada caractere até o final do arquivo e caso seja uma vogal, incrementar a variável qntVogais
    while (!feof(arquivo))
    {
        letra = fgetc(arquivo);
        if (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u')
        {
            qntVogais++;
        }
    }
    //Fechar e salvar o arquivo
    fclose(arquivo);

    printf("\nArquivo 07.txt criado!");

    printf("\nA quantidade de vogais foi: %d", qntVogais);

    return 0;
}