#include <stdio.h>
#include <math.h>

int main () {
    int num, c, d;
    long int np;
    scanf("%i", &num);
    for (;num>0;num--) {
        scanf("%i %i", &c, &d);
        if (c!=0 || d!=0) np = pow(26, c)*pow(10, d);
        else np = 0;
        printf("%li\n", np);
    }
    system("pause");
}