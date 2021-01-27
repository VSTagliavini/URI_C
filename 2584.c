#include <stdio.h>
#include <math.h>

int main ()
{
    int n, lado;
    for (scanf("%d", &n); n>0; n--)
    {
        scanf("%d", &lado);
        printf("%.3lf\n", (float) 5*(lado/2.0)*(lado/2.0)/tan(36.0 * M_PI/180.0));
    }
}