#include <iostream>
using namespace std;

int main()
{
    FILE *arq;
    string nArq, palavra, palavra2;

    cout << "Digite o nome do arquivo: ";
    cin >> nArq;

    cout << "Digite a palavra para procurar";
    cin >> palavra;

    arq = fopen(nArq.c_str(), "r");

    if (arq == NULL)
    {
        cout << "Arquivo nao encontrado!" << endl;
        return 0;
    }

    // while (arq >> palavra2)
    // {
    //     if (palavra2 == palavra)
    //     {
    //         cout << "Palavra encontrada!" << endl;
    //         return 0;
    //     }
    // }
}