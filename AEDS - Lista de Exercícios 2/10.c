// Objetivo: Contador de votos para eleição
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    int voto = 1, c1 = 0, c2 = 0, c3 = 0, c4 = 0, vNulo = 0, vBranco = 0, vTotal = 0;

    printf("====================\nVotação\n\nCandidato 1 = 1\nCandidato 2 = 2\nCandidato 3 = 3\nCandidato 4 = 4\n\nVoto nulo = 5\nVoto em branco = 6\n\nDigite 0 para finalizar e contabilizar\n====================\n");

    //While para continuar repetindo a votação enquanto 0 não for digitado
    while (voto != 0)
    {
        printf("\nVoto %d\n", vTotal + 1);
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        //If para não contar o voto 0
        if (voto != 0)
        {
            //Switch para cada possibilidade de código, do 1 ao 6
            switch (voto)
            {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                vNulo++;
                break;
            case 6:
                vBranco++;
                break;
            default:
                printf("Código de voto não existe!\n");
                break;
            }

            //Adicionar o voto ao total
            vTotal++;
        }
    }

    //If para caso não se tenha nenhum voto, mostrar mensagem
    if (vTotal > 0)
    {
        printf("\nTotal de votos:\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nVoto nulos: %d\nVotos em branco: %d\n",
               c1, c2, c3, c4, vNulo, vBranco);
    }
    else
    {
        printf("\nNenhum voto!\n");
    }

    printf("\nFim do programa\n");

    return 0;
}