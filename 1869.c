#include <stdio.h>
#include <string.h>

int main ()
{
    long long int Valor, ValorAtual, aux;
    char ValorBase32[13];
    while (scanf("%d", &Valor))
    {
        if (Valor==0) 
        {
            printf("0\n");
            break;
        }
        aux = 0;
        ValorBase32[0] = '\0';
        while (Valor>0)
        {
            ValorAtual = Valor%32;
            Valor /= 32;
            if (ValorAtual<10) ValorBase32[aux] = ValorAtual+48;
            else ValorBase32[aux] = ValorAtual + 55;
            aux++;
        }
        ValorBase32[aux] = '\0';
        for (aux=0; aux<strlen(ValorBase32); aux++) printf("%c", ValorBase32[aux]);
        printf("\n");
    }
}