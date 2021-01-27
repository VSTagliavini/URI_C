#include <stdio.h>

int main () {
    int aux, aux2, aux3, nfunc, netap, func[1000]={0}, pequ[1000];
    scanf("%i %i", &nfunc, &netap);
    for (aux=0; aux<nfunc; aux++) scanf("%i", &pequ[aux]);
    for (aux2=0; aux2<netap; aux2++) {
        for (aux=0; aux<nfunc; aux++) func[aux] += pequ[aux];
        aux3 = pequ[nfunc-1];
        for (aux=nfunc-1; aux>0; aux--) pequ[aux] = pequ[aux-1];
        pequ[0] = aux3;
    }
    printf("%i", func[0]);
    for (aux=1; aux<nfunc; aux++) printf(" %i", func[aux]);
    printf("\n");
    system("pause");
}