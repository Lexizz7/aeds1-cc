// Objetivo: Verificar se o motorista estava dentro do limite de velocidade e aplicar multa
// Nome: Edmar O. Melandes Jr.
// Data: 08/09/2021
// Última atualização: 09/09/2021

#include <stdio.h>

int main(void)
{
    // Ler e armazenar a velocidade máxima da avenida e a velocidade do motorista
    // {
    float velocidadeMax, velocidadeMotor;

    printf("Digite a velocidade máxima da avenida: ");
    scanf("%f", &velocidadeMax);
    printf("Agora digite a velocidade do motorista: ");
    scanf("%f", &velocidadeMotor);
    // }

    // Verificar se estava dentro do limite
    // {
    if (velocidadeMotor <= velocidadeMax)
    {
        printf("\nMotorista respeitou as leis de trânsito.\n");
    }
    else
    {
        if (velocidadeMotor <= velocidadeMax + 10)
        {
            printf("\nMulta de 50 reais será cobrada.\n");
        }
        else if (velocidadeMotor <= velocidadeMax + 30)
        {
            printf("\nMulta de 100 reais será cobrada.\n");
        }
        else if (velocidadeMotor > velocidadeMax + 30)
        {
            printf("\nMulta de 200 reais será cobrada.\n");
        }
    }
    // }

    printf("\nFim do programa\n");

    return 0;
}