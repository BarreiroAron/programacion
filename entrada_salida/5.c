#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int cant_chars = 0;
 // FILE *fp = fopen(argv[1], "r");
//  while ((c = fgetc(fp)) != EOF) {
  while ((c = getchar()) != EOF) {
    cant_chars++;
  }
  printf("%d\n", cant_chars - 1);
  return 0;
}
