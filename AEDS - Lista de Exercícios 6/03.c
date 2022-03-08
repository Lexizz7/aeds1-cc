#include <stdio.h>

int main(void)
{
    //Associa o arquivo do exercicio anterior a variavel, no modo leitura para não modificar
    FILE *entrada = fopen("02.txt", "r");

    //Cria a variável para armazenar a letra e outra pra contar quantos A's tem
    char letra;
    int qntLetra = 0;

    //Enquanto não chegar no final do arquivo
    while (!feof(entrada))
    {
        //Armazenar a letra na variavel
        letra = fgetc(entrada);

        //Se a letra for 'a' ou 'A', aumentar a quantidade de letras em um
        if (letra == 'a' || letra == 'A')
        {
            qntLetra++;
        }
    }

    fclose(entrada);

    //Mostrar na tela a quantidade de letras A no arquivo
    printf("Quantidade de letras 'a': %d\n", qntLetra);

    return 0;
}