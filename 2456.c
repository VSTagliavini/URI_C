#include <stdio.h>

int main () {
    int v[5];
    scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);
    if (v[0]<v[1] && v[1]<v[2] && v[2]<v[3] && v[3]<v[4]) printf("C\n");
    else if (v[0]>v[1] && v[1]>v[2] && v[2]>v[3] && v[3]>v[4]) printf("D\n");
    else printf("N\n");
    v[0] = getch();
}