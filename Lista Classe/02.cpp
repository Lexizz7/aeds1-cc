#include <iostream>
using namespace std;

int main()
{
    FILE *arq;
    string nArq;
    char c;
    int linhas = 1;

    cout << "Digite o nome do arquivo: ";
    cin >> nArq;

    arq = fopen(nArq.c_str(), "r");

    if (arq == NULL)
    {
        cout << "Arquivo nao encontrado!" << endl;
        return 0;
    }

    while (!feof(arq))
    {
        c = fgetc(arq);
        if (c == '\n')
        {
            linhas++;
        }
    }

    cout << "O arquivo possui " << linhas << " linhas." << endl;
    fclose(arq);

    return 0;
}