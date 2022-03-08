#include <iostream>
using namespace std;

int main()
{
    FILE *arq1, *arq2;
    string nArq1, nArq2;
    char c1, c2;
    bool iguais = true;

    cout << "Digite o nome do arquivo 1: ";
    cin >> nArq1;
    cout << "Digite o nome do arquivo 2: ";
    cin >> nArq2;

    arq1 = fopen(nArq1.c_str(), "r");
    arq2 = fopen(nArq2.c_str(), "r");

    if (arq1 == NULL)
    {
        cout << "Arquivo 1 nao encontrado!" << endl;
        return 0;
    }
    if (arq2 == NULL)
    {
        cout << "Arquivo 2 nao encontrado!" << endl;
        return 0;
    }

    while (!feof(arq1))
    {
        c1 = fgetc(arq1);
        c2 = fgetc(arq2);
        if (c1 != c2)
        {
            cout << "Arquivos diferentes!" << endl;
            iguais = false;
            return 0;
        }
    }

    if (iguais)
    {
        cout << "Arquivos iguais!" << endl;
    }

    fclose(arq1);
    fclose(arq2);

    return 0;
}