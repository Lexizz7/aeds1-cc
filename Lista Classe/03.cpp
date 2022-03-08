#include <iostream>
using namespace std;

int main()
{
    FILE *leitura = fopen("teste.txt", "r"), *escrita = fopen("teste3.txt", "w");
    char c;

    if (leitura == NULL)
    {
        cout << "Arquivo nao encontrado!" << endl;
        return 0;
    }

    while (!feof(leitura))
    {
        c = fgetc(leitura);
        if (c == '\n')
        {
            fputc('\n', escrita);
        }
        else
        {
            fputc(c, escrita);
        }
    }

    fclose(leitura);
    fclose(escrita);

    return 0;
}