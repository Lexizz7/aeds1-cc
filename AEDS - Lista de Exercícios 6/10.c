#include <stdio.h>
#include <limits.h>

int main(void)
{
    //10.txt possui os numeros em ponto flutuante
    FILE *arquivo = fopen("10.txt", "r");
    double num = 0, min = INT_MAX, max = INT_MIN, media = 0, total = 0;

    //Repetir para cada numero, enquanto não chegar ao fim do arquivo
    while (fscanf(arquivo, "%lf", &num) != EOF)
    {
        //Somar o numero à média
        media += num;

        //Se o numero for maior que o maior, atualizar o maior
        if (num > max)
        {
            max = num;
        }
        //Se o numero for menor que o menor, atualizar o menor
        if (num < min)
        {
            min = num;
        }

        //Atualizar o total de números lidos
        total++;
    }

    //Dividir a soma de todos pelo total para conseguir a média
    media /= total;

    printf("\nO arquivo possui %.0lf numeros\n", total);
    printf("\nO maior numero e %lf\n", max);
    printf("O menor numero e %lf\n", min);
    printf("A media dos numeros e %lf\n\n", media);

    return 0;
}