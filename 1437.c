#include <stdio.h>

int main () {
    int ncom, dir;
    char com [1001];
    do {
        dir=0;
        scanf("%i", &ncom);
        if (ncom!=0) {
            scanf("%s", &com);
            for (ncom--; ncom>=0; ncom--) {
                if (com[ncom]=='D') dir++;
                else if (com[ncom]=='E') dir--;
            }
            if (dir%4==0) printf("N\n");
            else {if (dir%4==2 || dir%4==-2) printf("S\n");
            else {if (dir%4==1 || dir%4==-3) printf("L\n");
            else {if (dir%4==3 || dir%4==-1) printf("O\n"); 
            }}}
        }
    } while (ncom!=0);
    system("pause");
}