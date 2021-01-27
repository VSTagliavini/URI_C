#include <stdio.h>
#include <string.h>

int main () {
    int n, letras[26], soma, aux;
    char frase[1001];
    for (scanf("%i", &n); n>0; n--) {
        for (aux=0; aux<26; aux++) letras[aux]=0;
        soma=0;
        fflush(stdin);
        fgets(frase, 1001, stdin);
        for (aux=0; aux<strlen(frase); aux++) if (frase[aux]>96 && frase[aux]<123) letras[frase[aux]-97] = 1;
        for (aux=0; aux<26; aux++) if (letras[aux]==1) soma+=1;
        if (soma==26) printf("frase completa\n");
        else if (soma>12) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
    system("pause");
}