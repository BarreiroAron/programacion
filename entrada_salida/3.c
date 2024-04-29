#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int suma = 0;
  while(1) {
  int a = scanf("%d", &n);
  suma += n;
  n = 0;
  if(a == EOF) {
    break;
  }
  }
  printf("%d\n", suma);
  return 0;
}

/* otra forma (forma del profe) */
