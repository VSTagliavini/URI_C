#include <stdio.h>

int sobrevivente (int npes, int salto) {
    if (npes==1) return 1;
    return (sobrevivente(npes-1,salto)+salto-1)%npes+1;
}

int main () {
    int n, naux, npes, salto;
    for (scanf("%d", &n), naux=1; naux<=n; naux++) {
        scanf("%d %d", &npes, &salto);
        printf("Case %d: %d\n", naux, sobrevivente(npes, salto));
    }
}