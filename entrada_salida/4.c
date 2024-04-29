#include <stdio.h>

int main(void) {
  int num;
  int sum = 0;
  while(scanf("%d", &num) != EOF) {
    sum += num;
    if(num == 0) {
      printf("%d\n", sum);
      break;
  }
}
return 0;
}
