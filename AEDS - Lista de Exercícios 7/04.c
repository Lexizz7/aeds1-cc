#include <stdio.h>
#include <limits.h>

#define DIAS 31

int main()
{
    int vetor[DIAS], maiorTemp = INT_MIN, menorTemp = INT_MAX, mediaTemp = 0, abaixoMedia = 0;

    // Para cada posição do vetor, recebe o valor da temperatura
    for (int i = 0; i < DIAS; i++)
    {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%d", &vetor[i]);

        //Caso seja uma temperatura inválida, segundo o enunciado, deve-se inserir uma correta
        //While para prevenir e continuar em laço até digitar uma temperatura válida
        while (vetor[i] < 15)
        {
            printf("Temperatura abaixo do normal. Digite novamente: ");
            scanf("%d", &vetor[i]);
        }
        while (vetor[i] > 40)
        {
            printf("Temperatura acima do normal. Digite novamente: ");
            scanf("%d", &vetor[i]);
        }

        //Caso seja maior, atualiza o maior valor
        //Mesma coisa para o menor
        if (vetor[i] > maiorTemp)
        {
            maiorTemp = vetor[i];
        }
        if (vetor[i] < menorTemp)
        {
            menorTemp = vetor[i];
        }
        //Somar a temperatura à variavel média para dividir depois
        mediaTemp += vetor[i];
    }

    //Divide pela quantidade total de dias pra obter a média
    mediaTemp /= DIAS;

    //Percorrer por todos os dias novamente para ver quais estão abaixo da média
    for (int i = 0; i < DIAS; i++)
    {
        if (vetor[i] < mediaTemp)
        {
            abaixoMedia++;
        }
    }

    printf("A maior temperatura registrada foi %d\n", maiorTemp);
    printf("A menor temperatura registrada foi %d\n", menorTemp);
    printf("A media das temperaturas registradas foi %d\n", mediaTemp);
    printf("A quantidade de dias com temperatura abaixo da media foi %d\n", abaixoMedia);

    return 0;
}