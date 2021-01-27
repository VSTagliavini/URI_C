#include <stdio.h>

int main () {
    int alf[91], n, g, aux;
    char r;
    for (scanf("%d %d", &n, &g); n>0; n--) {
        scanf(" %c %d", &r, &aux);
        alf[r] = aux;
    }
    aux = 0;
    for (scanf("%d", &n); n>0; n--) {
        scanf(" %c", &r);
        aux += alf[r];
    }
    if (aux<g) printf("%d\nMy precioooous\n", aux);
    else printf("%d\nYou shall pass!\n", aux);
    system("pause");
}