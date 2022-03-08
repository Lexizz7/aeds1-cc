#include <stdio.h>

int main()
{
    FILE *leitura = fopen("leitura.txt", "r"), *resultado = fopen("resultado.txt", "w");
    int media = 0, qntNotas = 0;

    while (!feof(leitura))
    {
        int numero = 0;
        fscanf(leitura, "%d", &numero);
        media += numero;
        qntNotas++;
    }

    media /= qntNotas;

    fprintf(resultado, "Média das notas: %d\n", media);

    fclose(leitura);
    fclose(resultado);

    printf("Media das notas: %d\n", media);
    printf("Arquivo resultante criado.");

    return 0;
}