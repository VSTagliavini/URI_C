#include <stdio.h>
#include <string.h>

int main () {
    int n, aux;
    char frase[10000][21], palavra[21];
    for (scanf("%d", &n), aux=0; aux<n; aux++) {
        scanf("%s", palavra);
        if (strlen(palavra)==3 && ((palavra[0]=='O' && palavra[1]=='B') || (palavra[0]=='U' && palavra[1]=='R'))) palavra[2]='I';
        strcpy(frase[aux], palavra);
    }
    for (aux=0; aux<n; aux++) {
        printf("%s", frase[aux]);
        if (aux<n-1) printf(" ");
    }
    printf("\n");
    n = getch();
}