// Objetivo: Mostrar a categoria de um nadador pela idade
// Nome: Edmar O. Melandes Jr.
// Data: 22/09/2021
// Última atualização: 22/09/2021

#include <stdio.h>

char categoriaNadador(int idade)
{
    //Retornar a categoria estiver dentro do intervalo de idade
    if (idade >= 5 && idade <= 7)
    {
        return 'F';
    }
    else if (idade >= 8 && idade <= 10)
    {
        return 'E';
    }
    else if (idade >= 11 && idade <= 13)
    {
        return 'D';
    }
    else if (idade >= 14 && idade <= 15)
    {
        return 'C';
    }
    else if (idade >= 16 && idade <= 17)
    {
        return 'B';
    }
    //Precisa de um else sem if para não dar warning de void, por isso limitei a idade acima de 4 anos na main
    else
    {
        return 'A';
    }
}

int main(void)
{
    int idade;

    printf("====================\nMostrar a categoria de um nadador pela idade\n====================\n");

    printf("Digite a idade do nadador (No mínimo 5 anos): ");
    scanf("%d", &idade);

    //Limite de idade para não retornar A na função
    if (idade > 4)
    {
        //Imprimir a categoria, chamando a função
        printf("\nA categoria do nadador é %c\n", categoriaNadador(idade));
    }
    else
    {
        printf("\nIdade inválida\n");
    }

    printf("\nFim do programa\n");
    return 0;
}