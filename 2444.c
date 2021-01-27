#include <stdio.h>

int main () {
    int vol, n, bot;
    for (scanf("%d %d", &vol, &n); n>0; n--) {
        scanf("%d", &bot);
        if (vol+bot>=0 && vol+bot<=100) vol += bot;
        else if (vol+bot>100) vol = 100;
        else if (vol+bot<0) vol = 0;
    }
    printf("%d", vol);
    vol = getch();
}