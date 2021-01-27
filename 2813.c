#include <stdio.h>

int main(){
  int n, guacas=0, guaesc=0, atcas=0, atesc=0;
  char sd[6], sn[6];
  for (scanf("%d", &n); n>0; n--) {
    scanf(" %s %s", &sd, &sn);
    if (sd[0]=='c' && sn[0]=='c' && atcas==0) {guacas++; atcas++;}
    else if (sd[0]=='c' && sn[0]=='s') {
      if (atcas==0) guacas++;
      else atcas--;
      atesc++;
    }
    else if (sd[0]=='s' && sn[0]=='c') {
      if (atesc==0) guaesc++;
      else atesc--;
      atcas++;
    }
  }
  printf("%d %d\n", guacas, guaesc);
  n = getch();
}