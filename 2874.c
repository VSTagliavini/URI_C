#include <stdio.h>
#include <string.h>

int main () {
    int num, dec, pos, pot;
    char bin[9];
    while (scanf("%i", &num)!=EOF) {
        for (;num>0;num--) {
            fflush(stdin);
            scanf("%s", &bin);
            for (pos=strlen(bin)-1, pot=1, dec=0; pos>=0; pos--, pot*=2) {
                if(bin[pos]=='1') dec+=pot; 
            }
            printf("%c", dec);
        }
        printf("\n");
    }
}