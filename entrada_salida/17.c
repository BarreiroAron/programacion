#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 200

int main(int argc, char *argv[]) {
  char array[200];
  for(int i = 1; i < argc; i++) {
  FILE *fp = (fopen(argv[i], "r"));
  int detector = 0;
  while(detector < fp && fgets(array, MAXLINE, fp)) {
    if(detector < 10) {
      detector++; } else {
      printf("%s", array);
      }
  }
  fclose(fp);
    }
    return 0;
    } */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {                                     int numerolin = atoi(argv[2]);
    int linarc = 0;
    char linea[1024]; // Tamaño máximo de línea

    FILE *fp = fopen(argv[1], "r"); // Abre el archivo con el nombre proporcionado en argv[1]
    while (fgets(linea, sizeof(linea), fp) != NULL) {
        linarc += 1;
    }

    numerolin = linarc - numerolin;
    linarc = 0;

    fseek(fp, 0, SEEK_SET); // Vuelve al principio del archivo

    while (fgets(linea, sizeof(linea), fp) != NULL) {
        linarc += 1;
        if (linarc > numerolin) {
            printf("%s", linea);
        }
    }

    fclose(fp);
    return 0;
}
