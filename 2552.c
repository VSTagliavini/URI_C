#include <stdio.h>

int main ()
{
    int PAODEQUEIJO[100][100], n, m, aux1, aux2, adj;
    while (scanf("%d %d", &n, &m)!=EOF)
    {
        for (aux1=0; aux1<n; aux1++)
        {
            for (aux2=0; aux2<m; aux2++) scanf("%d", &PAODEQUEIJO[aux1][aux2]);
        }
        for (aux1=0; aux1<n; aux1++)
        {
            for (aux2=0; aux2<m; aux2++)
            {
                if (PAODEQUEIJO[aux1][aux2]==1) adj=9;
                else
                {
                    adj=0;
                    if (aux1-1>=0 && PAODEQUEIJO[aux1-1][aux2]==1) adj++;
                    if (aux1+1<n && PAODEQUEIJO[aux1+1][aux2]==1) adj++;
                    if (aux2-1>=0 && PAODEQUEIJO[aux1][aux2-1]==1) adj++;
                    if (aux2+1<m && PAODEQUEIJO[aux1][aux2+1]==1) adj++;
                }
                printf("%d", adj);
            }
            printf("\n");
        }
    }
}