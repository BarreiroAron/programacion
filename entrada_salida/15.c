#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen((argv[1]), "r");
  int cantidad = 1000;
  char array[cantidad];
    for(int i = 0; i < argc; i++) {
      int numero = 1;
  while(fgets(array, cantidad, fp) != NULL) {
    printf("%d  %s", numero, array);
  //  if(array == 'A' || array == 'E' || array == 'I' || array == 'O' || array == 'U' || array == 'a' || array == 'e' || array == 'i' || array == 'o' || array == 'u') { numero++; }
  numero ++;
      }
    }
    fclose(fp);
    return 0;
}
