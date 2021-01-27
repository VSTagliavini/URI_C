#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int aux, num, pos1, pos2;
    char tel[10000][201], auxc[201];
    while (scanf("%d", &num)!=EOF)
    {
        for (aux=0; aux<num; aux++) scanf(" %s", &tel[aux]);
        
        for (pos1=0; pos1<num; pos1++)
        {
            aux=pos1;
            for (pos2=pos1+1; pos2<num; pos2++) if (atoi(tel[pos2])>atoi(tel[aux])) aux = pos2;
            strcpy(auxc, tel[pos1]);
            strcpy(tel[pos1], tel[pos2]);
            strcpy(tel[pos2], auxc);
        }

        for (aux=0; aux<num; aux++) printf("%s\n", tel[aux]);
    }
}