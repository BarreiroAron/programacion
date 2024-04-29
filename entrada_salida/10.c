#include <stdio.h>
#include <stdlib.h>

void efescan() {
  int lineas = 0;
  int c = 0;
  while((c = getchar())!= EOF) {
    if(c == '\n') {
      lineas ++;
    }
  }
  printf("Cantidad de lineas: %d\n", lineas);
}

int main(void) {

  efescan();
  return 0;
}
