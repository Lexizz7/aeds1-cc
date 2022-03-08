// O arquivo de entrada deve conter, em ordem: o código, o nome, a idade e o salário do funcionário.
// Pode ser separado com espaço ou com quebra de linha.

#include <iostream>
#include <fstream>

using namespace std;

#define MAX 50

class Funcionario
{
private:
    int codigo;
    string nome;
    int idade;
    double salario;

public:
    Funcionario()
    {
        Start(0, "Nao informado", 1, 0.1);
    }
    Funcionario(int novoCodigo, string novoNome, int novaIdade, double novoSalario)
    {
        Start(novoCodigo, novoNome, novaIdade, novoSalario);
    }

    void SetCodigo(int novoCodigo)
    {
        codigo = novoCodigo;
    }
    int GetCodigo()
    {
        return codigo;
    }

    void SetNome(string novoNome)
    {
        nome = novoNome;
    }
    string GetNome()
    {
        return nome;
    }

    void SetIdade(int novaIdade)
    {
        if (novaIdade > 0)
        {
            idade = novaIdade;
        }
        else
        {
            cout << "Idade invalida" << endl;
        }
    }
    int GetIdade()
    {
        return idade;
    }

    void SetSalario(double novoSalario)
    {
        if (novoSalario > 0)
        {
            salario = novoSalario;
        }
        else
        {
            cout << "Salario invalido" << endl;
        }
    }
    double GetSalario()
    {
        return salario;
    }

    void PreencherVetor(string nomeArquivo, int posicao)
    {
        ifstream arquivo;
        arquivo.open(nomeArquivo);

        if (arquivo.is_open())
        {
            for (int i = 0; i <= posicao; i++)
            {
                arquivo >> codigo >> nome >> idade >> salario;
            }
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }

        arquivo.close();
    }

    int QuantosRecebemMaisDe2000(Funcionario vetor[MAX])
    {
        int contador = 0;

        for (int i = 0; i < MAX; i++)
        {
            if (vetor[i].GetCodigo() != vetor[i - 1].GetCodigo())
            {
                if (vetor[i].GetSalario() > 2000)
                {
                    contador++;
                }
            }
        }

        return contador;
    }

    int CodigoFuncionarioMaisVelho(Funcionario vetor[MAX])
    {
        int codigoMaisVelho = 0;
        int maiorIdade = 0;

        for (int i = 0; i < MAX; i++)
        {
            if (vetor[i].GetCodigo() != vetor[i - 1].GetCodigo())
            {
                if (vetor[i].GetIdade() > maiorIdade)
                {
                    maiorIdade = vetor[i].GetIdade();
                    codigoMaisVelho = vetor[i].GetCodigo();
                }
            }
        }

        return codigoMaisVelho;
    }

private:
    void Start(int novoCodigo, string novoNome, int novaIdade, double novoSalario)
    {
        SetCodigo(novoCodigo);
        SetNome(novoNome);
        SetIdade(novaIdade);
        SetSalario(novoSalario);
    }
};

int main()
{
    Funcionario funcionarios[MAX];
    string nomeArquivo;
    int qntMaisDe2000, codigoMaisVelho;
    FILE *saida = fopen("saida.txt", "w");

    cout << "Digite o nome do arquivo (com o formato no final): ";
    cin >> nomeArquivo;

    for (int i = 0; i < MAX; i++)
    {
        funcionarios[i].PreencherVetor(nomeArquivo, i);
    }

    qntMaisDe2000 = funcionarios[0].QuantosRecebemMaisDe2000(funcionarios);
    codigoMaisVelho = funcionarios[0].CodigoFuncionarioMaisVelho(funcionarios);

    for (int i = 0; i < MAX; i++)
    {
        if (funcionarios[i].GetCodigo() != funcionarios[i - 1].GetCodigo())
        {
            if (funcionarios[i].GetCodigo() == codigoMaisVelho)
            {

                fprintf(saida, "Dados do funcionário mais velho: \nNome:%s\nIdade:%d\nSalário:%.2lf\n", funcionarios[i].GetNome().c_str(), funcionarios[i].GetIdade(), funcionarios[i].GetSalario());
            }
        }
    }

    fprintf(saida, "Quantidade de funcionários que recebem mais de 2000: %d\n", qntMaisDe2000);

    fclose(saida);

    return 0;
}