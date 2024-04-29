#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
  int a, b, n;
  srand(time(NULL));
  puts("Ingrese un numero base");
  scanf("%d", &a);
  puts("Ingrese un numero final");
  scanf("%d", &b);
  n = rand() % (b-a) + 1 + a;
  printf("%d\n", n);
  return 0;
}
