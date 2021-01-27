#include <stdio.h>
#include <string.h>

int main ()
{
    int aux;
    char frase[257];
    while (scanf(" %[^\n]s", &frase)!=EOF)
    {
        for (aux=0; aux<strlen(frase); aux++)
        {
            switch (frase[aux])
            {
                case '@': frase[aux] = 'a'; break;
                case '&': frase[aux] = 'e'; break;
                case '!': frase[aux] = 'i'; break;
                case '*': frase[aux] = 'o'; break;
                case '#': frase[aux] = 'u'; break;
            }
        }
        printf("%s\n", frase);
    }
}