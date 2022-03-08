#include <stdio.h>

int main(void)
{
    //Declarando variáveis
    int inteiro = 10;
    double real = 3.888888;
    char caracter = 'C';
    //Declarando ponteiros
    int *inteiroPtr = &inteiro;
    double *realPtr = &real;
    char *caracterPtr = &caracter;

    printf("Antes da modificação:\nInteiro: %d, %p\nReal: %lf, %p\nCaracter: %c, %p\n", inteiro, inteiroPtr, real, realPtr, caracter, caracterPtr);

    //Modificações das variáveis pelos ponteiros
    *inteiroPtr = 50;
    *realPtr = 4394.485946056;
    *caracterPtr = 'M';

    printf("\nDepois da modificação:\nInteiro: %d, %p\nReal: %lf, %p\nCaracter: %c, %p", inteiro, inteiroPtr, real, realPtr, caracter, caracterPtr);

    return 0;
}