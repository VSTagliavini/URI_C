#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[50], dest;
    int dist;
};

void vetordins (struct  Pessoa *passageiros, int tam) {
    int i, j;
    struct Pessoa aux;
    for (i = 1; i < tam; i++) {
        aux = passageiros[i];
        j = i-1;
        while (j>=0 && passageiros[j].dist>aux.dist) {
            passageiros[j+1] = passageiros[j];
            j -= 1;
        }
        while (j>=0 && passageiros[j].dist==aux.dist && passageiros[j].dest>aux.dest) {
            passageiros[j+1] = passageiros[j];
            j -= 1;
        }
        while (j>=0 && passageiros[j].dist==aux.dist && passageiros[j].dest==aux.dest && strcmp(passageiros[j].nome, aux.nome)>0) {
            passageiros[j+1] = passageiros[j];
            j-=1;
        }
        passageiros[j + 1] = aux;
    }
}

int main ()
{
    struct Pessoa *passageiros;
    int q, aux;
    while (scanf("%d", &q)!=EOF)
    {
        passageiros = (struct Pessoa*) malloc(sizeof(struct Pessoa)*q);
        for (aux=0; aux<q; aux++) scanf(" %s %c %d", &passageiros[aux].nome, &passageiros[aux].dest, &passageiros[aux].dist);
        vetordins(passageiros, q);
        for (aux=0; aux<q; aux++) printf("%s\n", passageiros[aux].nome);
    }
}