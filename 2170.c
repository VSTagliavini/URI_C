#include <stdio.h>

int main ()
{
    int n=0;
    double valini, valtot;
    while (scanf("%lf %lf", &valini, &valtot)!=EOF)
        printf("Projeto %d:\nPercentual dos juros da aplicacao:\n%.2lf %%\n", ++n, ((valtot/valini)-1)*100);
    system("pause");
}