// Objetivo: Levantamento do lucro de mercadorias
// Nome: Edmar O. Melandes Jr.
// Data: 17/09/2021
// Última atualização: 17/09/2021

#include <stdio.h>

int main(void)
{
    //Declarando as variáveis
    float pCompra = 1, pVenda, tCompra = 0, tVenda = 0,
          lucro, baixoLucro = 0, medioLucro = 0, altoLucro = 0,
          total = 0;

    printf("====================\nCalculadora de lucros\nDigite um valor de compra nulo para terminar o programa\n====================\n");

    //While para continuar repetindo enquanto um preço de compra nulo não for digitado
    while (pCompra != 0)
    {
        printf("\nMercadoria %.6g\n", total + 1);
        printf("Preço de Compra: R$");
        scanf("%f", &pCompra);

        //If para não contar a mercadoria sem preço de compra
        if (pCompra != 0)
        {
            printf("Preço de Venda: R$");
            scanf("%f", &pVenda);

            lucro = ((pVenda - pCompra) / pCompra) * 100;

            //If para caso o lucro seja menor de 10%, entre 10% e 20% e maior que 20%
            if (lucro < 10)
            {
                baixoLucro++;
            }
            else if (lucro > 10 && lucro < 20)
            {
                medioLucro++;
            }
            else if (lucro > 20)
            {
                altoLucro++;
            }

            //Adicionar o valor da compra e da venda ao total
            tCompra += pCompra;
            tVenda += pVenda;
            total++;
        }
    }

    //If para caso não se tenha nenhuma mercadoria o programa não dar conflito e mostrar na tela
    if (total > 0)
    {
        printf("\nA) Porcentagem de lucro das mercadorias:\n    %.6g mercadorias deram um lucro menor que 10%%;\n    %.6g mercadorias deram um lucro entre 10%% e 20%%;\n    %.6g mercadorias deram um lucro maior que 20%%;\n\nB) O valor total de compra foi: R$%.6g\n   O valor total de vendas foi: R$%.6g\n   O lucro total foi de: R$%.6g\n",
               baixoLucro, medioLucro, altoLucro, tCompra, tVenda, tVenda - tCompra);
    }
    else
    {
        printf("\nVocê não inseriu nenhuma mercadoria!\n");
    }

    printf("\nFim do programa\n");

    return 0;
}