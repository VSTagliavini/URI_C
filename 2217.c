#include <stdio.h>

int main () {
    int n, e;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d", &e);
        if (e%2==1) printf("9\n");
        else printf("1\n"); 
    }
}