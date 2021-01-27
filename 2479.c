#include <stdio.h>
#include <string.h>

int main ()
{
    int n, comportaram=0, pos1, pos2, aux;
    char caracter, nome[100][21], nomeaux[21];
    for (scanf("%d", &n), pos1=0; pos1<n; pos1++)
    {
        scanf(" %c %s", &caracter, &nome[pos1]);
        if (caracter=='+') comportaram++;
    }
    for (pos1=n-1; pos1>=0; pos1--) {
        for (pos2=1,aux=0; pos2<n; pos2++) if (strcmp(nome[pos2], nome[aux])>0) aux = pos2;
        strcpy(nomeaux, nome[aux]);
        strcpy(nome[aux], nome[pos2]);
        strcpy(nome[pos2], nomeaux);
      }
    for (pos1=0; pos1<n; pos1++) printf("%s\n", nome[pos1]);
    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportaram, n-comportaram);
    system("pause");
}