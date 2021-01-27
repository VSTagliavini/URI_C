#include <stdio.h>
#include <string.h>

int main () {
    int posn, poss;
    char erro, num[102], saida[102];
    do {
        scanf("%c %s", &erro, &num);
        if (erro!='0' && strcmp(num, "0\0")!=0) {
            for (posn=0, poss=0; posn<=strlen(num); posn++) {
                if (num[posn]!=erro) {
                    saida[poss] = num[posn];
                    poss++;
                }
            }
            while (saida[0]=='0' && saida[1]!='\0') {
                for (poss=0; poss<strlen(saida); poss++) saida[poss] = saida[poss+1];
            }
            if (saida[0]=='\0') {saida[0]='0'; saida[1]='\0';}
            printf("%s\n", saida);
        }
        fflush(stdin);
    } while (erro != '0' || strcmp(num, "0\0")!=0);
    system("pause");
}