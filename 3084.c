#include <stdio.h>

int main () {
    int h, m;
    while (scanf("%d %d", &h, &m)!=EOF) {
        printf("%02d:%02d\n", h/30, m/6);
    }
}