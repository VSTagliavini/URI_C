#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Comp
{
    char nome[101];
    int p, k, m;
};

int main ()
{
    int n, aux, camp;
    struct Comp *lista;
    scanf("%d", &n);
    lista = (struct Comp*) malloc(sizeof(struct Comp)*n);
    scanf(" %s %d %d %d", &lista[0].nome, &lista[0].p ,&lista[0].k ,&lista[0].m);
    camp = 0;
    for (aux=1; aux<n; aux++)
    {
        scanf(" %s %d %d %d", &lista[aux].nome, &lista[aux].p ,&lista[aux].k ,&lista[aux].m);
        if (lista[aux].p>lista[camp].p) camp = aux;
        if (lista[aux].p==lista[camp].p)
        {
            if (lista[aux].k>lista[camp].k) camp = aux;
            if (lista[aux].k==lista[camp].k)
            {
                if (lista[aux].m<lista[camp].m) camp = aux;
                if (lista[aux].m==lista[camp].m && strcmp(lista[camp].nome, lista[aux].nome)>0) camp = aux;
            }
        }
    }
    printf("%s\n", lista[camp].nome);
}