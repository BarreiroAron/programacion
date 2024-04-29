#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 10

int main(int argc, char *argv[]) {
  char array[10];
  for(int i = 1; i < argc; i++) {
  FILE *fp = (fopen(argv[i], "r"));
  int detector = 0;
  while(detector < 10 && fgets(array, MAXLINE, fp)) {
      printf("%s", array);
      detector++;
      }
  fclose(fp);
    }
    return 0;
    }
