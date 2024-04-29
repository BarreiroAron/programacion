#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n = 0;
  while (scanf("%d", &n) != EOF) {
    if (n >= a && n <= b){ printf("%d", n);}
  }
  printf("\n");
  return 0;
}
