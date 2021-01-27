#include <stdio.h>
#include <string.h>

int main ()
{
    int aux=0;
    char carta[100000];
    scanf(" %s", &carta);
    while (carta[aux]!='\0')
    {
        if (carta[aux]>64 && carta[aux]<91) carta[aux] += 32;
        aux++;
    }
    if (strstr(carta, "zelda")!=NULL) printf("Link Bolado\n");
    else printf("Link Tranquilo\n");
    system("pause");
}