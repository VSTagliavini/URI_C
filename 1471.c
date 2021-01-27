#include <stdio.h>

int main ()
{
    int vol, ret, mer[10000], sobre, aux;
    while (scanf("%d %d", &vol, &ret)!=EOF)
    {
        for (aux=0; aux<vol; aux++) mer[aux] = 0;
        for (aux=0; aux<ret; aux++)
        {
            scanf("%d", &sobre);
            mer[sobre-1] = 1;
        }
        if (vol==ret) printf("*\n");
        else 
        {
            for (aux=0; aux<vol; aux++) if (mer[aux]==0) printf("%d ", aux+1);
            printf("\n");
        }
    }
}