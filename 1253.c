#include <stdio.h>
#include <string.h>
int main () {
    int n, tr, auxint;
    char texto[51], auxch;
    scanf("%i", &n);
    for (;n>0;n--) {
        getchar();
        gets(texto);
        scanf("%i", &tr);
        for (auxint=0;auxint<strlen(texto);auxint++) {
            if (texto[auxint]>64 && texto[auxint]<91) {
                auxch = texto[auxint]-tr;
                if (auxch<65) {auxch += 26;}
            }
            printf("%c", auxch);
        }
        printf("\n");
    }
    system("pause");
}