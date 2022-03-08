#include <stdio.h>

int main(void)
{
    //Associar o arquivo de resultado a variavel arquivo, como escrita
    FILE *arquivo = fopen("08-resultado.txt", "w");
    int qntVeiculo = 0;
    //Alugueis mensais foi criado para organização do código, visto que será utilizado nos calculos
    double alugueisMensais = 0;
    double valorAluguel = 0, faturamentoAnual = 0, multasMensais = 0, gastoManutencao = 0;

    printf("Digite a quantidade de veiculos: ");
    scanf("%d", &qntVeiculo);
    printf("Digite o valor do aluguel: R$");
    scanf("%lf", &valorAluguel);

    //Nos cálculos foi desconsiderado o fato de não existir "meio carro"
    //Então, por exemplo, se existirem 10 carros, 3.33333 carros serão alugados por mês
    //O mesmo vale para multas e gastos
    alugueisMensais = (1.0 / 3.0) * qntVeiculo;

    faturamentoAnual = (alugueisMensais * valorAluguel * 12);
    multasMensais = ((1.0 / 10.0) * (alugueisMensais)) * (valorAluguel * 1.2);
    gastoManutencao = (qntVeiculo * 0.02) * 600;

    //Escrever no arquivo os valores de cada variável depois de calcular
    fprintf(arquivo, "Faturamento anual: R$%.2lf\n", faturamentoAnual);
    fprintf(arquivo, "Multas Mensais: R$%.2lf\n", multasMensais);
    fprintf(arquivo, "Gasto de Manutenção: R$%.2lf\n", gastoManutencao);

    //Fecha o arquivo
    fclose(arquivo);

    //Mostrar na tela o que foi calculado
    printf("\nO faturamento anual (sem multas e sem gasto) é de R$%.2lf\n", faturamentoAnual);
    printf("O valor ganho com multas no mês é de R$%.2lf\n", multasMensais);
    printf("O gasto com manutencao é de R$%.2lf", gastoManutencao);

    return 0;
}