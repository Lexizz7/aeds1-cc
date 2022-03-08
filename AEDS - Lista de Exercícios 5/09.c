#include <stdio.h>

void calcCircunferencia(float R, float *compr, float *area)
{
    //Definindo a constante PI
    const float PI = 3.142857;

    //Alterando o conteúdo do endereço dos ponteiros pela formula
    *compr = 2 * PI * R;
    *area = PI * R * R;
}

int main(void)
{
    //Inicialização e declaração de varíaveis e ponteiros
    float raio = 0, compr = 0, area = 0;
    float *raioPtr = &raio,
          *comprPtr = &compr,
          *areaPtr = &area;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    //Procedimento para calcular e alterar as variaveis com o resultado
    calcCircunferencia(raio, comprPtr, areaPtr);

    printf("O comprimento é %f e a área é %f",
           compr, area);

    return 0;
}