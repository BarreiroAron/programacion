#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int c = 0;
  while((c = getchar()) != EOF) {
  int variable = scanf("%d", &n);
  if(variable != ' ' && variable != '\n' && variable != '\t') { printf("%d", n); }
  }
  printf("\n");
  return 0;
}
