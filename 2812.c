#include <stdio.h>

int main () {
    int n, m, lis[100], temp, temp2, pos, pos2, rep;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d", &m);
        for (pos=0, pos2=0; pos<m; pos++) {
            scanf("%d", &temp);
            if (temp%2==1) {
                lis[pos2] = temp;
                pos2++;
            }
        }
        do {
            rep = 0;
            for (pos=0; pos<pos2; pos++) {
                if (lis[pos]>lis[pos+1]) {
                    temp = lis[pos];
                    lis[pos] = lis[pos+1];
                    lis[pos+1] = temp;
                    rep = 1;
                }
            }
        } while (rep!=0);
        for (pos=0; pos<pos2; pos++) printf("%d ", lis[pos]);
        printf("\n");
        m = 0;
        for (rep=1, temp=0; rep<pos2; rep++) if (lis[rep]>lis[temp]) {temp = rep; m = 1;}
        if (m==1) {printf("%d", lis[temp]); temp2 = lis[temp]; lis[temp]=0;}
        while (m==1) {
            m=0;
            for (rep=1, temp=0; rep<pos2; rep++) if (lis[rep]<lis[temp] && lis[rep]!=0) {temp = rep; m = 1;}
            if (m==1) {printf("%d", lis[temp]); lis[temp]=0;}
            m=0;
            for (rep=1, temp=0; rep<pos2; rep++) if (lis[rep]>lis[temp] && lis[rep]!=0) {temp = rep; m = 1;}
            if (m==1) {printf("%d", lis[temp]); lis[temp]=0;}
        }
        printf("\n");
    }
    n = getch();
}