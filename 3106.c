#include <stdio.h>

int main () {
    int n1, n2, n3=0;
    scanf("%d", &n1);
    for (; n1>0; n1--) {
        scanf("%d", &n2);
        n3+=n2/3;
    }
    printf("%d\n", n3*3);
    system("pause");
}